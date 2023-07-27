#include<bits/stdc++.h>

using namespace std;
int main(){
    vector<int> v = {1,2,6,3,44,9,2,5,4,-1};
    stack<int> s;
    vector<int> res;
    for(auto i = v.size()-1; i >= 0; i--){
        while(!s.empty() && v[i] >= s.top()){
            s.pop();
        }
        if(!s.empty()) res.push_back(s.top());
        else res.push_back(0);
        s.push(v[i]);
    }
    reverse(begin(res), end(res));
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}