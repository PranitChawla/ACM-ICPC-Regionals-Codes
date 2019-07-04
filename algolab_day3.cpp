#include <iostream>
#include <string.h>
using namespace std;
typedef struct treenode
{
	char word[100];
	struct treenode* leftchild;
	struct treenode* rightchild;
	struct treenode* parent;
}NODE,*NODEPTR;
NODEPTR tree_succesor (NODEPTR root)
{
	if (root->rightchild!=NULL)
	{
		NODEPTR temp;
		temp=root->rightchild;
		while (temp->leftchild!=NULL)
			temp=temp->leftchild;
		return temp;
	}
	else
	{
		NODEPTR temp=root;
		NODEPTR par=root->parent;
		while (par!=NULL&&temp==par->rightchild)
		{
			temp=par;
			par=par->parent;
		}
		return par;
	}
}
bool check_prefix (char s[],char pattern[])
{
	int i,j;
	int n=strlen(pattern);
	for (i=0;i<n;i++)
	{
		//cout<<"run"<<endl;
		if (pattern[i]!=s[i])
			return false;
	}
	return true;
}
NODEPTR insert(NODEPTR a)
{
	char temp[100];
	cin>>temp;
	if (a==NULL)
	{
		a=new NODE;
		strcpy(a->word,temp);
		a->leftchild=NULL;
		a->rightchild=NULL;
		a->parent=NULL;
		return a;
	}
	else
	{
		NODEPTR t,r;
		r=a;
		t=new NODE;
		strcpy(t->word,temp);
		while (1)
		{
			if (strcmp(t->word,r->word)<0)
				{
					if (r->leftchild==NULL)
						{
							r->leftchild=t;
							t->leftchild=NULL;
							t->rightchild=NULL;
							t->parent=r;
							break;
						}
					r=r->leftchild;
				}

			else
			{
				if (r->rightchild==NULL)
					{
						r->rightchild=t;
						t->leftchild=NULL;
						t->rightchild=NULL;
						t->parent=r;
						break;
					}
				r=r->rightchild;
			}
		}
		return a;
	}
}
void inorder (NODEPTR root)
{
	if (root!=NULL)
	{
		inorder(root->leftchild);
		cout<<root->word<<" ";
		inorder(root->rightchild);
	}
}
void delete_node (NODEPTR root,char c[])
{
	if (root==NULL)
	{
		cout<<"element not found"<<endl;
		//return NULL;
	}
	else if (strcmp(root->word,c)==0)
	{
		if (root->leftchild==NULL&&root->rightchild==NULL)
		{
			if (root->parent->rightchild==root)
				root->parent->rightchild=NULL;
			else
				root->parent->leftchild=NULL;
			delete root;
		}
		else if (root->leftchild==NULL&&root->rightchild!=NULL)
		{
			strcpy(root->word,root->rightchild->word);
			root->rightchild=NULL;
			delete root->rightchild;
		}
		else if (root->leftchild!=NULL&&root->rightchild==NULL)
		{
			strcpy(root->word,root->leftchild->word);
			root->leftchild=NULL;
			delete root->leftchild;
		}
		else
		{
			NODEPTR temp;
			temp=tree_succesor(root);
			strcpy(root->word,temp->word)
		}
	}
	else if (strcmp(root->word,c)<0)
	{
		delete_node(root->rightchild,c);
	}
	else if (strcmp(root->word,c)>0)
	{
		delete_node(root->leftchild,c);
	}

}
void find_extensions (NODEPTR root, char pattern [])
{
	NODEPTR temp;
	temp=root;
	// while (!check_prefix(temp->word,pattern))
	// 	temp=temp->rightchild;
	//cout<<temp->word;
	if (root==NULL)
		return;
	while (temp!=NULL&&check_prefix(temp->word,pattern))
	{
		if (temp->leftchild==NULL)
		{
			cout<<temp->word<<" ";
			temp=temp->rightchild;
		}
		else
		{
			NODEPTR pre;
			pre=temp->leftchild;
			while (pre->rightchild!=NULL&&pre->rightchild!=temp)
				pre=pre->rightchild;
			if (pre->rightchild==NULL)
			{
				pre->rightchild=temp;
				temp=temp->leftchild;
			}
			else
			{
				pre->rightchild=NULL;
				cout<<temp->word<<" ";
				temp=temp->rightchild;
			}

		}
	}
 }
int main()
{
	NODEPTR root=NULL;
	int n;
	cin>>n;
	for (int i=0;i<n;i++)
		root=insert(root);
	inorder(root);
	cout<<endl;
	char pattern [100];
	cin>>pattern;
	delete_node(root,pattern);
	inorder(root);
	//find_extensions(root,pattern);

}

