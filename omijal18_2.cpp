#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n,k;
	cin>>n>>k;
	int last=k;
	cout<<k<<" ";
	for (int i=2;i<=n;i++)
	{
		last=last+i;
		cout<<last<<" ";
	}
	return 0;
}