#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,count=0;
	    cin>>n>>m;
	    for(int i=n;i<=m;i++)
	    {
	        for(int j=2;j<=sqrt(i);j++)
	        {
	            if(i%j==0)
	            count++;
	        }
	        if(count==0 && i!=1)
	        cout<<i<<" ";
	        
	        count=0;
	    }
	    cout<<endl;
	}
	return 0;
}
