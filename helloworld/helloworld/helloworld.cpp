// helloworld.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int choix = 0;

    printf("=== Menu ===\n1. Royal Cheese\n2.Mc Deluxe\n3. Mc Bacon\n4. Big Mac\nVotre choix ?");
    scanf_s("%d", &choix);

    switch (choix)
    {
    case 1:
        printf("Royal Cheese");
        break;
    case 2:
        printf("Mc Deluxe");
        break;
    case 3:
        printf("Mc Bacon");
        break;
    case 4:
        printf("Big Mac");
        break;
    default:
        printf("Ce n'est pas au menu");
        break;
    }

    return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
