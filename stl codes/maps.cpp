// maps
// INSERTION O(log(n))
//same for deletion and printing
#include<bits/stdc++.h>

using namespace std;

int main(){
    map<int, string> m;
    m[1] = "abk";
    m[10] = "joj";
    m[3] = "dhi";
    m.insert({4, "ldl"});
    //map<int, string> :: iterator it;
   /* for(it = m.begin(); it != m.end(); it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }*/
    for(auto &p : m){
        cout<<p.first<<" "<<p.second<<endl;      
    }
    auto it = m.find(3);
    if(it == m.end())
        cout<<" no value "<< endl;
    else cout<<(*it).first<<" "<<(*it).second<<endl;
    return 0;

}