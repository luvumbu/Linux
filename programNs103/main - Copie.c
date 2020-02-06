#include <stdio.h>
#include <stdlib.h>
#include "function/exercice1.h"
#include "function/pageweb.h"
#include "model/model1.h"
#define TAILLE_MAX 1000 // Tableau de taille 1000
int main()
{
char nombreEntre = 0;
char age []= "salut"; // variable exercice 4
int i ;
int taillemodel = 0;
 FILE* fichier1 = NULL;
 FILE* fichier2 = NULL;
 FILE* fichier3 = NULL;
 FILE* fichier4 = NULL;

 char entrer[100] ;


char monNom[100] ;
char monNomconfirmation[100];

while (monNomconfirmation != 'o')
{
    char nom[10];

    printf("Quel est votre nom ? ");
    fgets(monNom, 10, stdin);
    printf("Votre nom est bien ?  taper o pour confirmer %s",monNom);
    fgets(monNomconfirmation, 10, stdin);


}


while (nombreEntre != 'y')
{
        char nom[10];

    printf("Quel est votre nom ? ");
    fgets(nom, 10, stdin);




    model1();
    model2();
    model2();
    printf("1.	Fonction n.1 : Addition de deux nombre et donne le résultat de la somme \n");
    printf("2.	Fonction n.2 : Echange de valeur de deux nombres\n");
    printf("3.	Fonction n.3 : Demande 3 nombre et il vous indique le nombre le plus grand parmi les nombres\n");
    printf("4.  Creation de page web auto\n");
    model2();
    model3();
    scanf("%c", &nombreEntre);
                switch (nombreEntre)
            {
            case '1':
              exercice1() ;
              break;
            case '2':
              exercice2() ;
              break;
            case '3':
              exercice3() ;
              break;
            case '4':
                break ;
            }

}





    return 0;
}
