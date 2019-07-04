#include <iostream>
using namespace std;
long int fib (long int N,long int K)
{
	if (N<=K)
		return 1;
	else
	{
		long int term=0;
		for (int i=1;i<=K;i++)
		{
			term+=fib(N-i,K);
			//cout<<term<<endl;
		}
		return term;
	}
}
int main()
{
	long int N,K;
	cin>>N>>K;
	int result;
	result=fib(N,K)%1000000007;
	cout<<result;
}
// #include <stdio.h>
 
 
// int main(){
// 	long int n,k;
// 	scanf("%li",&n);
// 	scanf("%li",&k);
 
// 	long int a[200000];
	
// 	for(long int i=0;i<n;i++){
// 		if(i<k){
// 			a[i]=1;		
// 		}else{
// 			a[i]=0;
// 			for(long int j=i-1;j>=i-k;j--){
// 				a[i]+=a[j];
// 				if(a[i]>1000000007){
// 					a[i]=a[i]%1000000007;
// 				}
// 			}		
// 		}
// 	}
// 	long int res=a[n-1];
// 	printf("%li\n",res); 	
// }   