#include <stdio.h>

int main()
{
    int i,a=0,n;
    printf("enter the series");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d",fab(a));
        a++;
    }
}
int fab(int b)
{
    if(b<=1)
    return b;
    return fab(b-1)+fab(b-2);
}
