#include<iostream>
#include<queue>
using namespace std;
class tree{
	
	public:
		int data;
		tree*left;
		tree*right;
		tree(int d)
		{
			data=d;
			left=right=NULL;
		}
	};
		
		tree * btree (tree*root)
		{
			cout<<"Data enetry "<<endl;
			int d;
			cin>>d;
			
			root=new tree(d);
			if(d==-1)
			{
				return NULL;
			}
		cout<<"Do left Entry of "<<d<<endl;
		root->left=btree(root->left);
//4 2 1 -1 -1 3 -1-1 5 6 -1 -1 7 -1 -1		
		cout<<"Do Right Entry of "<<d<<endl;
		root->right=btree(root->right);
		}
void inorder(tree*root)
		{
		
		{
			if(root==NULL)
return;
		}
	inorder(root->left);
	cout<<root->data<<" ";	
	inorder(root->right);
}
void preorder(tree*root)
		{
		
		{
			if(root==NULL)
return;
		}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

void postorder(tree*root)
		{
		
		{
			if(root==NULL)
return;
		}
	
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}

main(){
	tree*root=NULL;
	root=btree(root);
	
	cout<<"Inorder: \t\t"<<endl;
	inorder(root);
	cout<<"\nPreorder: \t\t"<<endl;
	preorder(root);
	
	cout<<"\nPsotorder: \t\t"<<endl;
	postorder(root);
}
