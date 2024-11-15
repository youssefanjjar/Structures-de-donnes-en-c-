// labyrinthe.c
#include <stdio.h>
#include "pile.h"
#include "file_priorite.h"
#include "historique_commandes.h"
#include "arrets_bus.h"

int main() {
    // Test de la pile
    Pile pile;
    initialiser_pile(&pile, 5);
    empiler(&pile, 10);
    printf("Element depile : %d\n", depiler(&pile));
    
    // Test de la file à priorité
    Patient p = {"Alice", URGENT};
    ajouter_patient(p);
    printf("Prochain patient : %s\n", voir_prochain_patient().nom);

    // Test des commandes
    Commande c = {1, "Pizza", "2024-11-15"};
    ajouter_commande(c);
    printf("Derniere commande : %s\n", voir_commande_precedente().produit);

    // Test des arrêts de bus
    Arret arret = {"Central", 10};
    ajouter_arret(arret);
    printf("Prochain arret : %s\n", prochain_arret().nom_arret);

    return 0;
}
