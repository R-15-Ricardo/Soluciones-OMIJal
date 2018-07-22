#include <iostream>
#include <conio.h>
using namespace std;

int calcmin (long long int a, int b, int c, long long int o, int t)
{
	t++;
	int min=0;
	if (o<a)
	{
		int pu=b,pv=c,oro=o;
		pu=b+c;
		pv=(c*2)+b;
		oro=pv+pu;
		calcmin(a,pu,pv,oro,t);
	}
	else 
	{
		min=t-1;
		return min;
	}
}

int main ()
{
	int u,v,t=0,min;
	long long int k,o=0;
	cout<<"Cantidad / Procduccion mina 1 / Produccion mina 2: ";
	cin>>k>>u>>v;
	min=calcmin(k,u,v,o,t);
	cout<<"Conseguiras "<<k<<" para el min "<<min<<endl;
}
