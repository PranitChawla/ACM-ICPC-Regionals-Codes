#include <iostream>
using namespace std;
int num_ones (int a)
{
	int total=0;
	while (a>0)
	{
		if (a%2==1)
			total++;
		a/=2;
	}
	return total;
}
int count_one (int n)
{
       int count=0;
        
            while( n )
            {
            n = n&(n-1);
               count++;
            }
            return count;
    }
int main()
{
	int T;
	cin>>T;
	for (int i=0;i<T;i++)
	{
	int A,B;
	cin>>A>>B;
	if (A>1&&B==1)
		cout<<-1<<endl;
	else if (A==B)
		cout<<0<<endl;
	else 
	{
		int count=0;
		while (count_one(A)!=count_one(B-1))
		{
			A++;
			count++;
		}
		cout<<count+1<<endl;
	}
}
}