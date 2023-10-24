#include<iostream>
using namespace std;
int set_bits(int n){
    int ans=0;
    while(n!=0)
    {
        int bit = n & 1;
        if(bit == 1)
        {
            ans++;
        }
        n = n>>1;
    }
    return ans;
}
int total_set_bits(int a, int b){
    int total_bits = 0;
    total_bits += set_bits(a);
    total_bits += set_bits(b);
    return total_bits;
}
// To find total set bits in more than 2 numbers.
int total_set_bits(int* a, int size){
    int ans = 0;

    for (int i = 0; i < size; i++){
        ans += set_bits(a[i]);
    }
    return ans;
}
int main()
{
    int arr[5] = {1,2,3,5,7};
    cout<<total_set_bits(arr, 5)<<endl;
    cout<<total_set_bits(5,7);
    return 0;
}