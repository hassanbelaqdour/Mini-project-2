#include<stdio.h>
#include<string.h>
struct contact
{
    char nom_contact[100];
    char numero_contact[100];    
    char adresse_contact[100];
}; 
 int main(){
    struct contact all[100];
    int choix;
    int i;
    char none[100];
    int nombre_de_contact=0;
  do{
         printf("1. Ajouter un contact\n");
        printf("2. Afficher tous les contacts disponibles\n");
        printf("3. Rechercher un contact par son nom\n");
        printf("4. Mettre à jour un contact\n");
        printf("5. Supprimer un contact \n");
        printf("6. Quitter le systeme\n");
        printf("Entrez votre choix: ");
        scanf("%d", &choix);





     switch(choix){
    case 1:
                printf("ajouter un contact\n");
                printf("le nom du contact\n");
                scanf("%s",all[nombre_de_contact].nom_contact);
                printf("le numero du contact\n");
                scanf("%s",all[nombre_de_contact].numero_contact);
                printf("l'adresse du contact\n");
                scanf("%s",all[nombre_de_contact].adresse_contact);
                nombre_de_contact++;
                printf("contact ajouter avec succes\n");
        break;

    case 2:
                printf("tout les contact disponibles\n");
                for(i=0;i<nombre_de_contact;i++){
                    printf("le nom du contact est %s\n",all[i].nom_contact);
                    printf("le numero du contact est %s\n",all[i].numero_contact);
                    printf("le nom du contact est %s\n",all[i].adresse_contact);
                };
        break;

    case 3:
            
                printf("le nom du contact a rechercher\n");
                scanf("%s",none);
                for(i=0;i<nombre_de_contact;i++){
                    if(strcmp(all[i].nom_contact,none)==0){
                        printf("contact trouver\n");
                        printf("le nom du contact est %s\n",all[i].nom_contact);
                        printf("le nemuro du contact est %s\n",all[i].numero_contact);
                        printf("l'adresse du contact est %s\n",all[i].adresse_contact);
                    }
                }
        break;

    case 4:

                printf("le nom du contacte a mettre a jour\n");
                scanf("%s",none);
                        for (int i = 0; i <nombre_de_contact ; i++) {
                            if (strcmp(all[i].nom_contact,none)==0) {
                                printf("Entrez le nouveau nom du contact\n ");
                                scanf("%s",&all[i].nom_contact);
                                printf("Entrez le nouveau numero du contact\n",all[i].numero_contact);
                                scanf("%s",&all[i].numero_contact);
                                printf("entrez la nouvelle adresse du contact\n",all[i].adresse_contact);
                                scanf("%s",&all[i].adresse_contact);
                                printf("le nom du contact apres la modification est %s\n",all[i].nom_contact);
                                printf("le nom du contact apres la modification est %s\n",all[i].numero_contact);
                                printf("le nom du contact apres la modification est %s\n",all[i].adresse_contact);
                            }}
        break;
    
    case 5:
                printf("enterz le nom du contact a supprimer\n");
                scanf("%s",none);
                for(i=0; i < nombre_de_contact;i++){
                    if(strcmp(all[i].nom_contact,none)==0){
                       for (int j = i; j < nombre_de_contact; j++)
                        {
                            strcpy(all[j].nom_contact,all[j+1].nom_contact);
                            strcpy(all[j].numero_contact,all[j+1].numero_contact);
                            strcpy(all[j].adresse_contact,all[j+1].adresse_contact);

                    }nombre_de_contact--;
                    printf("contact est supprimer avec succes\n");
                }}


    case 6:
               printf("vous avrez quitter le programme\n");
          break;
    default:
               printf("le choix n'existe pas\n");
          break;     

    } }while(choix!=6);
 }
 
    
 