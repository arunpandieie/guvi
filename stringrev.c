#include <stdio.h>

int main()
{
    char a[10001];
    int l,i;
    scanf("%[^\n]s",a);
    l=strlen(a);
    for(i=l-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
    return 0;
}
