#include<iostream>
using namespace std;
int main()
{
    int n;
	std::cout<<"enter the size of the array:"<<endl;
	std::cin>>n;
	std::cout<<"enetr the elements :"<<endl;
	int a[n];
	for(int i=0;i<n;i++)
	std::cin>>a[i];
	int sum=0;
    int sum1=(n*(n+1))/2;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    int s=sum1-sum;
    std::cout<<s<<endl;
    return 0;
    
    
}
