#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef struct 
{
	int d,m,y;
}date;
int main ()
{
	string s;
	cin>>s;
	string::iterator it,it2;
	vector <date> list;
	//cout<<string(s.begin(),s.begin()+2);
	map <ll,date> table;
	for (it=s.begin();it<=s.end()-10;it++)
	{
		int flag=1;
		for (it2=it;it2<=it+9;it2++)
		{
			if (it2==it+2||it2==it+5)
				continue;
			if (*it2=='-')
			{
				flag=0;
				break;
			}
		}
			if (flag==0)
				continue;
			int dd=stoi(string(it,it+2));
			int mm=stoi(string(it+3,it+5));
			int yy=stoi(string(it+6,it+10));
			//cout<<dd<<" "<<mm<<" "<<yy<<endl;
			if (*(it+2)!='-'||*(it+5)!='-')
				continue;
			if (yy>2015||yy<2013)
				continue;
			if (mm>12||mm<1||dd<1)
				continue;
			if (mm==2&&dd>28)
				continue;
			if ((mm==4||mm==9||mm==6||mm==11)&&dd>30)
				continue;
			if (dd>31)
				continue;
			date temp;
			temp.d=dd;
			temp.m=mm;
			temp.y=yy;
			list.push_back(temp);
	}
	ll count[32][13][4];
	memset(count,0,sizeof(count));
	vector <date>::iterator it1;
	for (int i=2013;i<=2015;i++)
	{
		for (int j=1;j<=12;j++)
		{
			for (int k=1;k<=31;k++)
			{
				for (it1=list.begin();it1!=list.end();it1++)
				{
					date da;
					da=*it1;
					//cout<<da.y<<endl;
					if (da.d==k&&da.m==j&&da.y==i)
						count[k][j][i-2012]++;
				}
			}
		}
	}
	ll max1=count[1][1][1];
	ll md=1;
	ll mm=1;
	ll my=2013;
	for (int i=1;i<=3;i++)
	{
		for (int j=1;j<=12;j++)
		{
			for (int k=1;k<=31;k++)
			{
				// if (count[k][j][i]>0)
				// cout<<count[k][j][i]<<endl;
				if (count[k][j][i]>max1)
				{
					max1=count[k][j][i];
					md=k;
					mm=j;
					my=i+2012;
				}
			}
		}
	}
	//cout<<my;
	if (md<10&&mm>=10)
		cout<<"0"<<md<<"-"<<mm<<"-"<<my;
	else if (md>=10&&mm<10)
		cout<<md<<"-0"<<mm<<"-"<<my;
	else if (md<10&&mm<10)
		cout<<"0"<<md<<"-0"<<mm<<"-"<<my;
	else
		cout<<md<<"-"<<mm<<"-"<<my;
}