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
		void t(tree*root)
		{
		queue<tree*>q;
		q.push(root);
		while(!q.empty())
		{
			tree*temp=q.front();
			cout<<temp->data<<" ";
			q.pop();
			
			if(temp->left)
			{
				q.push(temp->left);
			}
			if(temp->right)
			{
				q.push(temp->right);
			}
			}	
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
	t(root);
	cout<<endl;
	cout<<"Inorder \t:\t"<<endl;
	inorder(root);
	cout<<"Preorder \t:\t"<<endl;
	preorder(root);
	cout<<"Psotorder \t:\t"<<endl;
	postorder(root);
}
