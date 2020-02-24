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
  int choix; //le choix de l'utilisateur
  printf("Que voulez vous faire ?\n1-Trier un tableau d'entier\n2-Trier un tableau de Vrai/Faux\n3-Trier un tableau d'éléments de couleur\n4-Savoir si un tableau est trié\n\n");
  choix=saisirEntier();
  switch (choix) {
    case 1 : triTabEntier();
    break;
    case 2 : triVF();
    break;
    case 3 : triCouleur();
    break;
    case 4 : estTrie();
    break;
    default : printf("Ce choix n'existe pas... Vous allez quitter le programme.\n");
    break;
  }
  return(0);
}
