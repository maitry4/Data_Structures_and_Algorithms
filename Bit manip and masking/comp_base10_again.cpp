#include<iostream>
using namespace std;
// I solved it again.
// It has two approaches.
int comp_base(int n)
{
	int temp = n;
	int mask=0;
	int ans;
	if(n==0)
	{
		return 0;
	}
	while(temp!=0)
	{
		mask=mask<<1;
		mask=mask|1;
		temp=temp>>1;
	}
    //other way
    //ans=~n&mask;
	ans=n^mask;
	return ans;
}
int main()
{
	int comp = comp_base(5);
	cout<<comp;
	return 0;
}