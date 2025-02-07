#include <stdio.h>
int main()
{
    int n;
    int p=0;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {
        int p=p*i;
        printf("%d x %d = %d\n",n,i,p);
    }
    return 0;
}