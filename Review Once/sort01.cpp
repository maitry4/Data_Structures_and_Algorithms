#include<iostream>
using namespace std;
// https://www.codingninjas.com/studio/problems/sort-0-1_624379?leftPanelTabValue=PROBLEM
void sortZeroesAndOne(int *input, int size)
{
    int i=0,j=size-1;
    while(i<=j)
    {
        while(input[i]==0 && i<=j)
        {
            i++;
        }
        while(input[j]==1 && i<=j)
        {
            j--;
        }
        if(i<=j)
        {
            swap(input[i],input[j]);
            j--;
            i++;
        }
    }
}
int main()
{
    int arr[7] = {0,1,1,0,1,0,1};
    sortZeroesAndOne(arr,7);
    for(int i=0; i<7; i++)
    {
        cout<<arr[i];
    }
    return 0;
}