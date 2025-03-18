#include<stdio.h>

void fibo(int a) {
    int first = 0;
    int second = 1;
    int next;

    // Print the first Fibonacci number if the input is 1
    if (a >= 1) printf("%d ", first);

    for (int i = 2; i <= a; i++) {
        next = first + second;
        first = second;
        second = next;
        printf("%d ", next);
    }
}

int main() {
    int c;
    scanf("%d", &c);
    fibo(c);
    return 0;
}
