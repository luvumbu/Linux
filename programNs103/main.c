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
int clavier = 0 ;
char entrer[100] ;

  char nom1[100] = {0};
  char nom2[100] = {0};
  char nomwx[100] ;
while (nombreEntre != 'y')
{
    model1();
    model2();
    model2();
    printf("1.	Fonction n.1 : Addition de deux nombre et donne le résultat de la somme \n");
    printf("2.	Fonction n.2 : Echange de valeur de deux nombres\n");
    printf("3.	Fonction n.3 : Demande 3 nombre et il vous indique le nombre le plus grand parmi les nombres\n");
    printf("4.  Creation de page web auto\n");
    printf("5.  Quitter le programme ");
    model2();
    model3();
    printf("a vous :") ;
    scanf("%c", &nombreEntre);
                switch (nombreEntre)
            {
            case '1':
              exercice1() ;
              break;
            case '2':
              exercice2() ;
            case '3':
              exercice3() ;
              break;
              case '6':
                return 0;
                  break;
            case '4':
                printf("Quel est le nom de votre page web ? ");
                scanf("%s", nom1);
                strcpy(nom2,nom1);
                //printf("%s",nom2);
                char fichier1[]="www/" ;// ces variable sont nessaire pour la concatenation
                char fichier11[100] ;// ces variable sont nessaire pour la concatenation
                char extension1[]=".html" ;// ces variable sont nessaire pour la concatenation
                strcat(fichier1, nom1);// www/

                strcat(fichier1,extension1);
                int verif = 30;
                        FILE* fichier = NULL;
                        fichier = fopen(fichier1, "r+");
                        if (fichier != NULL)
                        {
                                        char nom[20] = {0};

                                            model1();
                                            model2();
                                            model2();
                                        printf("ajouter un article sans space s'il vous plait \n");
                                            model2();
                                            model2();
                                             model3();
                                        scanf("%s", nom);
                                        printf("votre article a bien ete ajouté %s !\n\n", nom);

                                            FILE* fichier = NULL;

                                            fichier = fopen(fichier1, "a+");

                                            if (fichier != NULL)
                                            {
                                                fputs("<br/>", fichier);
                                                fputs("<h1>", fichier);
                                                fputs(nom, fichier);
                                                fputs("</h1>", fichier);
                                                fclose(fichier);
                                            }
                                            return 0;


                        }
                        else
                        {
                                        model1();
                                        model2();
                                        model2();
                                        // creation du fichier avec le nom de l'utilisateur
                                            FILE* fichier2 = NULL;

                                            fichier2 = fopen(fichier1, "w");

                                            strcpy(fichier11,fichier1);

                                            if (fichier2 != NULL)
                                            {
                                                // Lecture par caractere
    FILE* fichier4 = NULL;
    char pageWeb[500] ;
    int caractereActuel = 0;
    int foloo = 0 ;

    fichier4 = fopen("www/model1.html", "r");
    if (fichier4 != NULL)
    {
        // Boucle de lecture des caractères un à un
        do
        {

            caractereActuel = fgetc(fichier4); // On lit le caractère
            //printf("%c", caractereActuel); // On l'affiche
            pageWeb[foloo] = caractereActuel ;
             foloo ++;
        } while (caractereActuel != EOF); // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)

        fclose(fichier4);
    }                                              // fin de la lecture par caractere
                                                fputs(pageWeb, fichier2);
                                                fclose(fichier2);
                                            }
                                        // fin de la creation du fichier avec le nom du créateur
                                        printf("Je vien de creer un site web avec votre nom il s'appel %s \n",fichier1);

                                        printf("Quel est le titre de la page ?");
                                        scanf("%s", nomwx);
                                        // ajouter un article
                                            FILE* fichier = NULL;

                                                fichier = fopen(fichier11, "w");

                                                if (fichier != NULL)
                                                {
                                                    fputs(nomwx, fichier);
                                                    fclose(fichier);
                                                }
                                        model2();
                                        model2();
                                        model3();
                        }
                system("pause");

                break ;

            }

            if(nombreEntre=='5')
            {
               nombreEntre='y';
            }
}
    return 0;
}
