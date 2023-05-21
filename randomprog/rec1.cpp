#include<iostream> 
#include<vector> 
#include<string>
using namespace std;

bool rec(vector<int> a,int idx)
{
    if(idx==a.size()-1)
    {
        return true;
    }

    if(a[idx]>=a[idx+1])
    {
        return false;
    }
    return rec(a,idx+1);
}

int main()
{
    vector<int> a={1,2,4,4};
    int d=rec(a,0);
    if(d==1)
    {
        cout<<"yeas";
    }
    else
    {
        cout<<"noope";
    }
}