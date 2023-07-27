#include <bits/stdc++.h>

using namespace std;

stack<char> s1;
vector<char> s2;
bool isValid(string s) {

    if(s.length() % 2 == 1) return true;
    else{
        for(auto i = 0; i<s.length(); i+=2){
            if(s[i] == '(') s1.push(')');
            else if(s[i] == '[') s1.push(']');
            else if(s[i] == '{')s1.push('}');
            else return false;
        }
        while (!s1.empty()) {
            s2.push_back(s1.top());
            s1.pop();
        }

        cout<<s2[0]<<" "<<s2[1]<<" "<<s2[2]<<" ";
        for(auto i = s.length()-1; i>0; i-=2){
            if(s[i] != s1.top()) return false;
            else {
                s1.pop();
                //s2.pop();
            }
        }
    }
    return true;
}

 int main(){
        string a = "(){}[]";
        isValid(a);

 }