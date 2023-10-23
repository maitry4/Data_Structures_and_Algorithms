#include<iostream>
#include<limits.h>
using namespace std;
int rev_int(int n)
{
	int rev=0;
	while(n!=0)
	{
		int digit=n%10;
		n=n/10;
		if( (rev> INT_MAX/10) || (rev< INT_MIN/10))
		{
			return 0;
		}
		rev=(rev*10)+digit;
	}
	return rev;
}
int main()
{
    // out of range number
	int ans=rev_int(45645568497);
	cout<<ans; //0
    // In range no.
	ans=rev_int(1234);
	cout<<ans; //4321
	return 0;
}