#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int choix = 0;

    char nom[100][20];
    char prenom[100][20];
    float telephone[100];
    int age[100];
    int statut[100];
    char date[100][20];
    int id[100];
    int x = 0;

    while (choix != 6) {
        printf("**********\n");
        printf("1. ajouter une reservation.\n");
        printf("2. afficher toutes les reservations.\n");
        printf("3. mettre à jour une reservation.\n");
        printf("4. editer une reservation.\n");
        printf("5. afficher le nombre total de réservations.\n");
        printf("6. quitter le programme.\n");

        printf("entrez un choix :\n");
        scanf("%d", &choix);

        switch (choix) {
        case 1: {
            if (x >= 100) {
                printf("erreur : Nombre maximum de réservations atteint.\n");


            }

            int Urid = rand() % 100 ;
            printf("Votre ID est : %d\n", Urid);
            id[x] = Urid;


            printf("entrez le nom : ");
            scanf("%s", nom[x]);
            printf("Entrez le prénom : ");
            scanf("%s", prenom[x]);
            printf("Entrez le telephone : ");
            scanf("%f", &telephone[x]);
            printf("entrez age : ");
            scanf("%d", &age[x]);
            printf("entrez le statut (1: valide, 2: reporte, 3: annule, 4: traite) : ");
            scanf("%d", &statut[x]);
            printf("entrez la date de reservation (jj-mm-aaaa) : ");
            scanf("%s", date[x]);
            x++;

        }

        case 2:
            for (int i = 0; i < x; i++) {
                printf("******\n");
                printf("id: %d\n", id[i]);
                printf("nom: %s\n", nom[i]);
                printf("prenom: %s\n", prenom[i]);
                printf("telephone: %.2f\n", telephone[i]);
                printf("qge: %d\n", age[i]);
                printf("statut: %d\n", statut[i]);
                printf("date de réservation: %s\n", date[i]);
            }


        case 3: {
            int ref;
            printf("Entrez l'ID de la réservation à mettre à jour : ");
            scanf("%d", &ref);
            int found = 0;
            for (int i = 0; i < x; i++) {
                if (id[i] == ref) {
                    printf("Entrez le nouveau téléphone : ");
                    scanf("%f", &telephone[i]);
                    printf("Entrez le nouvel âge : ");
                    scanf("%d", &age[i]);
                    printf("Entrez le nouveau statut (1: valide, 2: reporte, 3: annule, 4: traite) : ");
                    scanf("%d", &statut[i]);
                    printf("reservation mise à jour.\n");
                    found = 1;

                }
            }
            if (!found) {
                printf("Réservation non trouvee.\n");
            }

        }

        case 4: {
            int ref;
            printf("Entrez l'ID de la réservation à éditer : ");
            scanf("%d", &ref);
            int found = 0;
            for (int i = 0; i < x; i++) {
                if (id[i] == ref) {
                    printf("Entrez le nouveau nom : ");
                    scanf("%s", nom[i]);
                    printf("Entrez le nouveau prénom : ");
                    scanf("%s", prenom[i]);
                    printf("Entrez le nouveau téléphone : ");
                    scanf("%f", &telephone[i]);
                    printf("Entrez le nouvel âge : ");
                    scanf("%d", &age[i]);
                    printf("Entrez le nouveau statut (1: validé, 2: reporté, 3: annulé, 4: traité) : ");
                    scanf("%d", &statut[i]);
                    printf("Entrez la nouvelle date de réservation (jj-mm-aaaa) : ");
                    scanf("%s", date[i]);
                    found = 1;
                    printf("Réservation mise à jour.\n");

                }
            }
            if (!found) {
                printf("Réservation non trouvée.\n");
            }

        }

        case 5:
            printf("Le nombre total de réservations est : %d\n", x);


        case 6:
            printf("Vous avez quitté le programme.\n");
            return 0;


        }
    }

    return 0;
}
