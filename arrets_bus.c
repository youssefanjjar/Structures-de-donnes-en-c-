// arrets_bus.c
#include <stdio.h>
#include <string.h>
#include "arrets_bus.h"

// Déclaration d'une liste d'arrêts de bus
#define MAX_ARRETS 50
static Arret arrets[MAX_ARRETS];  // Remplacement de 'arrêts' par 'arrets'
static int index_arret = 0;

void ajouter_arret(Arret a) {
    if (index_arret < MAX_ARRETS) {
        arrets[index_arret++] = a;  // Remplacement de 'arrêts' par 'arrets'
    } else {
        printf("La liste des arrêts est pleine !\n");
    }
}

Arret prochain_arret() {
    if (index_arret < MAX_ARRETS) {
        return arrets[index_arret++];  // Remplacement de 'arrêts' par 'arrets'
    } else {
        printf("Aucun arrêt suivant !\n");
        return (Arret){"", 0};
    }
}

Arret arret_precedent() {
    if (index_arret > 0) {
        return arrets[--index_arret];  // Remplacement de 'arrêts' par 'arrets'
    } else {
        printf("Aucun arrêt précédent !\n");
        return (Arret){"", 0};
    }
}

void revenir_au_depart() {
    index_arret = 0; // Revenir au premier arrêt
}
