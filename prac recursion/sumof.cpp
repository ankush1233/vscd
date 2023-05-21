#include<iostream>
using namespace std;
int sumall(int N){
    if(N==0)return 0;// base condition

    return (N%10)+sumall(N/10);
}
int main()
{
    int a=1256;
    cout<<sumall(a);
    
}