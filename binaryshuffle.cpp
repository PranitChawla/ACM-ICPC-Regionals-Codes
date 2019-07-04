#include <iostream>
#include <math.h>
using namespace std;
int is_power_2 (int a)
{
	if (log2(a)==(int)log2(a))
		return log2(a);
	else 
		return -1;
}
int num_ones (long long int a)
{
	long long int total=0;
	while (a>0)
	{
		if (a%2==1)
			total++;
		a/=2;
	}
	return total;
}
int main()
{
	long int T;
	cin>>T;
	for (int i=0;i<T;i++)
	{
	long long int A,B;
	cin>>A>>B;
	if (A>B)
	{
		cout<<-1<<endl;
	}
	else if (A==B)
		cout<<0<<endl;
	else 
	{
		long long int power_A,power_B,num_of_ones;
		long long int min_steps;
		long long int min_steps_init=0;
		long long int j;
		if (A==0)
		{
			A+=1;
			min_steps_init=1;
		}
		power_A=floor(log2(A));
		power_B=floor(log2(B));
		num_of_ones=num_ones(A);
		//cout<<num_of_ones<<endl;
		//cout<<power_A<<" "<<power_B<<endl;
		long long int closest_to_B_1_max=0;
		long long int closest_to_B_1_min=0;
		long long int closest_to_B_1=-1;
		long long int closest_to_B_2=0;
		if (power_A-power_B>=1||power_A-power_B<=-1)
		{
		// for (long long int i=0;i<num_of_ones;i++)
		// 	closest_to_B_1_max=closest_to_B_1_max+pow(2,power_B-i);
		// for (long long int i=0;i<num_of_ones-1;i++)
		// 	closest_to_B_1_min+closest_to_B_1_min+pow(2,i);
		long long int difference;
		//difference=B-pow(2,power_B);
		//long long int num_of_ones_difference;
		//num_of_ones_difference=num_ones(difference);
		for (long long int i=B-1;i>=pow(2,power_B);i--)
		{
			difference=i-pow(2,power_B);

			if (num_ones(difference)==num_of_ones-1)
			{
				closest_to_B_1=i;
				break;
			}
		}
		//cout<<closest_to_B_1<<endl;
		// for (long long int i=0;i<num_of_ones;i++)
		// 	closest_to_B_2=closest_to_B_2+pow(2,power_B-1-i);
		if (closest_to_B_1==-1)
			{
				long long int new_A=-1;
				int flag=0;
				long long int i=A;
				for (j=B-1;j>=pow(2,power_B);j--)
				{
					difference=j-pow(2,power_B);
					if (num_ones(difference)==num_ones(i)-1)
					{
						
					}
				}
				cout<<j<<" "<<new_A<<endl;
				min_steps=B-j;
				min_steps_init=min_steps_init+new_A-A;
			}
		else 
			min_steps=B-closest_to_B_1;
		cout<<min_steps+min_steps_init<<endl;
		}
		else 
		{
			//cout<<"check";
			cout<<B-A+min_steps_init<<endl;
		}
	}
	}
}