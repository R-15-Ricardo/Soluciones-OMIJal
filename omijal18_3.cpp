#include <bits/stdc++.h>
using namespace std;

int li [1000];
int check [1000];
void combine (int it);

int main ()
{
	int n,m;
	cin>>n>>m;
	for (int i=0;i<n;i++)
	{
		cin>>li[i];
	}
	for (int i=0;i<pow(2,n);i++)
	{
		combine(i);
		int sum=li[0];
		for (int j=0;j<n-1;j++)
		{
			if (check[j]==1) sum-=li[j+1];
			else sum+=li[j+1];
		}
		if (sum%m==0) 
		{
			cout<<"Si"<<endl;
			exit(EXIT_SUCCESS);
		}
	}
	cout<<"No"<<endl;
	return 0;
}

void combine (int it)
{
	int aux=it;
	int pos=0;
	while (aux>0)
	{
		check[pos]=aux%2;
		aux/=2;
		pos++;
	}
}