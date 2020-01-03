#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void affiche_vecteur(int vecteur,int dimension);



int main() 
{
	int x,i,dimension,N;
	int A[N];
	printf("Entrer la dimension du Tab:");
	scanf("%d",N);;
	for(i=0;i<N;i++)
	{
			printf("Entrer l'element%d",x);
  	scanf("%d",&A[x]);
	}
	affiche_vecteur(A,N);
	
	return 0;
}

void affiche_vecteur(int *vecteur,int dimension)
{
		//int vecteur[dimension];
	 int i;
		for(i=0;i<dimension;i++)
		{
			printf(i);
			
		}
	
}















