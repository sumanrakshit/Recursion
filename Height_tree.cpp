#include<bits/stdc++.h>
using namespace std;
struct Node
{
	     int data;
         struct Node* left;
	     struct Node* right;
};
Node *newnode(int data)
{
	Node* root=new Node();
	root->data=data;
	root->left=root->right=NULL;
	return(root);
}
int Max_height(Node* root )
{
	if (root==NULL)
	return 0;

		int lh=Max_height(root->left);
	int rh=Max_height(root->right);
	/*if(lh>rh)
	return (1+lh);
	else
	return(1+rh);*/	
	

	return 1+max(rh,lh);
}
int main()
{
	Node *root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->right=newnode(4);
	root->left->left=newnode(5);
	cout<<"maximum height:"<<Max_height(root);
	return 0;
}
