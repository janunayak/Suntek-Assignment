#include<iostream>
using namespace std;
int main()
{
	int n;
	std::cout<<"enter the n values:"<<endl;
	std::cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int s=0,s1=0,p=0,r=0,t=0;
	for(int i=0;i<n;i++)
	{
		p=i;
		while(i<n && a[i]>=0)
		{
			s1=s1+a[i];
			i++;
		}
		if(s1>s)
		{
			s=s1;
			r=p;
			t=i;
			s1=0;
		}
	}
	for(int i=r;i<t;i++)
	std::cout<<a[i]<<" ";
	std::cout<<"sum:"<<s<<endl;
	return 0;
	
}
