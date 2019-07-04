#include <iostream>
using namespace std;
bool isattacked (int x,int y,int board[100][100],int N)
{
	int i,j;
	for (i=0;i<N;i++)
	{
		if (board[i][y]==1)
			return true;
		if (board[x][i]==1)
			return true;
	}
	for (i=x,j=y;i<N,j<N;i++,j++)
	{
		if (board[i][j]==1)
			return true;
	}
	for (i=x,j=y;i>=0,j>=0;i--,j--)
	{
		if (board[i][j]==1)
			return true;
	}
	return false;
}
bool Nqueens (int board[100][100],int N,int n)
{
	
	if (n==0)
		return true;
	else
	{
		for (int i=0;i<N;i++)
		{
			int flag;
			for (int j=0;j<N;j++)
			{
				flag=0;
				if (isattacked(i,j,board,N))
				{
					flag=1;
					continue;
					// board[i][j]=1;
					// if (Nqueens(board,N-1))
					// 	return true;
					// board[i][j]=0;
				}
				board[i][j]=1;
				if (Nqueens(board,N,n-1))
					return true;
				board[i][j]=0;
			}
			if (flag==1)
					continue;
		}
		return false;
	}
}
int main()
{
	int N;
	cin>>N;
	int board[100][100];
	for (int i=0;i<N;i++)
	{
		for (int j=0;j<N;j++)
			board[i][j]=0;
	}
	int result;
	result=Nqueens(board,N,N);
	for (int i=0;i<N;i++)
	{
		for (int j=0;j<N;j++)
			cout<<board[i][j]<<" ";
		cout<<endl;
	}
}