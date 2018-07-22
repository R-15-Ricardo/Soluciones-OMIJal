#include <iostream>
using namespace std;

int main ()
{
	int n,m,*c,it;
	cout<<"Numero de foquitos / Precio de cada foquito: ";
	cin>>n>>m;
	cout<<"Cadena de foquitos: ";
	c=new int [n];
	for (int i=0;i<n;i++)
	{
		cin>>c[i];
		if (c[i]==0)
		{
			it++;
		}
	}
	n=it*m;
	cout<<"Hay "<<it<<" foquitos fundidos en la serie"<<endl;
	cout<<"Costara "<<n<<" pesos reponerlos"<<endl;
	delete []c;
}
