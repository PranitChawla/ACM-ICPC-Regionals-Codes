#include <iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	for (int i=0;i<T;i++)
	{
	int skills[3][3];
	for (int i=0;i<3;i++)
		for (int j=0;j<3;j++)
			cin>>skills[i][j];
		int flag=1;
	// for (int i=0;i<2;i++)
	// {
	// 	for (int j=0;j<3;j++)x
	// 	{
	// 		if (skills[i+1][j]<skills[i][j])
	// 		{
	// 			flag=0;
	// 			break;
	// 		}
	// 	}
	// 	if (flag==0)
	// 		break;
	// }
	// if (flag==0)
	// {
	// 	cout<<"no"<<endl;
	// 	break;
	//}
	if ((skills[1][0]==skills[0][0]&&skills[1][1]==skills[0][1]&&skills[1][2]==skills[0][2])||(skills[2][0]==skills[1][0]&&skills[2][1]==skills[1][1]&&skills[2][2]==skills[1][2])||(skills[3][0]==skills[1][0]&&skills[3][1]==skills[1][1]&&skills[3][2]==skills[1][2]))
		flag=0;
	if (flag==0)
	{
		cout<<"no"<<endl;
		//break;
	}
	else 
	{
		cout<<"yes"<<endl;
	}
		
}
}
