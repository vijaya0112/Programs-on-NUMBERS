#include<iostream>
using namespace std;
int main()
{
	int num,ecount=0,ocount=0,rem,count=0;
	cin>>num;
	while(num>0)
	{
		rem=num%10;
		num=num/10;
		count++;
		if(rem%2==0)
			ecount++;
		else
			ocount++;
	}
	if(count==ocount)
	{
		cout<<"Strong odd";
	}
	else if(count==ecount)
	{
		cout<<"Strong even";
	}
	else
	{
	    cout<<"Mixed number";
	}
	return 0;
}
