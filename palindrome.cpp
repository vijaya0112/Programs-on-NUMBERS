#include<iostream>
using namespace std;
int main()
{
	int num,rem,rev=0;
	cin>>num;
	int n=num;
	while(num>0)
	{
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;	
	}
	if(rev==n)
	{
		cout<<"palindrome";
	}
	else
	{
		cout<<"Not palindrome";
	}
	return 0;
}
