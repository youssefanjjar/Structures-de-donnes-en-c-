// pile.c
#include <stdio.h>
#include <stdlib.h>
#include "pile.h"

// Initialiser la pile avec une capacité donnée
void initialiser_pile(Pile *p, int capacite) {
    p->capacite = capacite;
    p->taille = 0;
    p->elements = (int *)malloc(sizeof(int) * capacite);
}

// Vérifier si la pile est vide
int est_vide(Pile *p) {
    return p->taille == 0;
}

// Vérifier si la pile est pleine
int est_pleine(Pile *p) {
    return p->taille == p->capacite;
}

// Empiler un élément dans la pile
void empiler(Pile *p, int element) {
    if (!est_pleine(p)) {
        p->elements[p->taille++] = element;
    } else {
        printf("La pile est pleine !\n");
    }
}

// Dépiler un élément de la pile
int depiler(Pile *p) {
    if (!est_vide(p)) {
        return p->elements[--p->taille];
    } else {
        printf("La pile est vide !\n");
        return -1; // Valeur d'erreur
    }
}
