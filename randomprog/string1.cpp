#include<iostream>
#include<string>
//#include<stdio.h>
using namespace std;
string printout(string x)
{
    x+=x;
    cout<<x;
}
int main()
{
    string str;
    cout<<"input the string"<<endl;
    getline(cin,str);
    cout<<str<<endl;
    printout(str);
    return 0;
}