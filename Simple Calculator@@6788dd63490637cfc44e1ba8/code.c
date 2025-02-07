#include <stdio.h>

int main() {
    int a, b;
    char ch;

    // Read two integers and an operator in one line
    scanf("%d %d %c", &a, &b, &ch);
    
    // Perform the operation based on the input operator
    if (ch == '+') {
        printf("%d", a + b);
    }
    else if (ch == '-') {
        printf("%d", a - b);
    }
    else if (ch == '*') {
        printf("%d", a * b);
    }
    else if (ch == '/') {
        if (b != 0) {
            printf("%d", a / b);
        } else {
            printf("error");
        }
    }
    else {
        printf("error");
    }

    return 0;
}
