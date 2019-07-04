#include <iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	for (int i=0;i<T;i++)
	{
	int N;
	cin>>N;
	int A[N];
	for (int i=0;i<N;i++)
		cin>>A[i];
	int sum=0;
	for (int i=0;i<N;i++)
		sum+=A[i];
	if (sum%2==1)
		cout<<"YES"<<endl;
	else 
		cout<<"NO"<<endl;
	}
}