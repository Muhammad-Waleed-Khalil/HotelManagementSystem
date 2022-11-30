#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node*left;node*right;
		node(int d)
		{
			data=d;
			left=right=NULL;
		}
		
};
node*bst(node*root)
{
	
	cout<<"Enter data"<<endl;
	int d;
	cin>>d;
	root=new node(d); 
	if(d==-1)
	{
		return NULL;
	}
	if(d<root->data)
	{
		root->left=bst(root->left);
	}
	else{		
		root->right=bst(root->right);
	}
}
void inorder(node*root)
{

		
		if(root==NULL)
		{
		
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";	
	inorder(root->right);
	
}
void preorder(node*root)
		{
		
		{
			if(root==NULL)
return;
		}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

void postorder(node*root)
		{
		
		
			if(root==NULL)
{
return;}
postorder(root->left);
postorder(root->right);
cout<<root->data<<" ";
		}
int main()
{
	node*root=NULL;
	root=bst(root);
	bst(root);
	bst(root);
	bst(root);
	bst(root);
	bst(root);
	cout<<"Inorder";
	inorder(root);
	cout<<"\nPreorder: \t\t"<<endl;
	preorder(root);
	
	cout<<"\nPsotorder: \t\t"<<endl;
	postorder(root);
}
//4 2 1 -1 -1 
