#include<iostream>
using namespace std;
int calculator(int a, int b, char op)
{
    switch(op) {
        case '+': return (a+b);
                  break;
        case '-': return (a-b);
                  break;
        case '*': return (a*b);
                  break;
        case '/': return (a/b);
                  break;
        default:  cout<<"Invalid Operator"<<endl;
                  return -1;
    }
}
int main()
{
    int a,b;
    char op;

    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter operator: ";
    cin>>op;

    int ans = calculator(a, b, op);
    cout<<endl<<"Result = "<<ans<<endl;
    return 0;
}