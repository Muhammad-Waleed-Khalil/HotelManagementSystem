#include<iostream>
using namespace std;

class Tree{
	public:
	struct node{
		int data;
		node*left;
		node*right;
		node*root;
		node(int d)
		{
			this->data=d;
			this->left=this->right=NULL;	
			
		}
	};
		node* root  = NULL;
		Tree()
		{
			node* a=new node(1);
			node* b=new node(2);
			node* c=new node(3);
			node* d=new node(4);
			node* e=new node(5);
			node* f=new node(6);
			node* g=new node(7);
			
			
			d->left=b;d->right=f;
			b->left=a;b->right=c;
			f->left=e;e->right=g;
			root=d;
			
			
		}
		
		void preorder(node*ptr)
		{
			if(ptr!=NULL)
			{
				cout<<" "<<ptr->data;
				preorder(ptr->left);
				preorder(ptr->right);
			}
		}
		
		void inorder(node*ptr){
			
			if(ptr!=NULL)
			{
				inorder(ptr->left);
				cout<<" "<<ptr->data;
				inorder(ptr->right);
			}
		}
		
		void postorder(node*ptr)
		{
			if(ptr!=NULL)
			{
				postorder(ptr->left);
				postorder(ptr->right);
				cout<<" "<<ptr->data;
			}
		}
};
int main()
{
Tree obj;
	if(obj.root==NULL)
	{
		cout<<"Treee is EMpty "<<endl;
		
	}
	else{
		cout<<"Preorder \t:\t";
		obj.preorder(obj.root);
		cout<<endl;
		cout<<"Inorder \t:\t";
		obj.inorder(obj.root);
		cout<<endl;
		cout<<"Postorder \t:\t";
		obj.postorder(obj.root);
	}
}
