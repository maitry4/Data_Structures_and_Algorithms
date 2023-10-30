#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// I don't know how to print a nested vector
vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    vector<vector<int>> ans;
    for(int i=0; i<arr.size(); i++)
    {
        for(int j=i+1; j<arr.size(); j++)
        {
            if((arr[j]+arr[i])==s)
            {
                vector<int> temp;
                temp.push_back(min(arr[j],arr[i]));
                temp.push_back(max(arr[j],arr[i]));
                ans.push_back(temp);
                for(int k = 0; k<temp.size(); k++)
                {
                    cout<<" "<<temp[k];
                }
                cout<<endl;
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}
int main() {
    vector<int> arr{1,2,3,4,5};
    vector<vector<int> > ans = pairSum(arr,5);
    
    return 0;
}