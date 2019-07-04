#include <bits/stdc++.h>
using namespace std;
long long int dp (long long int n)
{
	long long int size=pow(10,6);
	long long int arr[size+10];
	if (n<=11)
		return n;
	if (n<=pow(10,6))
	{
		// for (long long int i=0;i<=n;i++)
		// 	arr[i]=i/2+i/3+i/4;
		arr[n]=dp(n/2)+dp(n/3)+dp(n/4);
		return arr[n];
	}
	// if (n<=11)
	// 	return n;
	else
		return (dp(n/2)+dp(n/3)+dp(n/4));
}
int main()
{
	long long int n;
	while(cin>>n)
	{
	//cin>>n;
	long long int sum;
	sum=dp(n);
	if (sum>n)
		cout<<sum<<endl;
	else
		cout<<n<<endl;
	}
}
// #include <bits/stdc++.h>
// using namespace std;
// map<int,long long> dp;
// long long optcoins(int n){
//     if(n<12)
//         return n;
//     if(dp.count(n))
//         return dp[n];
//     dp[n]=optcoins(n/2)+optcoins(n/3)+optcoins(n/4);
//     return dp[n];
// }
// int main(){
//     int x;
//     while(scanf("%d",&x)!=EOF)
//         printf("%lld\n",optcoins(x));
//     return 0;
// }