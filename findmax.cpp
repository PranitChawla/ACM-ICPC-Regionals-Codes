#include <iostream>
using namespace std;
extern void registerme ( const char [] );
extern int evaluate ( unsigned int );
extern void verify ( unsigned int );
int findpeak ()
{
	long long int n=0;
	long long int i;
	// while (evaluate(n)<evaluate(n+1))
	// {
	// 	n++;
	// }
	// return n;
	for (i=0;i<100;i++)
		cout<<evaluate(i)<<endl;
}
int main()
{
unsigned int n;
registerme("99FB1331");
n = findpeak();
verify(n);
}