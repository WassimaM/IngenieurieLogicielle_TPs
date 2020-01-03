#include <iostream>
using namespace std;

void lire_tab(int *,const int &);
void ecrire_tab(int *,const int &);

int main()
{
	int *A,n;
	cout<<"Entrer la taille de tbA: N=";
 cin>>n;
	A=new int [n];
 lire_tab(A,n);
 cout<<"Votre tb initial:";
	ecrire_tab(A,n);
	
	
}


void lire_tab(int *tab,const int &N)
{
	int i;
	for (i=0;i<N;i++)
	 {
		 cout<<"saisir T["<<i<<"]:";
		 cin>>tab[i];
	 }
}

void ecrire_tab(int *tab,const int &N)
{
	int i;
		for (i=0;i<N;i++)
	 {
	 	cout<<tab[i]<<" ";
	 }
}





