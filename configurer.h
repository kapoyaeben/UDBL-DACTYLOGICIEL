#include<stdlib.h>
#include<stdio.h>
void configurer()
{

	char file[40];
	printf("\n\n\tVoulez-vous apporter des modifications au fichier qui porte les mots du jeu ?\n\n");
	printf("\t\t0.Non\t\t\t\t\t\t1.Oui :");
	int rep;
	scanf("%d",&rep);
	switch (rep)
	{
	case 0:cls(); acceuil(); break;
	case 1: cls(); printf("\n\n\n\tveuillez saisir le nom du fichier a charger avec moins de 40 charactères :");
		scanf("%s",mainF);
		cls();
		acceuil();
	default:
		printf("\n\n\t\t\t\t\t\ Commande inconnue "); cls(); configurer();
		break;
	}
}