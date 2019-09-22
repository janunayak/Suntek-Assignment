#include<bits/stdc++.h> // missing element in the array.
                        //ex:array of size is 10
                        //array element is 1 2 3 4 6 7 8 9 10
                        //. . missing element is 5.
                        // time complexity is  O(n).
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
long long int n;
cin>>n;
long long int a[n-1];
for(int i=1;i<=n-1;i++)
{
cin>>a[i];
}
long long int sum;
sum=(n*(n+1))/2;
long long int k=0;
for(int i=1;i<=n-1;i++)
{
k+=a[i];
}
long long int ans=sum-k;
cout<<ans<<endl;
}
return 0;
}
