#include<iostream>
using namespace std;
int fact(int n)
{
    int ans=1;
    for(int i=1; i<=n; i++)
    {
        ans=ans*i;
    }
    return ans;
}
int nCr(int n, int r)
{
    int nfact = fact(n);
    int rfact = fact(r);
    int n_rfact = fact(n - r);
    int ans = nfact / (rfact * n_rfact);
    return ans;
}
int main()
{
    // cout<<fact(5);
    cout<<nCr(8,2);
    return 0;
}