void exercice1()
{
    printf("1.	Fonction n.1 : Addition de deux nombre et donne le résultat de la somme \n");
    int nombre1 = 0 ;
    int nombre2 = 0 ;
    printf("Entrer votre premier nombre : \n") ;
    scanf("%d",&nombre1);
    printf("Entrer votre deuxieme nombre : \n") ;
    scanf("%d",&nombre2) ;
    printf("La somme de %d + %d  = %d  \n",nombre1,nombre2,nombre1+nombre2) ;
    printf("Fin du programme n.1 \n \n\n\n\n");
}
void exercice2()
{
    printf("2.	Fonction n.2 : Echange de valeur de deux nombres\n");
    int nombre1 = 0 ;
    int nombre2 = 0 ;
    int nombre3 = 0 ;
    printf("Entrer votre premier nombre : \n") ;
    scanf("%d",&nombre1);
    printf("Entrer votre deuxieme nombre : \n") ;
    scanf("%d",&nombre2);
    printf("La valeur du premier nombre entre est de %d \n",nombre1) ;
    printf("La valeur du deuxieme entre de %d \n",nombre2) ;
    nombre3 = nombre1;
    nombre1= nombre2;
    nombre2= nombre3;
    printf("Et maintenant  valeur du premier nombre entre est de %d \n",nombre1) ;
    printf("Et maintenant  valeur du deuxieme entre de %d \n",nombre2) ;
    printf("Fin du programme n.1 \n \n\n\n\n");
}
void exercice3()
{
    printf("3.	Fonction n.3 : Demande 3 nombre et il vous indique le nombre le plus grand parmi les nombres\n");
    int nombre1 = 0 ;
    int nombre2 = 0 ;
    int nombre3 = 0 ;
    printf("Entrer votre premier nombre : \n") ;
    scanf("%d",&nombre1);
    printf("Entrer votre deuxieme nombre : \n") ;
    scanf("%d",&nombre2);
    printf("Entrer votre troiseme nombre : \n") ;
    scanf("%d",&nombre3);
    if(nombre1>nombre2 && nombre1>nombre3)
    {
        printf("%d est le nombre le plus grand",nombre1);
    }
    else if(nombre2>nombre1 && nombre2>nombre3)
    {
         printf("%d est le nombre le plus grand",nombre2);
    }
    else if(nombre3>nombre2 && nombre3>nombre1)
    {
         printf("%d est le nombre le plus grand",nombre3);
    }
}
void exercice4()
{
        printf("4.  Creation de page web auto\n");
}
