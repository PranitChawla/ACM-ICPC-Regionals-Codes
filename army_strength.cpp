#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t)
	{
	priority_queue <int,vector <int>,greater<int> > list_mech;
	priority_queue <int,vector <int>,greater<int> > list_godzilla;
	int n_mech;
	int n_godzilla;
	cin>>n_godzilla>>n_mech;
	for (int i=0;i<n_godzilla;i++)
	{
		int temp;
		cin>>temp;
		list_godzilla.push(temp);
	}
	for (int i=0;i<n_mech;i++)
	{
		int temp;
		cin>>temp;
		list_mech.push(temp);
	}
	while (!list_mech.empty()&&!list_godzilla.empty())
	{
		int min_mech;
		int min_godzilla;
		min_godzilla=list_godzilla.top();
		min_mech=list_mech.top();
		if (min_godzilla<min_mech)
			list_godzilla.pop();
		else 
			list_mech.pop();
	}
	if (list_mech.size()==0)
		cout<<"Godzilla"<<endl;
	else
		cout<<"MechaGodzilla"<<endl;
	t--;
}
}