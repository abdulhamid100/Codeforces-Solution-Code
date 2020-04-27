#include<iostream>

using namespace std;

struct node{
	int data;
	struct node* left,*right;
};
struct node* create(){

	int x;
	struct node *newnode;
	newnode = new struct node;
	cout<<"Enter the data: ";
	cin>>x;
	if(x==-1)
		return 0;
	newnode->data = x;
	cout<<"Enter the left child of: "<<x<<endl;
	newnode->left = create();
	cout<<"Enter the right child of: "<<x<<endl;
	newnode->right = create();
	return newnode;
}

void preorder(struct node* root){

	if(root == 0)
		return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(struct node* root){

	if(root == 0)
		return ;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

void postorder(struct node* root){

	if(root == 0)
			return ;
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<" ";

}

int main(){
	struct node* root = NULL;
	root = create();
	cout<<"Preorder is: ";
	preorder(root);
	cout<<endl<<"Inorder is: ";
	inorder(root);
	cout<<endl<<"Postorder is: ";
	postorder(root);
}
