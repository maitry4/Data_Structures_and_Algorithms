#include<iostream>
using namespace std;
//Search for an element in an array
bool Search(int arr[], int element, int size)
{
    for(int i = 0; i < size;i++) {
        if(arr[i] == element){
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[10] = {1,2,3,4,4,-6,7,12,-10,10};
    bool res = Search(arr, 0, 10);
    if(res) {
        cout<<"Found"<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }
    
    return 0;
}