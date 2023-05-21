#include<iostream>
using namespace std;
int countz(int N){
    int count;
    int rem;
    while(N!=0)
    {rem=N;
      rem=rem%10;
        if(rem==0)
        {
            count++;
        }
        N=N/10;
        countz(N);
    }
    return count;
}
int main()
{int a=120403;
    cout<<countz(a);
}
