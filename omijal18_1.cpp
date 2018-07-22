#include <bits/stdc++.h>
using namespace std;

char word [100];
char li [1000][100];

int main ()
{
	int n,m;
	cin>>n>>m;
	cin>>word;
	int base=0;
	for (int i=0;i<m;i++)
	{
		base+=word[i];
	}
	for (int i=0;i<n;i++)
	{
		cin>>li[i];
	}
	int coincidencias=0;
	for (int i=0;i<n;i++)
	{
		int suma=0;
		for (int j=0;j<m;j++)
		{
			suma+=li[i][j];
		}
		if (suma==base) coincidencias++;
	}
	cout<<coincidencias<<endl;
	return 0;
}