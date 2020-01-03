#include<stdio.h>

//Exercice 2
int *alloue_vect(int dimension,int val);
void libere_vect(int *vecteur);

int main()
{
		int *A,n;
	printf("Entrer la taille de tbA: N=");
 scanf("%d",n);
 	//	int tab[5]={10,12,90,5,6};
		//int mat[2][2]={{1,2},{3,4}};
 alloue_vect(n,4);
 printf("Votre tb initial:");
 
 

	
}

int *alloue_vect(int dimension,int val)
{
	int i;
	int *vecteur=malloc(dimension*sizeof(int));
		for (i=0;i<dimension;i++)
	 {
	 	vecteur[i]=val;
	 	return vecteur;
		}
}

void libere_vect(int *vecteur)
{
	free(vecteur);
}

int **alloue_matrice(int ligne,int colonne,int val)
{
	int i,j;
	int **matrice=malloc(ligne*sizeof(int *));
		for (i=0;i<ligne;i++)
	 {
	 	matrice=malloc(colonne*sizeof(int))
			for (j=0;j<colonne;j++)
		 {
		 		 	matrice[i][j]=val;

			}
		}
		return matrice;
}

void libere_matrice(int **matrice)
{
	int i;
	for(i=0,i<ligne,i++)
	{
		free(int*)matrice[i];
	}
	
}


int **alloue_matrice_zero(int ligne,int colonne)
{
	int i;
	int **matrice=calloc(ligne,sizeof(int*));
	for(i=0;i<ligne;i++)
	{
		
			matrice[i]=calloc(colonne,sizeof(int));
		
	}
	return matrice;
}
//***********->C******!!!!
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

void genere_matriceIdentite(int dimension)
{
	int i;
	int **identite = alloue_matrice_zero(dimension,dimension);//matrice carré
	for(i=0;i<dimension;i++)
 {
 	
 		identite[i][i]=1;
 	affiche_matrice(identite,dimension,dimension);
 	
	}
	return identite;
	
	
}



