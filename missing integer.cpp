#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],i;
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    unordered_map<int,int>m;
	    for(i=0;i<n;i++)
	    {
	        if(a[i]>0)
	        m[a[i]]++;
	    }
	    int num=1;
	    while(1)
	    {
	        if(m.find(num)==m.end())
	         {
	             break;
	         }
	         num++;
	    }
	    cout<<num<<endl;
	}
	return 0;
}
