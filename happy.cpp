#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int num=n;
	int res=0,r;
	while(n>0)
	{
		r=n%10;
		n=n/10;
		res=res+r*r;
		if(n==0)
		{
			n=res;
			res=0;
		}
		if(n==1)
		{
			cout<<"happy number";
			break;
		}
		else
		{
			cout<<"not happy number";
		}
		
	}
	
}
