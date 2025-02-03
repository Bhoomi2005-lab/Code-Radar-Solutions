#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=b-a;
    if(c>a)
    {
        printf("Profit");

    }
    else if(c<a)
    {
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }

}