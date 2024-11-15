// historique_commandes.h
#ifndef HISTORIQUE_COMMANDES_H
#define HISTORIQUE_COMMANDES_H

typedef struct {
    int id_commande;
    char produit[100];
    char date[20];
} Commande;

void ajouter_commande(Commande c);
void supprimer_commande(int id_commande);
Commande voir_commande_precedente();
Commande voir_commande_suivante();

#endif // HISTORIQUE_COMMANDES_H
