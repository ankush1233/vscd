#include<iostream>
using namespace std;
//GEOMENTRIC PROGRESSION USING RECURSION
int m=2;        // FIRST ELEMENT OF GP
int r=3;        //COMMON RATIO
int gp(int n)
{
    if(n==1) return m;

    return r*gp(n-1);
}
int main()
{
    int a=6;
    cout<<gp(2);
    
}