//extract all the digits
// 123
// 0 * 10 + 3 | 3 * 10 + 2 | 32 * 10 + 1
// ans * 10 + digit
#include<iostream>
#include<limits.h>
using namespace std;

int main() {
    int n,ans,digit;
    n = 456, ans = 0;
    while(n!=0) {
        digit = n % 10;
        if((ans>(INT_MAX/10))||(ans<(INT_MIN/10)))
            {  
                return 0;
            }
        ans = ans * 10 + digit;
        n = n/10;
    }
    cout<<ans<<endl;
    return 0;
}