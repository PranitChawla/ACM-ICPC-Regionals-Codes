#include <iostream>
#include <math.h>
using namespace std;
int count=1;
int xMove[8] = {  2, 1, -1, -2, -2, -1,  1,  2 };
 int yMove[8] = {  1, 2,  2,  1, -1, -2, -2, -1 };
bool isvalid (int i, int j)
{
	if (i<0||j<0||i>=8||j>=8)
		return false;
	else 
		return true;
}
bool finished (int visited[8][8])
{
	int flag=1;
	for (int i=0;i<8;i++)
	{
		for (int j=0;j<8;j++)
		{
			if (visited[i][j]==0)
				return false;
		}
	}
	return true;
}
bool knightstour (int board[8][8],int visited[8][8],int x,int y,int t)
{
	if (t==64)
		return true;
	else 
	{
		// for (int i=x-2;i<=x+2;i++)
		// {
		// 	for (int j=y-2;j<=y+2;j++)
		// 	{
		// 		int temp=(i+j)-(x+y);
		// 		temp=abs(temp);
		// 		if (temp%2==1&&(i!=x)&&(j!=y))
		// 		{
		// 			if (isvalid(i,j)&&visited[i][j]==0)
		// 			{
		// 				//cout<<i<<" "<<j<<endl;
		// 				visited[i][j]=1;
		// 				// board[i][j]=count;
		// 				count++;
		// 				if (knightstour(board,visited,i,j))
		// 					return true;
		// 					visited[i][j]=0;
		// 			}
		// 		}
		// 	}
			
		// }
		// return false;
		//int i,j;
		// count++;
		// cout<<count<<endl;
	// 	for (int i=0;i<8;i++)
	// {
	// 	for (int j=0;j<8;j++)
	// 		cout<<visited[i][j]<<" ";
	// 	cout<<endl;
	// }
	// cout<<endl<<endl;
		//cout<<i<<" "<<j<<endl;
		// cout<<t<<endl;
		// i=x-2;
		// j=y-1;
		// if (isvalid(i,j)&&visited[i][j]==0)
		// {
		// 	visited[i][j]=1;
		// 	if (knightstour(board,visited,i,j,t+1))
		// 		return true;
		// 	else
		// 		visited[i][j]=0;
		// }
		// i=x-2;
		// j=y+1;
		// if (isvalid(i,j)&&visited[i][j]==0)
		// {
		// 	visited[i][j]=1;
		// 	if (knightstour(board,visited,i,j,t+1))
		// 		return true;
		// 	else 
		// 		visited[i][j]=0;
		// }
		// i=x+2;
		// j=y-1;
		// if (isvalid(i,j)&&visited[i][j]==0)
		// {
		// 	visited[i][j]=1;
		// 	if (knightstour(board,visited,i,j,t+1))
		// 		return true;
		// 	else
		// 		visited[i][j]=0;
		// }
		// i=x+2;
		// j=y+1;
		// if (isvalid(i,j)&&visited[i][j]==0)
		// {
		// 	visited[i][j]=1;
		// 	if (knightstour(board,visited,i,j,t+1))
		// 		return true;
		// 	else 
		// 		visited[i][j]=0;
		// }
		// i=x-1;
		// j=y-2;
		// if (isvalid(i,j)&&visited[i][j]==0)
		// {
		// 	visited[i][j]=1;
		// 	if (knightstour(board,visited,i,j,t+1))
		// 		return true;
		// 	else
		// 		visited[i][j]=0;
		// }
		// i=x-1;
		// j=y+2;
		// if (isvalid(i,j)&&visited[i][j]==0)
		// {
		// 	visited[i][j]=1;
		// 	if (knightstour(board,visited,i,j,t+1))
		// 		return true;
		// 	else 
		// 		visited[i][j]=0;
		// }
		// i=x+1;
		// j=y-2;
		// if (isvalid(i,j)&&visited[i][j]==0)
		// {
		// 	visited[i][j]=1;
		// 	if (knightstour(board,visited,i,j,t+1))
		// 		return true;
		// 	else 
		// 		visited[i][j]=0;
		// }
		// i=x+1;
		// j=y+2;
		// if (isvalid(i,j)&&visited[i][j]==0)
		// {
		// 	visited[i][j]=1;
		// 	if (knightstour(board,visited,i,j,t+1))
		// 		return true;
		// 	else 
		// 		visited[i][j]=0;
		// }

		return false;
	}

}
int main()
{
	int board[8][8];
	board[0][0]=0;
	int visited[8][8];
	for (int i=0;i<8;i++)
	{
		for (int j=0;j<8;j++)
			visited[i][j]=0;
	}
	visited[0][0]=1;
	int result;
	result=knightstour(board,visited,0,0,1);
	cout<<result;
	for (int i=0;i<8;i++)
	{
		for (int j=0;j<8;j++)
			cout<<visited[i][j]<<" ";
		cout<<endl;
	}
}