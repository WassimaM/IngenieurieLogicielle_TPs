#include <iostream>
using namespace std;
void affiche_vecteur( int *vecteur,int dimension);
void affiche_matrice( int **vecteur,int ligne,int colonne);
int main()
{
		int tab[5]={10,12,90,5,6};
		int mat[2][2]={{1,2},{3,4}};
		affiche_vecteur(tab,5);
		affiche_matrice(mat,2,2);
		
		return 0;	
}

void affiche_vecteur( int *vecteur,int dimension)
{
		int i;
		cout<<"[";
		for (i=0;i<dimension;i++)
	 {
	 	printf("%d ",vecteur[i]);
	 }
	 cout<<"]\n";
}

void affiche_matrice( int **matrice,int ligne,int colonne)
{
			int i;
		cout<<"[";
		for (i=0;i<ligne;i++)
	 {
	 	affiche_vecteur(matrice[i],colonne);
	 }
	 cout<<"]\n";
	
}

























