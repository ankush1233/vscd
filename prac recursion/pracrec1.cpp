#include<iostream>
using namespace std;

int printAll(int N)
{
    
    cout<<N<<" ";
    if(N==1)
    {
        return 0;
    }
    printAll(N-1);
}
int main()
{
    int a=6;
    printAll(a);
}
