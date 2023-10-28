// https://leetcode.com/problems/unique-number-of-occurrences/
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
bool uniqueOccurrences(vector<int>& arr) {
    int frequencies[2001] = {0};
    vector<int> uniques;
    for(int i = 0; i <arr.size(); i++) {
        frequencies[arr[i]+1000]++;
    }
    for(int i = 0; i <2001; i++) {
        if(frequencies[i]!=0) {
            uniques.push_back(frequencies[i]);
        }
    }
    return uniques.size() == unordered_set<int>(uniques.begin(), uniques.end()).size();
}
bool uniqueOccurrences_another(vector<int>& arr) {
    int frequencies[2001] = {0};
    bool uniques[1001] = {false}; //{} or {0}
    for(int i = 0; i <arr.size(); i++) {
        frequencies[arr[i]+1000]++;
    }
    for(int i = 0; i <2001; i++) {
        int freq =frequencies[i];
        if(freq!=0) {
            if(uniques[freq]) {
                return false;
            }
        }
        uniques[freq] = true;
    }
    return true;
}

int main()
{
    vector<int> a{1,1,1,2,2,3,4,4,4,4};
    vector<int> b{2,2,2,1,1,1,3,4,4};
    if(uniqueOccurrences(a)){
        cout<<"unique"<<endl;
    }
    else
    {
        cout<<"not unique"<<endl;
    }
    if(uniqueOccurrences_another(b)){
        cout<<"unique"<<endl;
    }
    else
    {
        cout<<"not unique"<<endl;
    }
    return 0;
}