#include<iostream>
using namespace std;
int main()
{
	int num,rem,ecount=0,ocount=0;
	cin>>num;
	while(num>0)
	{
		rem=num%10;
		if(rem%2==0)
		{
			ecount++;
		}
		else
		{
			ocount++;
		}
		num=num/10;	
	}
	cout<<"even count:"<<ecount;
	cout<<endl<<"odd count:"<<ocount;
	return 0;
}
