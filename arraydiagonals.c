#include<stdio.h>       // Given a n*n square matrix,return array of its diagonals
int main()
{
    int i,j,k=0,a[20][20],b[10],n;
    printf("enter the size ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
            b[k]=a[i][j];
            k++;
            }
        }
    }
    for(i=0,j=n-1;i<n,j>=0;i++,j--)
    {
        if(i==j)
        continue;
        b[k]=a[i][j];
        k++;
    }
    
   for(i=0;i<k;i++)
   printf("%d ",b[i]);
}

