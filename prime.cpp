#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,count=0;
	cout<<"Enter a number:";
	cin>>n;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
        {
        	count=1;
			cout<<n<<" is not a prime number";
			break;
		}
	}
	if(count==0)
	{
		cout<<n<<" is a prime number";
		return 0;
	}
}
