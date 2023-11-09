#include<iostream>
#include<vector>
using namespace std;
//https://leetcode.com/problems/find-all-duplicates-in-an-array/
vector<int> findDuplicates(vector<int>& nums)
{
    vector<int> duplicates;
    for(int i=0; i<nums.size();i++)
    {
        if(nums[abs(nums[i])-1]>0)
        {
            // marking the index negative
            nums[abs(nums[i])-1] = nums[abs(nums[i])-1] * -1;
        }
        else
        {
            duplicates.push_back(abs(nums[i]));
        }
    }
    return duplicates;
}
int main() {
    vector<int>arr{4,4,2,1,2};
    vector<int>ans = findDuplicates(arr);
    for(int i=0; i < ans.size(); i++)
    {
        cout << ans[i] << ' ';
    }
    return 0;
}