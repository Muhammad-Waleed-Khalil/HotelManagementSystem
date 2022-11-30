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
			this->left=this->right=null;	
			
		}
	};
	
		
		node* root  = null;
		Tree()
		{
			node* a=new node(1);
			node* b=new node(2);
			node* c=new node(3);
			node* d=new node(4);
			node* e=new node(5);
			node* f=new node(6);
			node* g=new node(7);
			
			
			d->left=a;d->right=e;
			a->left=b;a->right=c;
			e->left=f;e->right=g;
			root=d;
			
			
		}
		
		void preorder(node*ptr)
		{
			if(ptr!=nullptr)
			{
				cout<<" "<<ptr->data;
				preorder(ptr->left);
				preorder(ptr->right);
			}
		}
		
		void inorder(node*ptr){
			
			if(ptr!=nullptr)
			{
				inorder(ptr->left);
				cout<<" "<<ptr->data;
				inorder(ptr->right);
			}
		}
		
		void postorder(node*ptr)
		{
			if(ptr!=nullptr)
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
	if(obj.root==nullptr)
	{
		cout<<"Treee is EMpty "<<endl;
		
	}
	else{
		cout<<"Preorder \t:\t";
		obj.preorder(obj.root);
		
		cout<<"Inorder \t:\t";
		obj.inorder(obj.root);
		
		cout<<"Postorder \t:\t";
		obj.postorder(obj.root);
	}
}
