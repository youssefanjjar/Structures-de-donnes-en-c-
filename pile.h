// pile.h
#ifndef PILE_H
#define PILE_H

// Structure de la pile
typedef struct {
    int *elements;
    int capacite;
    int taille;
} Pile;

// Fonctions pour gérer la pile
void initialiser_pile(Pile *p, int capacite);
int est_vide(Pile *p);
int est_pleine(Pile *p);
void empiler(Pile *p, int element);
int depiler(Pile *p);

#endif // PILE_H
