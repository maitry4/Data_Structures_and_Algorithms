#include<iostream>
using namespace std;
int main() {
    //keep dividing the number by 2 until remainder is non zero or the number gets 1
    //SECOND APPROACH:
    //find all the powers of 2 and check if the number equates to them.
    //THIRD APPROACH:
    //& the number with (n-1) if it is 0 then the number is power of 2
    //else it isn't a power of 2
    int n = 14;
    if((n&(n-1)) == 0)
    {
       cout<<"Yess!";
    }  
    else
    {
       cout<<"Noo!";
    }  

    return 0;
}