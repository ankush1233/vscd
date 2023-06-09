#include<bits/stdc++.h>
using namespace std;

static bool comp(pair<int,int>a,pair<int,int>b){
        return a.second<b.second;
}

int main(){
      vector<pair<int,int>>v;
        vector<int>ans;
        unordered_map<int,int>m;
        m[2] = 2;
        m[3] = 2;
        m[1] = 1;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto it:m)
        {
            v.push_back({it.first,it.second});
        }
        sort(v.begin(),v.end());
        
        reverse(v.begin(),v.end());
        
        stable_sort(v.begin(),v.end(),comp);
        for(auto it : v)
        {
            cout<<it;
        }
}