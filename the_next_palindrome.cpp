// #include <bits/stdc++.h>
// using namespace std;
// char * remove_zeros (char str[],long long int len)
// {
// 	long long int i=0;
// 	char *temp;
// 	temp=str;
// 	while (temp[i]=='0')
// 		i++;
// 	char* temp2;
// 	temp2=temp+i;
// }
// bool check_palindrome (char str[],long long int n)
// {
// 	long long int mid;
// 	mid=n/2;
// 	for (long long int i=0;i<mid;i++)
// 	{
// 		if (str[i]!=str[n-i-1])
// 			return false;
// 	}
// 	return true;
// }
// int main()
// {
// 	int t;
// 	cin>>t;
// 	for (int w=0;w<t;w++)
// 	{
// 		long long int size=pow(10,6)+1;
// 		char str1[size];
// 		//char str[size];
// 		cin>>str1;
// 		long long int len;
// 		len=strlen(str1);
// 		//cout<<" "<<str<<endl;
// 		str=remove_zeros(str,len);
// 		len=strlen(str);
// 		long long int it;
// 		long long int count=0;
// 		for (it=0;it<len;it++)
// 		{
// 			if (str[it]-'0'==9)
// 				count++;
// 		}
// 		if (count==len)
// 		{
// 			str[0]='1';
// 			for (long long int j=1;j<=len;j++)
// 				str[j]='0';
// 			len=strlen(str);
// 		}
// 		if (check_palindrome(str,len))
// 		{
// 			if (str[len-1]-'0'!=9)
// 				str[len-1]++;
// 			else
// 			{
// 				long long int i=len-1;
// 						while (str[i]-'0'==9&&i>=0)
// 						{
// 							str[i]='0';
// 							i--;
// 						}
// 						str[i]++;
// 			}
// 		}
// 		if (len%2==1)
// 		{
// 			long long int mid;
// 			mid=len/2;
// 			long long int right=len-1;
// 			long long int left=0;
// 			while (right>mid&&left<mid)
// 			{
// 				if (str[right]<str[left])
// 					str[right]=str[left];
// 				else if (str[right]>str[left])
// 				{
// 					int temp;
// 					temp=10+str[left]-48;
// 					int ones_digit;
// 					ones_digit=temp%10;
// 					char c;
// 					c=(char)(ones_digit+48);
// 					str[right]=c;
// 					if (str[right-1]-'0'!=9)
// 						str[right-1]++;
// 					else 
// 					{
// 						long long int i=right-1;
// 						while (str[i]-'0'==9&&i>=0)
// 						{
// 							str[i]='0';
// 							i--;
// 						}
// 						str[i]++;
// 					}
// 				}
// 				right--;
// 				left++;
// 			}
// 			cout<<str<<endl;
// 		}
// 		else
// 		{
// 			long long int mid1=len/2-1;
// 			long long int mid2=len/2;
// 			long long int left=0;
// 			long long int right=len-1;
// 			while (right>mid2&&left<mid1)
// 			{
// 				if (str[right]<str[left])
// 					str[right]=str[left];
// 				else if (str[right]>str[left])
// 				{
// 					int temp;
// 					temp=10+str[left]-48;
// 					int ones_digit;
// 					ones_digit=temp%10;
// 					char c;
// 					c=(char)(ones_digit+48);
// 					str[right]=c;
// 					if (str[right-1]-'0'!=9)
// 						str[right-1]++;
// 					else 
// 					{
// 						long long int i=right-1;
// 						while (str[i]-'0'==9)
// 						{
// 							str[i]='0';
// 							i--;
// 						}
// 						str[i]++;
// 					}
// 				}
// 				right--;
// 				left++;
// 			}
// 			if (str[mid1]>str[mid2])
// 				str[mid2]=str[mid1];
// 			else if (str[mid1]<str[mid2])
// 			{
// 				str[mid1]++;
// 				str[mid2]=str[mid1];
// 			}
// 			cout<<str<<endl;
// 		}
// 	}
// }
char str[1000005];

int main()
{
    int t,i,j;

    scanf("%i",&t);

    while(t--) {

        scanf("%s",str);

        int lenght = strlen(str);

        j = lenght;
        i = -1;

        while(++i <= --j) {
            if(str[i] != str[j]) {
                break;
            }
        }

        if(j < i) {
            /*   Number is palindrome   */

            if(lenght & 1) {
                /* odd lenght  */

                if(str[lenght/2] < '9'){
                    /* check the middle one not 9 */

                    str[lenght/2]++;

                    printf("%s\n",str);
                }

                else {
                    str[lenght/2] = '0';

                    i = lenght/2 - 1;
                    j = lenght/2 + 1;

                    while(i >= 0) {

                        if(str[i] < '9') {
                            str[i]++;
                            str[j]++;
                            break;
                        }

                        else {
                            str[i] = str[j] = '0';
                        }

                    i--;
                    j++;
                    }

                    if(i < 0) {
                        printf("1");

                        i = lenght;
                        while(--i > 0) {
                            printf("0");
                        }

                        printf("1\n");
                    }

                    else {

                        printf("%s\n",str);
                    }
                }
            }

            else {
                /*  even lenght  */

                    i = lenght/2 - 1;
                    j = lenght/2;

                    while(i >= 0) {

                        if(str[i] < '9') {
                            str[i]++;
                            str[j]++;
                            break;
                        }

                        else {
                            str[i] = str[j] = '0';
                        }

                    i--;
                    j++;
                    }

                    if(i < 0) {
                        printf("1");

                        i = lenght;
                        while(--i > 0) {
                            printf("0");
                        }

                        printf("1\n");
                    }

                    else {

                        printf("%s\n",str);
                    }
            }
        }

        else {
            if(lenght & 1) {
                i = lenght/2 - 1;
                j = lenght/2 + 1;
            }

            else {
                i =lenght/2 - 1;
                j = lenght/2;
            }

            int flag;

            while(i >= 0) {

                if(str[i] - str[j] > 0) {
                    flag = 1;
                    break;
                }

                else if( str[i] - str[j] < 0 ) {
                    flag = 2;
                    break;
                }

                i--;
                j++;
            }

            if(lenght & 1) {
                i = lenght/2 - 1;
                j = lenght/2 + 1;
            }

            else {
                i = lenght/2 - 1;
                j = lenght/2;
            }

            if(flag == 1) {    /*  line 1*/
                while(i >= 0) {
                    str[j] = str[i];

                    i--;
                    j++;
                }
            }

            else if(flag == 2 && lenght&1 && str[lenght/2] < '9'){    /* line 2*/
                str[lenght/2]++;

                i = lenght/2 - 1;
                j = lenght/2 + 1;

                while(i >= 0) {
                   str[j] = str[i];
                   i--;
                   j++;
                }
            }

            else {                          /* line 3   */

                if( lenght & 1) {
                    str[lenght/2] = '0';
                }

                while(i >= 0) {
                    if(str[i] < '9') {
                        str[i]++;
                        str[j] = str[i];
                        break;
                    }

                    else {
                        str[i] = str[j] = '0';
                    }
                    i--;
                    j++;
                }

                while(i >= 0) {
                    str[j] = str[i];

                    i--;
                    j++;
                }
            }

            printf("%s\n",str);
        }
    }

    return 0;
}