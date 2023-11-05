#include<iostream>
using namespace std;
// https://www.codingninjas.com/studio/problems/sort-0-1-2_631055?leftPanelTabValue=PROBLEM
void printarray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sort012(int *arr, int n)
{
    int i = 0;
    int j = 0;
    int k = 0;
    for(int m = 0; m<n; m++)
    {
        if(arr[m]==0)
        {
            i++;
        }
        else if(arr[m]==1)
        {
            j++;
        }
        else if(arr[m]==2)
        {
            k++;
        }
    }
    for(int m = 0; m<i; m++)
    {
        arr[m]=0;
    }
    for(int m = i; m<(i+j); m++)
    {
        arr[m]=1;
    }
    for(int m = (i+j); m<n; m++)
    {
        arr[m]=2;
    }
}
int main()
{
    int a[7]={0,1,2,2,1,0};
    sort012(a,6);
    cout<<"in main"<<endl;
    printarray(a,6);
    return 0;
}