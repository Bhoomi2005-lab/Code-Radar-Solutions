#include <stdio.h>
int main()
{
    char b;
    int a;
    scanf("%c",&b);
    a=int(b);
    if((a>=65)&&(a<=90))
    {
        printf("Uppercase");
    }
    else if((a>=97)&&(a<=122))
    {
        printf("Lowercase");

    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}