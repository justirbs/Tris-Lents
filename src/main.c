/*!
 * \file main.c
 *
 * \autor Justine Ribas <ribasjusti@eisti.eu>
 * \version 0.1
 * \date 19 février 2020
 *
 * \brief fonction principale
 *
 *
 */

 //Inclusion des entêtes de librairies
 #include "tris.h"
 #include "tableau.h"
 #include "saisie.h"
 #include <stdio.h>
 #include <stdlib.h>

int main(void){
  int* tab; //le tableau à trier
  int n; //la taille du tableau à trier
  int choix; //le choix de l'utilisateur
  printf("Quelle est la taile de votre tableau ?\n");
  n=saisirEntier();
  tab=creerTabEntier1D(n);
  saisirTabEntier1D(tab, n);
  system("clear");
  printf("Voici votre tableau :\n");
  afficherTab(tab, n);
  printf("\nQuel tri souhaiter vous réaliser ?\n1-Tri par sélection\n2-Tri à bulles\n3-Tri par insertion\n");
  choix=saisirEntier();
  switch (choix){
    case 1 : triSelection(tab, n);
    break;
    case 2 : triBulle(tab, n);
    break;
    case 3 : triInsertion(tab, n);
    break;
    default : printf("Ce choix n'existe pas...");
    break;
  }
  printf("\nVoici le tableau trié :\n");
  afficherTab(tab, n);
  return(0);
}
