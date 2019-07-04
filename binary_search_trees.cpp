#include <bits/stdc++.h>
using namespace std;
struct tree
{
	int data;
	struct tree* left;
	struct tree* right;
};
void print_in_order (struct tree* root)
{
	if (root!=NULL)
	{
	print_in_order(root->left);
	cout<<root->data<<" ";
	print_in_order(root->right);
	}
}
struct tree* max_element (struct tree* root)
{
	if (root->right==NULL)
		return root;
	else
		return max_element(root->right);
}
struct tree* min_element (struct tree* root)
{
	if (root->left==NULL)
		return root;
	else 
		return (min_element(root->left));
}
struct tree* search_element (struct tree* root,int val)
{
	if (root->data==val||root==NULL)
		return root;
	else 
	{
	if (val>=root->data)
		return search_element(root->right,val);
	else
		return search_element(root->left,val);
	}
}
struct tree* create_new_node (int val)
{
	struct tree* temp=new tree;
	temp->data=val;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
struct tree* insert_element(struct tree* node,int val)
{
	if (node==NULL)
		return (create_new_node(val));
	if (val<node->data)
		node->left=insert_element(node->left,val);
	else if (val>=node->data)
		node->right=insert_element(node->right,val);
	return node;
}
int main()
{
	struct tree* root;
	root=NULL;
	root=insert_element(root,50);
	root=insert_element(root,30);
	root=insert_element(root,20);
	root=insert_element(root,40);
	root=insert_element(root,70);
	root=insert_element(root,5);
	root=insert_element(root,1000);
	root=insert_element(root,100);
	root=insert_element(root,60);
	root=insert_element(root,80);
	root=insert_element(root,10);
	cout<<"The tree is order is "<<endl;
	print_in_order(root);
	struct tree* temp;
	temp=max_element(root);
	cout<<endl;
	cout<<"The max element is ";
	cout<<temp->data;
	cout<<endl;
	temp=min_element(root);
	cout<<"The min element is ";
	cout<<temp->data;
	cout<<endl;
	//cout<<root;
	temp=search_element(root,400);
	cout<<temp;
}


