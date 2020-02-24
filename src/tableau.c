/*!
\file tableau.c
\brief fonctions pour créer des tableau
\author Justine Ribas <ribasjusti@eisti.eu>
\version 0.1
\date 13 décembre 2019
*/

#include"tableau.h"
#include <time.h>

int* creerTabEntier1D(int n)
{
  int* tab; //tableau d'entiers
  tab = malloc(n*sizeof(int));
  if(tab==NULL){
    fprintf(stderr, "problème d'alloc\n");
    exit(1);
  }
  return(tab);
}


void saisirTabEntier1D(int* tab, int n)
{
  int i; //iterrateur de boucle
  for(i=0; i<n; i++){
    printf("Saisir l'indice %d : ", i);
    tab[i] = saisirEntier();
  }
}

void afficherTab(int* tab, int n){
  int i;
  for(i=0; i<n; i++){
    printf("%d ", tab[i]);
  }
  printf("\n");
}
