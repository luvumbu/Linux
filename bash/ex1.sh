#!/bin/bash 
echo '-- A vous de faire un choix  --'
read val
 case $val in
        "1")
                echo 'Fonction n.1 : Addition de deux nombre et donne le résultat de la somme'
                echo 'Entrer votre premier nombre : \n'
                read nombre1
                echo 'Entrer votre deuxieme nombre'
                read nombre2
                let "somme = nombre1 + nombre2"
                echo 'La somme de '$nombre1'+'$nombre2'='$somme
                echo 'Fin du programme'
                ;;
        "2")
                echo 'n2.	Fonction n.2 : Echange de valeur de deux nombres '
                echo 'Entrer votre premier nombre  :'
                read nombre1
                echo 'Entrer votre deuxieme nombre  :'
                read nombre2
                echo 'La valeur du premier nombre entre est de '$nombre1
                echo 'La valeur du deuxieme entré est '$nombre2
                let "nombre3 = nombre1"
                let "nombre1 = nombre2"
                let "nombre2 = nombre3"
                echo 'Et maintenant  valeur du premier nombre entre est de '$nombre1
                echo 'Et maintenant  valeur du deuxieme entre de '$nombre2
                echo 'Fin du programme'
                ;;
        "3")
                    echo '3.	Fonction n.3 : Demande 3 nombre et il vous indique le nombre le plus grand parmi les nombres'
                    echo 'Entrer votre premier nombre :'
                    read nombre1
                    echo 'Entrer votre deuxieme nombre :'
                    read nombre2
                    echo 'Entrer votre troiseme nombre :'
                    read nombre3 
                    if [ $nombre1 -gt $nombre2 ] && [ $nombre1 -gt $nombre3 ] 
                    then
                            echo $nombre1' est plus grand'  

                        elif [ $nombre2 -gt $nombre1 ] && [ $nombre2 -gt $nombre3 ] 
                    then
                            echo $nombre2' est plus grand' 
                                elif [ $nombre3 -gt $nombre1 ] && [ $nombre3 -gt $nombre2 ] 
                    then
                            echo $nombre3' est plus grand'        
                    fi
                ;;
        "4")
                echo "Hé Jean, ça va ?"
                ;;
        *)
                echo "Choix non valide"
                ;;
esac