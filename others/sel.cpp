#include<iostream>
using namespace std;
#define size 100

int n;
int arr[size];
int a;

void sel_sort(int A[]){

    for(int i=0; i<n; i++){

        for(int j=i+1; j<n; j++){

            if(*(A+i) > *(A+j)){

                a = *(A+i);
                *(A+i) = *(A+j);
                *(A+j) = a;
                
            }
        }
    }
    for(int i=0; i<n; i++)
        cout << *(A+i) <<" ";
}

int main(){
    
    
    //int tar;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    } 
   // cin >> tar;
    sel_sort(arr);
    return 0;
}