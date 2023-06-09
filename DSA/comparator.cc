#include <bits/stdc++.h>
using namespace std;

/*bool should_i_swap(pair<int,int>a, pair<int, int>b){
    if(a > b) return true;
    return false;
}

int main() {
    int n;
    int x, y;
    cin >> n;
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++) {
        
        cin >> x >> y;
        a.push_back({x, y});
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(should_i_swap(a[i], a[j])){
                swap(a[i], a[j]);
            }
        }
    }
    for(int i = 0; i<n; i++){
        cout<<a[i].first<<" "<<a[i].second;
        cout<<endl;
    }
    return 0;
}*/
bool cmp(pair<int,int>a, pair<int, int>b){
        if(a.second != b.second){
            if(a.second > b.second) return true;
            return false;
        }
        else{
            if(b.first > a.first) return true;
            return false;
        }

    }

int main(){
    vector<int> result;
    vector<int> a = {1,2,2,5,5,5,1};
    vector<pair<int, int>> a1;
    map<int, int> m;
    for(auto it : a){
        m[it]++;
    }
    for(auto it : m){
        a1.push_back({it.first, it.second});
    }
    for(int i=0; i<3; i++){
        for(int j=i+1; j<3; j++){
            if(cmp(a1[i], a1[j])){
                swap(a1[i], a1[j]);
            }
        }
    }
   
    for (auto p : a1) {
        cout << "(" << p.first << ", " << p.second << ")" << endl;
    }
    for(auto i=0; i<a1.size(); i++){
        for(auto j=0; j<a1[i].second; j++){
            result.push_back(a1[i].first);
        }
    }
    for(auto it : result){
        cout<<it;
    }
}