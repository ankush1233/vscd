#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a;
    int res = 0;
    int n = 0;
    int k = 0;
    cin >> n;
    cin >> k;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        a.push_back(num);
    }
    
    sort(begin(a), end(a));
    for(int i = 0; i < k; i++) {
        if((a[0]+a[1]) < a[a.size()-1]) {
            a.erase(a.begin(), a.begin() + 2);
        }
        else {
            a.pop_back();
        }
        sort(begin(a), end(a));
    }
    res+= accumulate(a.begin(), a.end(), 0);
    cout<<res;
    return 0;
}
/*
6 2
15 22 12 10 13 11*/