#include <bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node* xor_pointer;
};
int main()
{
	struct node* temp;
	struct node* temp2;
	temp= new node;
	temp2=new node;
	long t1;
	long t2;
	t1=(long)temp;
	t2=(long)temp2;
	// /cout<<t1|t2;
	long t3;
	t3=t1^t2;
	cout<<t3;
}
