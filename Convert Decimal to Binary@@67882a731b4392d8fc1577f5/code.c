#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    char  s1[100];
    a1=a;
    while(a1>a)
    {
        if(a1%2==0)
        {
            s1=s1+'0';
        }
        else if(a%2==1)
        {
            s1=s1+'0';
        }
        else
        {
            a1=a1/2;
        }
        
    }
    printf("%s",s1);
}