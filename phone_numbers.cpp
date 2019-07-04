#include <bits/stdc++.h>
using namespace std;
typedef struct 
{
	int num;
	string name;
	vector <string> phone;
	int taxi,pizza,girls;
}data;
int main()
{
	int n;
	cin>>n;
	data arr[n];
	int max_taxi;
	int max_pizza;
	int max_girls;
	for (int i=0;i<n;i++)
	{
		cin>>arr[i].num;
		cin>>arr[i].name;
		arr[i].taxi=0;
		arr[i].pizza=0;
		arr[i].girls=0;
		for (int j=0;j<arr[i].num;j++)
			{
				string s;
				cin>>s;
				arr[i].phone.push_back(s);
				//cin>>arr[i].phone[j];
				if (arr[i].phone[j][0]==arr[i].phone[j][1]&&arr[i].phone[j][1]==arr[i].phone[j][3]&&arr[i].phone[j][3]==arr[i].phone[j][4]&&arr[i].phone[j][4]==arr[i].phone[j][6]&&arr[i].phone[j][6]==arr[i].phone[j][7])
					arr[i].taxi++;
				else if (arr[i].phone[j][0]>arr[i].phone[j][1]&&arr[i].phone[j][1]>arr[i].phone[j][3]&&arr[i].phone[j][3]>arr[i].phone[j][4]&&arr[i].phone[j][4]>arr[i].phone[j][6]&&arr[i].phone[j][6]>arr[i].phone[j][7])
					arr[i].pizza++;
				else
					arr[i].girls++;
			}
			if (i==0)
			{
				max_taxi=arr[i].taxi;
				max_pizza=arr[i].pizza;
				max_girls=arr[i].girls;
			}
			else
			{
				if (arr[i].taxi>max_taxi)
					max_taxi=arr[i].taxi;
				if (arr[i].pizza>max_pizza)
					max_pizza=arr[i].pizza;
				if (arr[i].girls>max_girls)
					max_girls=arr[i].girls;
			}
	}
	int cp,ct,cg;
	cp=0;
	ct=0;
	cg=0;
	cout<<"If you want to call a taxi, you should call: ";
	for (int i=0;i<n;i++)
	{
		if (arr[i].pizza==max_pizza)
			cp++;
		if (arr[i].girls==max_girls)
			cg++;
		if (arr[i].taxi==max_taxi)
			ct++;
	}
	int count=0;
	//cout<<ct<<" "<<cp<<" "<<cg<<endl;
	for (int i=0;i<n;i++)
	{
		if (arr[i].taxi==max_taxi)
		{
			if (count<ct-1)
				cout<<arr[i].name<<", ";
			else
				cout<<arr[i].name<<".";
			count++;
		}
	}
	cout<<endl;
	cout<<"If you want to order a pizza, you should call: ";
	count=0;
	for (int i=0;i<n;i++)
	{
		if (arr[i].pizza==max_pizza)
		{
			if (count<cp-1)
				cout<<arr[i].name<<", ";
			else
				cout<<arr[i].name<<".";
			count++;
		}
	}
	cout<<endl;
	cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";
	count=0;
	for (int i=0;i<n;i++)
	{
		if (arr[i].girls==max_girls)
		{
			if (count<cg-1)
				cout<<arr[i].name<<", ";
			else
				cout<<arr[i].name<<".";
			count++;
		}
	}
	cout<<endl;
}