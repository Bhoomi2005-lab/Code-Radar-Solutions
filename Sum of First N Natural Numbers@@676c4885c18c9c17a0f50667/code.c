#include <stdio.h>
int main()
{
    int s=0;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {
        s=s+i;

    }
    printf("%d",s);
    return 0;
}