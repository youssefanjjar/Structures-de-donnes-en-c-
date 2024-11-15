// historique_commandes.c
#include <stdio.h>
#include <string.h>
#include "historique_commandes.h"

// Déclaration d'une liste pour stocker les commandes
#define MAX_COMMANDES 100
static Commande historique[MAX_COMMANDES];
static int index_commande = 0;

void ajouter_commande(Commande c) {
    if (index_commande < MAX_COMMANDES) {
        historique[index_commande++] = c;
    } else {
        printf("Historique plein !\n");
    }
}

void supprimer_commande(int id_commande) {
    for (int i = 0; i < index_commande; i++) {
        if (historique[i].id_commande == id_commande) {
            // Décaler les commandes
            for (int j = i; j < index_commande - 1; j++) {
                historique[j] = historique[j + 1];
            }
            index_commande--;
            break;
        }
    }
}

Commande voir_commande_precedente() {
    if (index_commande > 0) {
        return historique[index_commande - 1];
    } else {
        printf("Aucune commande précédente !\n");
        return (Commande){0, "", ""};
    }
}

Commande voir_commande_suivante() {
    if (index_commande < MAX_COMMANDES) {
        return historique[index_commande];
    } else {
        printf("Aucune commande suivante !\n");
        return (Commande){0, "", ""};
    }
}
