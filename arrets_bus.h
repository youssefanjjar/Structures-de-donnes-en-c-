// arrets_bus.h
#ifndef ARRETS_BUS_H
#define ARRETS_BUS_H

typedef struct {
    char nom_arret[50];
    int temps_estime;
} Arret;

void ajouter_arret(Arret a);
Arret prochain_arret();
Arret arret_precedent();
void revenir_au_depart();

#endif // ARRETS_BUS_H
