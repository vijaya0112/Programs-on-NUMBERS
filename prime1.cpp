#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,i;
	bool flag = false;
	cin>>num;
	for(i=2;i<num/2;i++)
	{
		if(num%i==0)
		{
			flag = true;
			cout<<num<<" is not a prime number";
			break;
			
		}
	}
	if(!flag)
	{
		cout<<num<<" is a prime number";
		return 0;
	}
}
