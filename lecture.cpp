#include <bits/stdc++.h>
using namespace std;
typedef struct 
{
	int key;
	string word_1;
	string word_2;
}data;
int main()
{
	int n,m;
	cin>>n>>m;
	string lecture [n+1];
	data data_arr[m+1];
	for (int i=1;i<=m;i++)
	{
		data_arr[i].key=i;
		cin>>data_arr[i].word_1>>data_arr[i].word_2;
	}
	for (int i=1;i<=n;i++)
		cin>>lecture[i];
	for (int i=1;i<=n;i++)
	{
		int key_of_word;
		for (int j=1;j<=m;j++)
		{
			if (lecture[i].compare(data_arr[j].word_1)==0)
			{
				key_of_word=data_arr[j].key;
				break;
			}
		}
		if (i!=n)
		{
		if (data_arr[key_of_word].word_2.length()<data_arr[key_of_word].word_1.length())
			cout<<data_arr[key_of_word].word_2<<" ";
		else
			cout<<data_arr[key_of_word].word_1<<" ";
		}
		else 
		{
		if (data_arr[key_of_word].word_2.length()<data_arr[key_of_word].word_1.length())
			cout<<data_arr[key_of_word].word_2;
		else
			cout<<data_arr[key_of_word].word_1;
		}
	}
}
