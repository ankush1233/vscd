#include<iostream> 

#define max 5       // macro

using namespace std;

int Q[max];         //global queue array
int front=-1,rear=-1;   //global variable
int N;

int Insert_Queue(int n){
    if(rear == max-1){
        return -1;
    }
    else{
        if(rear == -1){
            rear = front = 0;
            Q[rear] = n;
        }
        else{
            rear++;
            Q[rear] = n;
            
        }
    }
    return 0;
}

void display(){
    cout<<endl;
    for(int i=0;i<N;i++){
        cout<<Q[front]<<"<-";
        
        front++;
    }
}
int main(){
    int x;
    cout <<"How many elements you wanna enter : ";
    cin >> N;
    char ch = 'y';
    while(ch == 'y'){
        cout <<"Enter elements : ";
        cin >> x;
        cout<<endl;
        int check = Insert_Queue(x);
        if(check == -1){
            cout << "Queue overflow" << endl;
            return 0;
        }
        cout <<"Wanna enter more : ";
        cin >> ch;
    }
    display();
}