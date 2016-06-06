#include <stdio.h>

int main()
{
    int n,a[100],i,l,count=0,count1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    l=n%3;
    for(i=0;i<n;i++)
    {
        if(count1==l || count==3)
        {
            printf(",");
            count=0;
            count1=0;
        }
        if(i<l)
        {
            printf("%d",a[i]);
            count1++;
        }
        else
        {
            printf("%d",a[i]);
            count++;
        }
    }
    return 0;
}
