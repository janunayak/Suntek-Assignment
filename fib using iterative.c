#include <stdio.h>

int main()
{
    int i,a=1,b=0,c=0,n;
    printf("enter the given input number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        b=a;
        a=c;
        c=b+a;
        printf("%d ",c);
    }
    
}
