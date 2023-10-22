#include<iostream>
using namespace std;
int main()
{
    int n, sum=0, prod=1;
    cin>>n;
    while(n!=0){
        // getting the last digit
        int digit = n % 10;
        // removing the last digit
        n = n / 10;
        // adding it to sum
        sum += digit;
        // multiplying it to product
        prod *= digit;
    }
    cout<<"Sum = "<<sum<<endl;
    cout<<"Prod = "<<prod<<endl;
    cout<<"Prod - Sum = "<<(prod - sum)<<endl;
    return 0;
}