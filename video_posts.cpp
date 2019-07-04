#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{

ll n,k;
cin>>n>>k;
ll a[n+1];
ll sum=0,flag=1,j;
vector<ll> ans;
for(ll i=0;i<n;i++) {
	cin>>a[i];
	sum+=a[i];
}
if(sum%k!=0) flag=0;
else
{
	j=sum/k;
}
ll count=0,index=0;
for(ll i=0;i<n;){
while(count<j){
	count+=a[i];
	index++;
	if(count>j) {
		flag=0;
		break;
	}
	if(count==j)
	{	i++; break;}
i++;
}
if(flag==0) break;
//cout<<index<<endl;
ans.push_back(index);
index=0;
count=0;
}

if(flag){
	cout<<"YES"<<endl;
	for(ll i=0;i<ans.size();i++){
		cout<<ans[i]<< " ";
	}
}
	else{
		cout<<"NO"<<endl;
	}
}


