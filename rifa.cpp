#include <iostream>
#include <windows.h>
#define cele "\033[36m"
#define sin"\033[0m"
#define gordoalex "\033[35m"
#define verde "\033[32m"
#define azul "\033[34m"
using namespace std;
int main()
{
	system("cls");
	//system("color 8C");
	int rifa[10][10],buscar=0,num=1;
	
	for(int i=0;i<10;i++)//rellenar
	{
		for(int j=0;j<10;j++)
		{
			rifa[i][j]=num++;
		}
	}
	cout<<cele"\t\t\t\tRifa"sin<<endl;
	for(int i=0;i<10;i++)//imprimir
	{
		for(int j=0;j<10;j++)
		{
			cout<<gordoalex<<rifa[i][j]<<"\t"sin;
		}
		cout<<endl;
	}
	system("pause");
	while(buscar=true)
	{
		cout<<verde"que numero desea buscar?: "sin;
		cin>>buscar;
		if(buscar<1||buscar>100)
		{
			cout<<verde"el numero no esta en la lista"sin<<endl;
		}
		if(rifa[(buscar-1)/10][(buscar-1)%10]==0)
		{
			cout<<verde"el numero "<<buscar<<" ya esta vendido"sin<<endl;
		}
		else
		{
			rifa[(buscar-1)/10][(buscar-1)%10]=0;
		}
		cout<<gordoalex"\t\t\t\trifa actualizada"sin<<endl;
		for(int i=0;i<10;i++)//imprimir
	{
		for(int j=0;j<10;j++)
		{
			cout<<azul<<rifa[i][j]<<"\t"sin;
		}
		cout<<endl;
	}
	}
}
