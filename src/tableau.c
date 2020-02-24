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

void saisirTabVF(int* tab, int n){
  int i; //iterrateur de boucle
  printf("Veuillez saisir les cases de votre tableau :\nVrai : 1\nFaux : 0\n\n");
  for(i=0; i<n; i++){
    do{
      printf("Veuillez saisir la case %d : ", i);
      tab[i]=saisirEntier();
    } while (tab[i]!=0 && tab[i]!=1);
  }
}

void saisirTabCouleur(int* tab, int n){
  int i; //iterrateur de boucle
  printf("Veuillez saisir les cases de votre tableau :\nBleu : 0\nBlanc : 1\nRouge : 2\n\n");
  for(i=0; i<n; i++){
    do{
      printf("Veuillez saisir la case %d : ", i);
      tab[i]=saisirEntier();
    } while (tab[i]!=0 && tab[i]!=1 && tab[i]!=2);
  }
}
