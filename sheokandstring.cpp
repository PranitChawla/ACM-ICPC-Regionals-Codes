#include <iostream>
#include <string.h>
using namespace std;
char * sort_strings (char** pointers, int N)
{
	char* min=pointers[0];
	for (int i=1;i<N;i++)
	{
		if (strcmp(pointers[i],min)<0)
			min=pointers[i];
	}
	// for (int i=0;min[i]!='\0';i++)
	// 	cout<<min[i];
	return min;

}
int main()
{
	long int Q,N;
	long int R;
	cin>>N;
	char P[11];
	char strings[N+1][11];
	char* pointers[N+1];
	for (long int i=1;i<=N;i++)
	{
		cin>>strings[i];
	}
	cin>>Q;
	long int i,j;
	for (i=0;i<Q;i++)
	{
		long int l=0;
		cin>>R>>P;
		int length[R+1];
		for (j=1;j<=R;j++)
		{
			int k=0;
			while (strings[j][k]==P[k]&&P[k]!='\0'&&strings[j][k]!='\0')
				k++;
			length[j]=k;
		}
		// for (int i=1;i<=;i++)
		// {
		// 	cout<<length[i]<<" ";
		// }
		int max=length[1];
		for (int i=1;i<=R;i++)
		{
			if (length[i]>max)
				max=length[i];
		}
		for (long int i=1;i<=R;i++)
		{
			if (length[i]==max)
			{
				pointers[l]=strings[i];
				l++;
			}
		}
		char *result;
		result=sort_strings(pointers,l);
		cout<<result<<endl;		
}
}