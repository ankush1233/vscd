/*#include<bits/stdc++.h>

using namespace std;

int main(){

    #ifdef HEXREF

    int n = 9;
    n=((n | 0x3)>>1);
    cout<<n;
     
    #endif

    #ifdef PRINTREF

    int *p=NULL;
    int a=3;
    p=&a;
    cout<<p;

    #endif

    #ifdef ADDSTR

    string str="ank";
    cout<<str;
    cout<<endl;
    string str1 = "ush";  
    cout<<str+str1;

    #endif

    #ifdef STR
    int t;
    cin >> t;
    //cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        cout<<s<<endl;
    }
    string s="aznk";
    //reverse(s.begin(),s.end());
    //sort(s.begin(),s.end());
    cout<<s;
    #endif
}*/
#include<iostream>
#include<ctime>
#include<windows.h>
using namespace std;

int main(){
  time_t t = time(NULL);  //time() method in c++ is used. object type: current time as a value
  tm *timePtr = localtime(&t); //localtime() method is used to convert current time to identifier
  
//   storing the local time in variables from the timePtr structure
  int seconds = (timePtr->tm_sec);
  int minutes = (timePtr->tm_min);
  int hours = (timePtr->tm_hour);
  
//  displaying the digital clock:
  while(true){
//     system cls is used to clear the output console screen
   system("cls");
   
   cout<<"The digital time is: ";
   cout<<"  "<<hours<<"  :  "<<minutes<<"  :  "<<seconds<<endl;
    
    
// incrementing time:
    
    seconds++;
    
    if(seconds>=60){
      seconds = 1;
      minutes++;
    }
    
    if(minutes>=60){
      minutes=0;
      hours++;
    }
    
    if(hours>=24){
      hours = 00;
    }
    
    Sleep(1000);
  }
  
  return 0;
}