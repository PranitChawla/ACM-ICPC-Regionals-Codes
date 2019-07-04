// #include <bits/stdc++.h>
// using namespace std;	
// int main()
// {
// 	int t;
// 	cin>>t;
	
// 	//getline(cin,str);
// 	for (int r=0;r<t;r++)
// 	{
// 		string str;
// 		string::iterator it;
// 		string::iterator plus;
// 		string::iterator equal_to;
// 		string::iterator malucha;
// 		//cout<<endl;
// 		getline(cin,str); 
// 		while(str.length()==0) 
// 		getline(cin,str); //basically for the input format 
// 		// cout<<str;
// 		// cout<<endl;
// 		string::iterator base=str.begin();
// 		for (it=str.begin();it!=str.end();it++)
// 		{
// 			if (*it=='+')
// 				plus=it;
// 			else if (*it=='=')
// 				equal_to=it;
// 			else if (*it=='m')
// 				malucha=it;
// 		}
// 		int plus_pos;
// 		plus_pos=plus-base;
// 		int equal_to_pos;
// 		int malucha_pos;
// 		malucha_pos=malucha-base;
// 		equal_to_pos=equal_to-base;
// 		//cout<<plus_pos<<" "<<equal_to_pos<<" "<<malucha_pos;
// 		if  (malucha_pos>equal_to_pos)
// 		{
// 			// string num1;
// 			// string num2;
// 			//int temp;
// 			int num1_end;
// 			size_t temp;
// 			num1_end=plus_pos-2;
// 			int num1_beg=0;
// 			int num1_size=num1_end-num1_beg+1;
// 			char* num1;
// 			num1 = new char[num1_size];
// 			//char num1[80];
// 			//cout<<num1_beg<<" "<<num1_end<<endl;
// 		//	cout<<num1_end<<endl;
// 			//cout<<num1_size<<endl;
// 			temp=str.copy(num1,num1_size,0);
// 			//cout<<num1<<" ";
// 			//cout<<strlen(num1)<<" "<<temp<<endl;
// 			int num2_begin=plus_pos+2;
// 			int num2_end;
// 			num2_end=equal_to_pos-2;
// 			int num2_size;
// 			num2_size=num2_end-num2_begin+1;
// 			// char num2[80];
// 			char* num2;
// 			num2=new char [num2_size];
// 			str.copy(num2,num2_size,num2_begin);
// 			//cout<<num1<<" "<<num2;
// 			//cout<<atoi(num1)<<" "<<atoi(num2);
// 			//cout<<num2_begin<<" "<<num2_end<<endl;
// 			//cout<<strlen(num2)<<endl;
// 			int num1_int=atoi(num1);
// 			int num2_int=atoi(num2);
// 			int result=num1_int+num2_int;
// 			//char res[80];
// 			char* res;
// 			res=new char [str.size()];
// 			str.copy(res,equal_to_pos+1,0);
// 			//cout<<res;
// 			cout<<res<<" "<<result<<endl;		
// 		}
// 		else if (malucha_pos<plus_pos)
// 		{
// 			int num1_end;
// 			int num1_beg;
// 			num1_beg=plus_pos+2;
// 			num1_end=equal_to_pos-2;
// 			int num1_size;
// 			num1_size=num1_end-num1_beg+1;
// 			char* num1;
// 			num1=new char [num1_size];
// 			str.copy(num1,num1_size,num1_beg);
// 			int num2_beg=equal_to_pos+2;
// 			int num2_end=str.size()-1;
// 			int num2_size=num2_end-num2_beg+1;
// 			char* num2;
// 			num2=new char [num2_size];
// 			str.copy(num2,num2_size,num2_beg);
// 			int num1_int;
// 			int num2_int;
// 			num1_int=atoi(num1);
// 			num2_int=atoi(num2);
// 			//cout<<num1_int<<" "<<num2_int;
// 			int result =num2_int-num1_int;
// 			char* res;
// 			res=new char [str.size()];
// 			str.copy(res,str.size()-plus_pos,plus_pos);
// 			cout<<result<<" "<<res<<endl;
// 		}
// 		else if (malucha_pos>plus_pos&&malucha_pos<equal_to_pos)
// 		{
// 			int num1_end;
// 			int num1_beg;
// 			num1_beg=0;
// 			num1_end=plus_pos-2;
// 			int num1_size;
// 			num1_size=num1_end-num1_beg+1;
// 			char* num1;
// 			num1=new char [num1_size];
// 			str.copy(num1,num1_size,num1_beg);
// 			int num2_beg=equal_to_pos+2;
// 			int num2_end=str.size()-1;
// 			int num2_size=num2_end-num2_beg+1;
// 			char* num2;
// 			num2=new char [num2_size];
// 			str.copy(num2,num2_size,num2_beg);
// 			int num1_int;
// 			int num2_int;
// 			num1_int=atoi(num1);
// 			num2_int=atoi(num2);
// 			//cout<<num1_int<<" "<<num2_int;
// 			int result =num2_int-num1_int;
// 			char* res1;
// 			char* res2;
// 			res1=new char [str.size()];
// 			res2=new char [str.size()];
// 			str.copy(res1,plus_pos+1,0);
// 			str.copy(res2,str.size()-equal_to_pos,equal_to_pos);
// 			cout<<res1<<" "<<result<<" "<<res2<<endl;
// 		}
// }
// }
using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<limits>
#include<cmath>
#include<map>
#define LLU long long unsigned int
#define LLD long long double
#define FOR(i,N) for(int i=0;i<(N);i++)
string s1,s2,s3,s4,s5;
int conv(string s)
{
    int ret=0;
    FOR(i,s.length())
    {
        if(!isdigit(s[i])) return -1;
        ret=ret*10+(s[i]-'0');
    }
    return ret;
}
int main()
{
    int cases,v1,v2,v3;
    cin>>cases;
    while(cases--)
    {
        cin>>s1>>s2>>s3>>s4>>s5;
        v1=conv(s1);
        v2=conv(s3);
        v3=conv(s5);
        if(v1<0) v1=v3-v2;
        if(v2<0) v2=v3-v1;
        if(v3<0) v3=v1+v2;
        cout<<v1<<" + "<<v2<<" = "<<v3<<endl;
    }
    return 0;
} 
