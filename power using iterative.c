#include<stdio.h>
pow(int x,int n);
int main()
{
    int x,n;
    printf("enter the number");
    scanf("%d",&x);
    printf("enter the power ");
    scanf("%d",&n);
    printf("%d",pow(x,n));
}
int pow(int x,int n)
{
    int b=1;
    for(int i=1;i<=n;i++)
    {
      b=b*x;
    }
    return b;
}
