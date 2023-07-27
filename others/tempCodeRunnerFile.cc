#include<bits/stdc++.h>

using namespace std;

namespace LevelOrderTrav_struct{
    struct tree{
        int data;
        tree* left;
        tree* right;
    };
}

namespace making_of_newnode{
    using namespace LevelOrderTrav_struct;
    tree* newnode(int Val){
        tree* NewNode = new tree();
        NewNode->data = data;
	    NewNode->left = NewNode->right = NULL;
        return NewNode;
    }
}

namespace input_Val{
    struct tree* root = nullptr;
    int Val;
}

tree* insert(tree* root, int Val){
    using namespace making_of_newnode;
    if(root == nullptr) return newnode(Val);
    else{
        if(root->data <= Val){
            root->left = insert(root->left, Val);
        }
        else{
            root->right = insert(root->right, Val);
        }
    }
    return root;
}

int main(){

    using namespace input_Val;
    using namespace LevelOrderTrav_struct;
    
    char ch = 'y';
    while(ch == 'y'){
        cin>>Val;
        root = insert(root, Val);
        cout<<"wanna enter more (y/n) : ";
        cin>>ch;
    }
    
    
    return 0;
}
