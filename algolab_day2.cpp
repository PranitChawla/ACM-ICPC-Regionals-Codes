#include <iostream>
using namespace std;
typedef struct rm
{
	int hInd;
	int vInd;
}room;
struct node
{
	room data;
	struct node* next;
};
typedef struct
{
	struct node* head;
}STACK;
typedef struct node node;
typedef struct node* list;
void INIT (STACK* s)
{
	s->head=NULL;
}
int isempty (STACK* s)
{
	if (s->head==NULL)
		return 1;
	else 
		return 0;
}
void push (STACK* s, room data1)
{
	node* temp;
	temp=new node;
	temp->data.hInd=data1.hInd;
	temp->data.vInd=data1.vInd;
	temp->next=NULL;
	if (s->head==NULL)
		s->head=temp;
	else 
	{
		node* temp1;
		temp1=s->head;
		temp->next=temp1;
		s->head=temp;
	}
}
void pop (STACK* s)
{
	if (!isempty(s))
	{
		node* temp=s->head;
		s->head=s->head->next;
		delete (temp);
	}
}
int strategy1 (list maze[][20],int n, room start, room end)
{
	bool is_visited [20][20];
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)
			is_visited[i][j]=0;
	STACK* s;
	s=new STACK;
	INIT(s);
	is_visited[start.hInd][start.vInd]=1;
	push(s,start);
	while (!isempty(s))
	{
		node* temp;
		temp=s->head;
		node* neighbor;
		neighbor=maze[temp->data.hInd][temp->data.vInd];
		cout<<temp->data.hInd<<" "<<temp->data.vInd<<endl;
		pop(s);
		while (neighbor!=NULL)
		{
		if (is_visited[neighbor->data.hInd][neighbor->data.vInd]==0)
			{
				room r;
				r.hInd=neighbor->data.hInd;
				r.vInd=neighbor->data.vInd;
				is_visited[neighbor->data.hInd][neighbor->data.vInd]=1;
				push(s,r);
			}
			neighbor=neighbor->next;
		}
	}
	if (is_visited[end.hInd][end.vInd]==0)
	 	return 0;
	 else 
	 	return 1;
}
void createmaze (list maze[][20],int n,int H[][20],int V[][20])
{
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)
			maze[i][j]=NULL;
	for (int i=0;i<n+1;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (H[i][j]==1)
			{
				node* temp;
				temp=new node;
				temp->data.hInd=i-1;
				temp->data.vInd=j;
				temp->next=NULL;
				if (maze[i][j]==NULL)
					maze[i][j]=temp;
				else
				{
					node* head_temp=maze[i][j];
					while (head_temp->next!=NULL)
						head_temp=head_temp->next;
					head_temp->next=temp;
				}

			}
			if (H[i+1][j]==1)
			{
				node* temp;
				temp=new node;
				temp->data.hInd=i+1;
				temp->data.vInd=j;
				temp->next=NULL;
				if (maze[i][j]==NULL)
				{
					//cout<<i<<" "<<j<<endl;
					maze[i][j]=temp;
					//cout<<maze[i][j]->data.hInd<<" "<<maze[i][j]->data.vInd<<endl;
				}
				else
				{
					//cout<<i<<" "<<j<<endl;
					node* head_temp=maze[i][j];
					while (head_temp->next!=NULL)
						head_temp=head_temp->next;
					head_temp->next=temp;
				}
			}
		}
	}
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<n+1;j++)
			{
			if (V[i][j]==1)
			{
				node* temp;
				temp=new node;
				temp->data.hInd=i;
				temp->data.vInd=j-1;
				temp->next=NULL;
				if (maze[i][j]==NULL)
					maze[i][j]=temp;
				else
				{
					node* head_temp=maze[i][j];
					while (head_temp->next!=NULL)
						head_temp=head_temp->next;
					head_temp->next=temp;
				}

			}
			if (V[i][j+1]==1)
			{
				node* temp;
				temp=new node;
				temp->data.hInd=i;
				temp->data.vInd=j+1;
				temp->next=NULL;
				if (maze[i][j]==NULL)
					maze[i][j]=temp;
				else
				{
					node* head_temp=maze[i][j];
					while (head_temp->next!=NULL)
						head_temp=head_temp->next;
					head_temp->next=temp;
				}

			}
		}
	}
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			node* temp=maze[i][j];
			cout<<"("<<i<<","<<j<<")"<<"--->  ";
			while (temp!=NULL)
			{
				cout<<"("<<temp->data.hInd<<","<<temp->data.vInd<<"),";
				cout<<" ";
				temp=temp->next;
			}
			cout<<endl;
		}
	}
}
int main()
{
	int n;
	int H[20][20];
	int V[20][20];
	list maze[20][20];
	cin>>n;
	for (int i=0;i<n+1;i++)
		for (int j=0;j<n;j++)
			cin>>H[i][j];
	for (int i=0;i<n;i++)
		for (int j=0;j<n+1;j++)
			cin>>V[i][j];
	room start,finish;
	cin>>start.hInd>>start.vInd;
	cin>>finish.hInd>>finish.vInd;
	cout<<start.hInd<<" "<<start.vInd<<endl;
	//cout<<"dskka";
	createmaze(maze,n,H,V);
	cout<<strategy1(maze,n,start,finish);
}
