#include<iostream>
using namespace std;
int * dto_bin(int n)
{
	//this function converts decimal number to binary. It returns 8 bit binary represntation in terms of array.
	n=abs(n);
	static int arr[8]={0};
	int i=7;
	while(n != 0)
	{
		int bit = n&1;
		n=n>>1;
		arr[i]=bit;
		i--;
	}
	return arr;
}
void one_comp(int a[], int size){
	//it provides one's complement of given binary representation in array
	for(int i=0; i<size;i++){
		if(a[i]==0){
			a[i]=1;
		}
		else{
			a[i]=0;
		}
	}
}
void two_comp(int a[], int size){
	//it uses one's complement and finds two's complement based on it
	one_comp(a, size);
	if(a[7]==0){
		a[7]=1;
	}
	else{
	   int ind=7;
   	int ele=a[ind];
   	while (ele==1)
   	{
   		a[ind]=0;		
   		ind--;
   		
   		ele=a[ind];
   	}
   	a[ind]=1;
	}
}
void printarray(int a[], int n)
{
	//it prints an array
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main()
{
    int n;
	cin>>n;
	int *a;
	
	a=dto_bin(n);
	two_comp(a,8);

	printarray(a, 8);
    return 0;
}