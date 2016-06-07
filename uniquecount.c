#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,count=0,j;
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[j]=0;
                a[i]=0;
                break;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i])
            count++;
    }
    printf("%d",count);
    return 0;
}
