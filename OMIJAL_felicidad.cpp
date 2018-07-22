#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int main ()
{
	int k,*x1,*x2,a,b,laps;
	float f=0,ft=0;
	cout<<"Programa para encontrar la felicidad de un lapso"<<endl;
	cout<<"Lapso de tiempo? ";
	cin>>a>>b;
	laps=b-a;
	cout<<"Numero de factores? ";
	cin>>k;
	x1,x2=new int [k];
	for (int i=0;i<k;i++)
	{
		cout<<"Factor "<<i+1<<"? ";
		cin>>x1[i]>>x2[i];
	}
	for (float t=0.0;t<laps;t+=0.1)
	{
		for (int h=0;h<k;h++)
		{
			f=x1[h]*(pow(t,(x2[h])));
			ft=ft+f;
			cout<<"Felicidad acumulada: "<<ft;
			getch();
		}
	}
}
