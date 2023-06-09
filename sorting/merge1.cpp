#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> A = {1,4,7,9,345,4657,23456,8765456};
    vector<int> B = {2,5,10,11,12,23,43};
    vector<int> R;
    int i = 0;
    int j = 0;
    while(i<A.size() && j<B.size()){
        if(A[i] <= B[j]){
            R.push_back(A[i]);
            i++;
        }
        else{
            R.push_back(B[j]);
            j++;
        }
    }
    while (i < A.size()) {
        R.push_back(A[i]);
        i++;
    }
    while (j < B.size()) {
        R.push_back(B[j]);
        j++;
    }
        for(int i = 0; i<R.size(); i++){
            cout<<R[i]<<" ";
        }
        return 0;
}