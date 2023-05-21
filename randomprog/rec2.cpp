#include<iostream>
#include<string>

using namespace std;
char newa[5];
int id=0;
int moveall(char A[],int idx)
{   
    
    int count;
    if(idx==5)
    {
    	for(int j=id;j<5;j++)
    	{
			newa[j]='x';    		
		}
		for(int i=0;i<5;i++)
		{
			cout<<newa[i];
		}
	}
    if(A[idx]!='x')
    {
        newa[id]=A[idx];
        id++;
        moveall(A,idx+1);
    }
    else
    {
        count++;
        moveall(A,idx+1);
        
    }
    return 1; 
}

int main()
{
    char A[5];
    cout<<"input";
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>A[i];
    }
   moveall(A,0);
   
}