#include<iostream>
using namespace std;
int main()
{
	int n,res=0,rem;
	cout<<"Enter n value:";
	cin>>n;
	while(n!=0)
	{
		rem=n%10;
		res=res*10+rem;
		n=n/10;
		if(n==0)
		{
			break;
		}
	}
	cout<<"Reverse is "<<res;
	return 0;
}
