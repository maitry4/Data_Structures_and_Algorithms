#include<iostream>
using namespace std;
void fibonacci(int n)
{
    cout<<endl;
    int a = 0;
    int b = 1;
    cout<<a<<" ";
    cout<<b<<" ";

    for(int i = 0; i < (n-2); i++)
    {
        int c = a + b;
        cout<<c<<" ";
        a = b;
        b = c;

    }

    cout<<endl;
}
int main()
{
    fibonacci(5);
    fibonacci(10);
    fibonacci(15);
    return 0;
}