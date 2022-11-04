#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
	int numero []={4,3,5,1,2,6};
	int i,gd,seg;
	for(i=0;i<5;i++)
	{
		seg=i;
		gd= numero[i];
		
		while ((seg>0)&&(numero[seg-1]>gd))
		{
			numero[seg]=numero[seg-1];
			seg--;
		}
		numero[seg]=gd;
	}
	cout<<"orden ascedente: ";
	for(i=0;i<5;i++)
	{
		cout<<numero[i]<<" ";
	}
	getch();
	return 0;
}
