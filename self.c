/*
    Студент: Мареева Ангелина Ильинична
    Группа: ПИ 11
    Назначение: Замена всех вхождений
*/

#include <stdio.h>
#define MAX_SIZE 100

int main(void) {
    int a[MAX_SIZE];
    int n, x, y;
    printf("Enter n (1..100): ");
    if (scanf("%d", &n) != 1) {
        printf("Input error\n");
        return 1;
    }
    if (n < 1 || n > MAX_SIZE) {
        printf("Size error\n");
        return 1;
    }
    printf("Enter array elements (-1000..1000):\n");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &a[i]) != 1) {
            printf("Input error\n");
            return 1;
        }
        if (a[i] < -1000 || a[i] > 1000) {
            printf("Value error\n");
            return 1;
        }
    }
    printf("Enter x and y (-1000..1000): ");
    if (scanf("%d", &x) != 1) {
        printf("Input error\n");
        return 1;
    }
    if (x < -1000 || x > 1000) {
        printf("Value error\n");
        return 1;
    }
    if (scanf("%d", &y) != 1) {
        printf("Input error\n");
        return 1;
    }
    if (y < -1000 || y > 1000) {
        printf("Value error\n");
        return 1;
    }
    printf("Original:");
    for (int i = 0; i < n; i++) {
        printf(" %d", a[i]);
    }
    printf("\n");

    int first = -1;
    int last = -1;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            if (first == -1) {
                first = i;
            }
            last = i;
            count++;
            a[i] = y;
        }
    }
    printf("После:");
    for (int i = 0; i < n; i++) {
        printf(" %d", a[i]);
    }
    printf("\n");
    if (count == 0) {
        printf("Not found; count 0\n");
    } else {
        printf("count %d; first %d; last %d\n", count, first, last);
    }
    return 0;
}