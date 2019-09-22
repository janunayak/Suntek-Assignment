#include<stdio.h>
pow(int x,int n);
mod(int b,int m);
int main()
{
    int x,n,m,b;
    printf("enter the number");
    scanf("%d",&x);
    printf("enter the power ");
    scanf("%d",&n);
    printf("enter the values of m");
    scanf("%d",&m);
    b=pow(x,n);
    int a=mod(b,m);
    printf("%d",a);
}
int pow(int x,int n)
{
    if(n==0)
    return 1;
    return x*pow(x,n-1);
}
int mod(int b,int m)
{
    for(int i=0;;i++)
    {
        if((b-m)<0)
        return b;
        else
        b=b-m;
    }
    
}
