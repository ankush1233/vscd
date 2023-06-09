#include<iostream>
using namespace std;
struct test{
    unsigned int bit1: 1;
    unsigned int bit2: 4;
};
int main(){
    struct test T;
    T.bit1 = 1;
    T.bit2 = 9;
}
