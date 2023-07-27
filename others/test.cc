#include <iostream>

using namespace std;

 int main(){

    int a = 0x61ff08;
    int* p = &a;
    int c = (int) &p;
    cout << a <<" " << p << " " << c << " " << &p;

    return 0;
 }