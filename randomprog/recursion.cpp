#include<bits/stdc++.h>
using namespace std;

/*int fibonacci(int n)            // FIBONACCI SERIES
{   
    if()

}*/
int h[100];
int func(int i)
{   if(i==0) return 0;
    int cost=INT_MAX;
    //cout<<"In all cases : ";
    cost=min(cost, func(i-1)+abs(h[i]-h[i-1]));
    cout<<i<<"th"<<" : ";
    cout<<cost<<" yo ";
    cout<<endl;
    if(i>1)
    {   
        cout<<" when i> 1 what value is going : ";
        cout<<cost<<" ";
        cost=min(cost, func(i-2)+abs(h[i]-h[i-2]));
        cout<<" after the comparison : ";
        cout<<cost<<" ";
        cout<<endl;
    }
   cout<<" before return : "<<cost<<"   ";
    return cost;
}
int main()
{
    /*int a=6;
    int y=print(a);
    cout<<y;*/
    cout<<"how many : ";
    int n;
    cin>>n;
    cout<<endl;
    cout<<"give the values";
    for(int i=0;i<n;i++)
    {
        cin>>h[i];
    }
    cout<<"heres the answer : "<<func(n-1);
}