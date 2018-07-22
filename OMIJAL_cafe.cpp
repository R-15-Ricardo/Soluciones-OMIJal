#include <iostream>
using namespace std;

int main ()
{
	int n,m,maxx,maxy,minx,miny;
	cin>>n>>m;
	char sheet[n][m];
	maxx=0;
	maxy=0;
	minx=n;
	miny=m;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			cin>>sheet[i][j];
		}
	}
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			if ((sheet[i][j]=='x')&&(j>maxx))
			{
				maxx=j;
			}
			if ((sheet[i][j]=='x')&&(i>maxy))
			{
				maxy=i;
			}
			if ((sheet[i][j]=='x')&&(j<minx))
			{
				minx=j;
			}
			if ((sheet[i][j]=='x')&&(i<miny))
			{
				miny=i;
			}
		}
	}
	int cordx=(maxx-minx)+1,cordy=(maxy-miny)+1;
	cout<<cordx<<","<<cordy;
}
