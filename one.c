#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,ans=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        ans=ans^a[i];
    }
    printf("%d",ans);
    return 0;
}
