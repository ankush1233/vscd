// Binary Search Tree - Implemenation in C++
// Simple program to create a BST of integers and search an element in it 
#include<iostream>
#include<queue>
using namespace std;
//Definition of Node for Binary search tree
struct BstNode {
	int data; 
	BstNode* left;
	BstNode* right;
};

// Function to create a new Node in heap
BstNode* GetNewNode(int data) {
	BstNode* newNode = new BstNode();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

// To insert data in BST, returns address of root node 
BstNode* Insert(BstNode* root,int data) {
	if(root == NULL) { // empty tree
		root = GetNewNode(data);
	}
	// if data to be inserted is lesser, insert in left subtree. 
	else if(data <= root->data) {
		root->left = Insert(root->left,data);
	}
	// else, insert in right subtree. 
	else {
		root->right = Insert(root->right,data);
	}
	return root;
}
//To search an element in BST, returns true if element is found
bool Search(BstNode* root,int data) {
	if(root == NULL) {
		return false;
	}
	else if(root->data == data) {
		return true;
	}
	else if(data <= root->data) {
		return Search(root->left,data);
	}
	else {
		return Search(root->right,data);
	}
}
//LevelOrder traversal Time Complexity : O(n)
//                     Space Complexity : O(n)
void LevelOrder(BstNode* root){
	if(root == NULL) return;
	queue<BstNode*> Q;
	Q.push(root);
	while(!Q.empty()){
		BstNode* current = Q.front();
		cout<<current->data<<" ";
		if(current->left !=NULL) Q.push(current->left);
		if(current->right != NULL) Q.push(current->right);
		Q.pop();
	} 
}
int main() {
	BstNode* root = NULL;  // Creating an empty tree
	/*Code to test the logic*/
	char ch = 'y';
	int data;
	while(ch == 'y'){
		cout<<"enter the data ";
		cin>>data;
		root = Insert(root,data);
		cout<<" wanna insert more (y/n)";
		cin>>ch;
	}	
	// Ask user to enter a number.  
	int number;
	cout<<"Enter number be searched\n";
	cin>>number;
	//If number is found, print "FOUND"
	if(Search(root,number) == true) cout<<"Found\n";
	else cout<<"Not Found\n";
	//Level Order Traversal
	LevelOrder(root);
}