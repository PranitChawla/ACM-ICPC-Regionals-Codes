#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int T;
	cin>>T;
	for (int j=0;j<T;j++)
	{
	int N,A,B;
	cin>>N>>A>>B;
	int P[N];
	for (int i=0;i<N;i++)
		cin>>P[i];
	int num_fav_a=0;
	int num_fav_b=0;
	for (int i=0;i<N;i++)
	{
		if (P[i]==A)
			num_fav_a++;
		if (P[i]==B)
			num_fav_b++;
	}
	 int total_num=1;
	// sort(P,P+N);
	// for (int i=0;i<N-1;i++)
	// {
	// 	if (P[i]==P[i+1])
	// 		continue;
	// 	else 
	// 		total_num++;
	// }
	// cout<<total_num;
	total_num=N;
	float prob_a,prob_b;
	prob_a=(float)num_fav_a/total_num;
	prob_b=(float)num_fav_b/total_num;
	cout<<prob_a*prob_b<<endl;
	}
}