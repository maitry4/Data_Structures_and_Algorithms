#include<iostream>
using namespace std;
int main()
{
    int n, count=0;
    cin>>n;
    while (n!=0){
        // Getting last bit
        int bit = n&1;
        // Incrementing counter if its 1.
        if(bit == 1) {
            count++;
        }
        // removing the last bit.
        n = n>>1;
    }
    cout<<"Total set bits = "<<count<<endl;
    return 0;
}
