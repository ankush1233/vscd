#include<iostream>
using namespace std;
int main(){
     cout<<"start : ";
    string s;
    cin >> s;
   /* int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        cout<< endl;
    }*/

    int hash[26] = {0};
    for(int i=0; i<s.size(); i++){
        hash[s[i] - 'a']++;
    }

   /* int q;
    cin >> q;
    while(q--){*/
        char c;
        cin >> c;
        cout<<hash[c - 'a'] << endl;

    return 0;
}