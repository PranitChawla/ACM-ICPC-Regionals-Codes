#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool check_substr(string a,string b){
	ll n=a.length();
	ll m=b.length();
	ll j=0;
	   for(ll i=0;i<n;i++){
   	if(a[i]==b[0]){
   		for(j=0;j<m;j++){
   			if(a[i+j]!=b[j]||(i+j)>n) break;
   	}
   	if(j==m) return 1;
   }

}
return 0'
}
int main()
{
ll n;
cin>>n;
string s[100005];	
for(ll i=0;i<n;i++){
	cin>>s[i];
}
ll q;
cin>>q;
for(ll i=0;i<q;i++){
  string temp;
	cin>>temp;
	ll count=0,index=-1;
	for(ll j=0;j<n;j++){
      if(check_substr(s[j],temp)==1){
      	count++;
      	index=j;
      }
	}
	if(count!=0)
cout<<count<<" "<<s[index]<<endl;
else
cout<<0<<" "<<"-"<<endl;
}

}