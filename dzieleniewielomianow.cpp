#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main(int argc, char** argv) 
{
	int st=0;
	int i;
	int dw;
	while(st<=0)
	{
		system("cls");
		cout<<"            DZIELENIE WIELOMIANOW\n\n";
		cout<<"Podaj stopien wielomianu (wiekszy od 0): ";
		cin>>st;
	}
	system("cls");
	int tab1[st];
	int tab2[st];
	i=st;
	cout<<"            DZIELENIE WIELOMIANOW\n\n";
	cout<<"Podaj wspolczynniki wielomianu, zaczynajac od tego z najwyzsza potega.\n\n";
	while(i>-1)
	{
		if(i>0)
		{
			cout<<"Potega: "<<i<<"\n";
		}
		else
		{
			cout<<"Wyraz wolny\n";
		}
		cin>>tab1[i];
		i--;
		cout<<"\n";
	}
	system("cls");
	cout<<"            DZIELENIE WIELOMIANOW\n\n";
	cout<<"Podany wielomian to: ";
	i=st;
	while(i>-1)
	{
		if(tab1[i]<0)
		{
			cout<<"("<<tab1[i]<<")";	
		}
		else
		{
			cout<<tab1[i];
		}
		if(i>0)
		{
			cout<<"x";
		}
		if(i>1)
		{
			cout<<"^"<<i;
		}
		if(i>0)
		{
			cout<<" + ";
		}
		i--;
	}
	cout<<"\n\nPodaj dwumian, przez ktory chcesz dzielic: x";
	cin>>dw;
	dw*=-1;
	i=st;
	tab2[i]=tab1[i];
	i--;
	while(i>-2)
	{
		tab2[i]=dw*tab2[i+1]+tab1[i];
		i--;
	}
	dw*=-1;
	system("cls");
	cout<<"            DZIELENIE WIELOMIANOW\n\n";
	cout<<"Wielomian przed podzieleniem przez dwumian x";
	if(dw>0)
	{
		cout<<"+"<<dw;
	}
	else
	{
		cout<<dw;
	}
	cout<<": \nf(x) = ";
	i=st;
	while(i>-1)
	{
		if(tab1[i]<0)
		{
			cout<<"("<<tab1[i]<<")";	
		}
		else
		{
			cout<<tab1[i];
		}
		if(i>0)
		{
			cout<<"x";
		}
		if(i>1)
		{
			cout<<"^"<<i;
		}
		if(i>0)
		{
			cout<<" + ";
		}
		i--;
	}
	i=st-1;
	cout<<"\n\nPodany wielomian po podzieleniu:\n";
	cout<<"(";
	while(i>-1)
	{
		if(tab2[i+1]<0)
		{
			cout<<"("<<tab2[i+1]<<")";
		}
		else
		{
			cout<<tab2[i+1];
		}
		if(i>0)
		{
			cout<<"x";
		}
		if(i>0)
		{
			cout<<"^"<<i;
		}
		if(i>0)
		{
			cout<<" + ";
		}
		i--;
	}
	cout<<")(x";
	if(dw>0)
	{
		cout<<" + ";
	}
	cout<<dw<<")";
	if(tab2[0]!=0)
	{
		cout<<" + "<<tab2[0];
	}
	cout<<"\n\nWcisnij dowolny przycisk, aby zakonczyc program.";
	getch();
	return 0;
}
