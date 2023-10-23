#include<iostream>
#include<limits.h>
using namespace std;
// I solved it again.
// It has all the approaches.
bool ispow_two(int n)
{
	int flag=0;
	while(n!=2)
	{
		if(n%2!=0)
		{
			flag=1;
			break;
		}
		n=n/2;
	}
	if(flag==1)
	{
		return false;
	}
	return true;
}
//better approach.
bool diffapp(int n)
{
	int ans = 1;
	for(int i=0;i<31;i++)
	{
		if(ans<INT_MAX/2)
		{
			ans=ans*2;
		}
		if(ans==n)
		{
			return true;
		}
	}
	return false;
}
int main()
{
	bool test = ispow_two(14);
	
	if(test)
	{
		cout<<"is power of 2"<<endl;
	}
	else
	{
		cout<<"is not power of 2"<<endl;
	}
	
	test = diffapp(14);
	if(test)
	{
		cout<<"is power of 2";
	}
	else
	{
		cout<<"is not power of 2";
	}
	return 0;
}