#include<iostream>
using namespace std;
int proall(int N){
    if(N==0) return 1;// base condition

    return (N%10)*proall(N/10);
}
int main()
{
    int a=126;
    cout<<proall(a);
    
}