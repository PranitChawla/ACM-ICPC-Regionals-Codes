#include <bits/stdc++.h>
using namespace std;
typedef struct 
{
	long long int x1,y1,x2,y2;
}line;
int main()
{
	long long int N;
	cin>>N;
	line lines[N+1];
	long long int count[N+1];
	for (int i=1;i<=N;i++)
	{
		cin>>lines[i].x1>>lines[i].y1>>lines[i].x2>>lines[i].y2;
		if (lines[i].x2<lines[i].x1)
		{
			long long int temp;
			temp=lines[i].x1;
			lines[i].x1=lines[i].x2;
			lines[i].x2=temp;
			temp=lines[i].y1;
			lines[i].y1=lines[i].y2;
			lines[i].y2=temp;
		}
		count[i]=0;
	}
	for (int i=1;i<=N;i++)
	{
		long long int rem;
		long long int mul=0;
		//cout<<lines[i].x1<<" "<<lines[i].y1<<" "<<lines[i].x2<<" "<<lines[i].y2<<endl;
		rem=(abs(lines[i].y2-lines[i].y1))%((lines[i].x2-lines[i].x1));
		//cout<<rem<<endl;
		if (rem==0)
			count[i]=lines[i].x2-lines[i].x1+1;
		else
		{
			for (long long int j=0;j<=abs(lines[i].y2-lines[i].y1)*(lines[i].x2-lines[i].x1);j=j+(lines[i].x2-lines[i].x1))
			{
				long long int temp=lines[i].y2-lines[i].y1;
				double result;
				result=(double)j/temp;
			//	cout<<result<<endl;
				if (result==(int)result)
				mul++;
			}
			//mul++;
			count[i]=mul;
		}
	}
	
}