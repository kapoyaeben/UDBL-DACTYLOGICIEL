#include<stdlib.h>
#include<stdio.h>
void acceuil()
{
	// code de l'ecran d'acceuil
	printf("\n\n\t\t\t\t\t========== ECRAN D'ACCEUIL ===========\n\n");
	printf("\t1.Demarrer\n");
	printf("\t2.Configurer\n");
	printf("\t3.Aide\n");
	int choix;
	scanf_s("%d", &choix);

	switch (choix)
	{
	case 1: cls(); demarrer(); break;// demarre le jeux si le choix est 1
	case 2: cls(); configurer();  break;// demarre la configuration si le choix est 2
	case 3:   cls(); aide(); break;// demarre l'aide si le choix est 3
	default: // sinon si le choix est différent de 1,2 ou 3 affiche Commande inconnue
		printf("Commande inconnue \n"); acceuil();
		break;
	}
}
