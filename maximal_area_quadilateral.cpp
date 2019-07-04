#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int n;
	cin>>n;
	int x[n];
	int y[n];
	for (int i=0;i<n;i++)
	{
		cin>>x[i]>>y[i];
	}
	double max_area_tot=INT_MIN;
	double max_area=INT_MIN;
	double max_area1=INT_MIN;
	int k_max=0;
	int i_max,j_max;
	for (int i=0;i<n-1;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			for (int k=0;k<n;k++)
			{
				if (k!=i&&k!=j)
				{
					double area;
					area=abs(((double)x[i]*((double)y[j]-(double)y[k])+(double)x[j]*((double)y[k]-(double)y[i])+(double)x[k]*(y[i]-y[j])))/(double)2;
					//cout<<area<<endl;
					if (area>max_area)
					{
						max_area1=max_area;
						// k_max=k;
						max_area=area;
					}
					else if (area<max_area&&area>max_area1)
					{
						max_area1=area;
					}
				}	
			}
			cout<<max_area<<" "<<max_area1<<endl;
			//cout<<max_area<<endl;
			//cout<<k_max<<endl;
			// for (int k=0;k<n;k++)
			// {
			// 	if (k!=i&&k!=j&&k!=k_max)
			// 	{
			// 		double area;
			// 		area=abs(((double)x[i]*((double)y[j]-(double)y[k])+(double)x[j]*((double)y[k]-(double)y[i])+(double)x[k]*(y[i]-y[j])))/(double)2;
			// 		if (area>max_area1)
			// 		{
			// 			max_area1=area;
			// 			//k_max=k;
			// 		}
			// 	}
			// }
			// //cout<<endl;
			// cout<<max_area1<<endl;
			if (max_area+max_area1>max_area_tot)
			{
				max_area_tot=max_area+max_area1;
				i_max=i;
				j_max=j;
			}
			//cout<<max_area_tot<<endl;
		}
	}
	cout<<max_area_tot<<endl;
	//cout<<i_max<<" "<<j_max<<endl;
}