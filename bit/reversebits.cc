#include<bits/stdc++.h>

using namespace std;
int main(){
    
    int newbit;
    newbit = 7;
    int zerobit = 0;
    for(auto i = 0; i<4; i++){
        zerobit<<=1;
        if((newbit&1) == 1)zerobit++;
        newbit>>=1;
    }
    cout<<zerobit;
    return 0;
}