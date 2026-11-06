#include <stdlib.h>
#include <stdio.h>
#include <time.h>



int main()
{
    srand(time(NULL));
    int random_number = rand() % 100 + 1;
    int reponse;
    int valeur = 0;
    int valeur2 = 1;
    while(valeur != valeur2)
    {
        printf("Choisissez un nombre entre 1 et 100\n");
        scanf("%d",&reponse);
        if(reponse < random_number)
        {
            printf("C'est plus!\n");
        }
        else if(reponse > random_number)
        {
            printf("C'est moin!\n");
        }
        else
        {
            valeur = valeur +1;
        }

    }
        printf("Gagné !\n");
    exit(0);
}


