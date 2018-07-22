#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
	int n,ind[10],it=0;
	char save[10];
	cin>>n;
	string l[n];
	for (int i=0;i<n;i++)
	{
		cin>>l[i];
	}
	for (int i=0;i<sizeof(l[n])-1;i++)
	{
		if (((l[n].at(i))!='*'))
		{
			ind[it]=i;
			save[it]=l[n].at(i);
			it++;
		}
	}
	for (int i=0;i<it;i++)
	{
		cout<<ind[i]<<" ";
	}
	cout<<endl;
	for (int i=0;i<it;i++)
	{
		cout<<save[i]<<" ";
	}
}
