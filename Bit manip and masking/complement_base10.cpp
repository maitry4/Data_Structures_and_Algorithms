#include<iostream>
#include<limits.h>
using namespace std;

int power(int n, int p) {
    int ans = 1;
    for(int i = 0; i<p; i++) {
        ans *= n; 
    }
    return ans;
}
int binary_to_decimal(int n) {

}
// 110 
// 011
// 0 * 1 + 0 | 1 * 10 + 0 | 1 * 100 + 10
// ans = bit * 10^i + ans
int main() {
    // int bit, n = 5, rev = 0;
    // int i = 0;
    // while (n!=0) {
    //     bit = (n&1);
    //     if(bit == 0)
    //     {
    //         cout<<bit<<endl;
    //         bit = 1;
    //         rev = (bit * (power(10, i)) + rev);
    //     }
    //     else
    //     {
    //         cout<<bit<<endl;
    //         bit = 0;
    //         rev = (bit * (power(10, i)) + rev);
    //     }
    //     n = n>>1;
    //     i++;
    // }
    // cout<<rev<<endl;
    int n = 6;
    int mask = 1;
        while (mask < n) {
            mask = (mask << 1) + 1;
        }

    cout<< (n^mask);

    return 0;
}