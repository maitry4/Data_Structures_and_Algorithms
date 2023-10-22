#include<iostream>
#include<math.h>
using namespace std;
int binary_to_dec(int n){
    int i=0, ans=0;
    while(n!=0) {
        int digit = n %10;
        n = n / 10;
        if(digit == 1)
        {
            ans += pow(2,i);
        }
        i++;
    }
    return ans;
}
int main()
{
    int dec = binary_to_dec(1010);
    cout<<"dec = "<<dec<<endl;
    return 0;
}