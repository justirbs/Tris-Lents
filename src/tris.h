/*!
 * \file tris.h
 *
 * \autor Justine Ribas <ribasjusti@eisti.eu>
 * \version 0.1
 * \date 19 février 2020
 *
 * \brief header des fonctions et procéedures relatives aux tris
 *
 *
 */

 #ifndef __TRIS_H__
 #define __TRIS_H__


 // Inclusion des entêtes de librairies
 #include "tableau.h"


 /**
  *\fn void triSelection(int* tab, int n)
  *
  *\author Justine Ribas <ribasjusti@eisti.eu>
  *\version 0.1
  *\date 19 février 2020
  *
  *\brief permet de trier un tableau par sélection
  *
  *
  *\param tab le tableau qui à trier
  *\param n la taille du tableau
  *
  */
void triSelection(int* tab, int n);

/**
 *\fn void triBulle(int* tab, int n)
 *
 *\author Justine Ribas <ribasjusti@eisti.eu>
 *\version 0.1
 *\date 19 février 2020
 *
 *\brief permet de trier un tableau à bulle
 *
 *
 *\param tab le tableau qui à trier
 *\param n la taille du tableau
 *
 */
 void triBulle(int* tab, int n);

 /**
  *\fn void triInsertion(int* tab, int n)
  *
  *\author Justine Ribas <ribasjusti@eisti.eu>
  *\version 0.1
  *\date 19 février 2020
  *
  *\brief permet de trier un tableau par insertion
  *
  *
  *\param tab le tableau qui à trier
  *\param n la taille du tableau
  *
  */
void triInsertion(int* tab, int n);

#endif