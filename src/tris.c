/*!
 * \file tris.c
 *
 * \autor Justine Ribas <ribasjusti@eisti.eu>
 * \version 0.1
 * \date 19 février 2020
 *
 * \brief fonctions et procéedures relatives aux tris
 *
 *
 */

//Inclusion des entêtes de librairies
#include "tris.h"

// Code des fonctions et procédures

void triSelection(int* tab, int n){
  int i; //iterrateur de boucle
  int j; //iterrateur de boucle
  int min; //indice de la case minimum
  int tmp; //variable pour effectuer un échange
  for(i=0; i<n; i++){
    min=i;
    for(j=i; j<n; j++){
      if(tab[min]>tab[j]){
        min=j;
        tmp=tab[i];
        tab[i]=tab[min];
        tab[min]=tmp;
      }
    }
  }
  printf("\n\n");
}

void triBulle(int* tab, int n){
  int i; //iterrateur de boucle
  int estTrie; //variable booléeene qui indique si un tableau est trié ou non
  int tmp; //variable pour effectuer un échange
  estTrie=0;
  while(!estTrie){
    estTrie=1;
    for(i=0; i<n-1; i++){
      if(tab[i]>tab[i+1]){
        estTrie=0;
        tmp=tab[i];
        tab[i]=tab[i+1];
        tab[i+1]=tmp;
      }
    }
  }
}

void triInsertion(int* tab, int n){
  int i; //iterrateur de boucle
  int j; //iterrateur de boucle
  int tmp; //variable pour effectuer un échange
  for(i=0; i<n; i++){
    tmp=tab[i];
    j=i;
    while(j>0 && tab[j-1]>tmp){
      tab[j]=tab[j-1];
      j--;
    }
    tab[j]=tmp;
  }
}
