#include <stdio.h>
int main()
{
    int c=0;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {
        if(n%i==0){
            c=c+1;
        }
        
    }
    if(c==2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
    return 0;

}