#include <iostream>

using namespace std;

struct tree {
    int data;
    tree* left;
    tree* right;
};


namespace making_of_newnode {
    
    tree* newnode(int Val) {
        tree* NewNode = new tree();
        NewNode->data = Val;
        NewNode->left = NewNode->right = nullptr;
        return NewNode;
    }
}

namespace input_Val {
    struct tree* root = nullptr;
    int Val;
}


struct tree* insert(tree* root, int Val) {
    using namespace making_of_newnode;
    if (root == nullptr)
        return newnode(Val);
    else {
        if (root->data <= Val)
            root->left = insert(root->left, Val);
        else
            root->right = insert(root->right, Val);
    }
    return root;
}

int main() {
    using namespace input_Val;
    struct tree* root = NULL;
    char ch = 'y';
    while (ch == 'y') {
        cout<<"enter the value : ";
        cin >> Val;
        root = insert(root, Val);
        cout << "wanna enter more (y/n) : ";
        cin >> ch;
    }
    
    return 0;
}
