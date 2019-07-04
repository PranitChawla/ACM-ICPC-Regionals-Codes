#include <bits/stdc++.h>
using namespace std;
int factorial (int a)
{
int fact=1;
	for (int i=2;i<=a;i++)
	{
		fact=fact*i;
	}
	return fact;

}
void swap (int Per[],int a,int b)
{
	int temp;
	temp=Per[a];
	Per[a]=Per[b];
	Per[b]=temp;
}
int final_count=0;
int num_of_iter=0;
void generate_perms (int Per[],int start,int end,int A[],int N,int K)
{
	if (start==end)
	{
		num_of_iter++;
		// for (int i=0;i<=end;i++)
		// 	cout<<Per[i]<<" ";
		// cout<<endl;
		int final[N+1];
		int k=0;
		int count_K=0;
		// for (int i=0;i<=end;i++)
		// 	cout<<Per[i]<<" ";
		// cout<<endl;
		for (int i=1;i<=N;i++)
		{
			if (A[i]==0)
				{
					final[i]=Per[k];
					k++;
				}
			else 
			{
				final[i]=A[i];
			}
		}
		// for (int i=1;i<=N;i++)
		// 	cout<<final[i]<<" ";
		// cout<<endl;
		for (int i=2;i<=N;i++)
		{
			if (final[i]>final[i-1])
				count_K++;
		}
		//cout<<count_K<<endl;
		if (count_K==K)
			final_count++;
	//	cout<<final_count<<endl;
		if (num_of_iter==factorial(end+1))
		{
			cout<<final_count<<endl;
			final_count=0;
			num_of_iter=0;
			return;
		}
	}
	else 
	{
		for (int i=start;i<=end;i++)
		{
			swap(Per,start,i);
			generate_perms(Per,start+1,end,A,N,K);
			swap(Per,start,i);
		}
	}
}
int main()
{
	int T;
	cin>>T;
	for (int i=0;i<T;i++)
	{
		int N,K;
		cin>>N>>K;
		int A[N+1];
		for (int i=1;i<=N;i++)
			cin>>A[i];
		int count=0;
		for (int j=1;j<=N;j++)
		{
			if (A[j]==0)
				count++;
		}
		if (count==0)
		{
			int count_K=0;
			for (int i=2;i<=N;i++)
			{
				if (A[i]>A[i-1])
					count_K++;
			}
				if (count_K==K)
					cout<<1<<endl;
				else 
					cout<<0<<endl;
		}
		else 
		{
	//	cout<<count<<endl;
		//int size=N-count;
		int Per[count];
		int k=0;
		for (int i=1;i<=N;i++)
		{
			int flag=0;
			for (int j=1;j<=N;j++)
			{
				if (A[j]==i)
				{
					flag=1;
					break;
				}
			}
			if (flag==1)
			{
				continue;
			}
			else 
			{
				Per[k]=i;
				k++;
			}
		}
		// for (int i=0;i<count;i++)
		// 	cout<<Per[i]<<" ";
		generate_perms(Per,0,count-1,A,N,K);
}
	}
}