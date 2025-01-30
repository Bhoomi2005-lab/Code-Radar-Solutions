#include <stdio.h>
int main()
{
    char a;
    scanf("%d",&a);
    if((a>=65)&&(a<=90))
    {
        printf("Lowercase");
    }
    if((a>=97)&&(a<=122))
    {
        printf("Uppercase");

    }
    return 0;
}