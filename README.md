Projet de Simulation de Structures de Données en C
==================================================

Description
-----------

Ce projet implémente plusieurs structures de données en langage C pour simuler différentes situations réelles. Il comprend des simulations de navigation dans un labyrinthe, de gestion des appels de fonctions, de gestion des patients dans une clinique, de l'historique des commandes d'un utilisateur et de la gestion des arrêts de bus. Chaque exercice met en œuvre des structures de données spécifiques comme des piles, des files à priorité, des listes doublement chaînées, et des listes circulaires.

### Structures de données implémentées :

1.  **Pile** :

    -   Utilisée pour simuler la navigation dans un labyrinthe où chaque déplacement est enregistré dans la pile. En cas d'impasse, on peut revenir en arrière en dépilant.
2.  **Système d'appels de fonctions** :

    -   Simule l'empilement des appels de fonctions dans une pile. À chaque appel, une fonction est ajoutée à la pile et lorsqu'une fonction termine, elle est retirée de la pile.
3.  **File à priorité** :

    -   Utilisée pour gérer des patients dans une clinique. Les patients sont ajoutés avec un niveau de priorité (Urgent, Normal, Faible). Le patient le plus urgent est servi en premier.
4.  **Liste doublement chaînée** :

    -   Gère l'historique des commandes d'un utilisateur dans une application de livraison. L'utilisateur peut naviguer dans l'historique des commandes, voir la commande précédente ou suivante, ou supprimer une commande.
5.  **Liste doublement chaînée circulaire** :

    -   Simule les arrêts d'un bus. Chaque arrêt est un nœud dans une liste circulaire, et l'utilisateur peut naviguer dans les arrêts du bus dans les deux sens (normal et inverse).

Fonctionnalités
---------------

-   **Pile** :

    -   `avancer` : Ajoute un chemin à la pile.
    -   `reculer` : Dépile un chemin et revient à une intersection non explorée.
    -   `montrer_chemin_actuel` : Affiche le chemin actuel dans le labyrinthe.
-   **Système d'appels de fonctions** :

    -   `appeler_fonction` : Ajoute une fonction à la pile d'appels.
    -   `terminer_fonction` : Retire une fonction de la pile lorsqu'elle est terminée.
    -   `fonction_active_actuelle` : Affiche la fonction actuellement en cours d'exécution.
-   **File à priorité** :

    -   `ajouter_patient` : Ajoute un patient avec un niveau de priorité.
    -   `servir_patient` : Sert un patient en fonction de sa priorité.
    -   `voir_prochain_patient` : Affiche le prochain patient à servir.
-   **Historique des commandes** :

    -   `ajouter_commande` : Ajoute une commande à l'historique.
    -   `supprimer_commande` : Supprime une commande de l'historique.
    -   `voir_commande_precedente` : Affiche la commande précédente.
    -   `voir_commande_suivante` : Affiche la commande suivante.
-   **Arrêts de bus** :

    -   `ajouter_arret` : Ajoute un arrêt à la liste.
    -   `supprimer_arret` : Supprime un arrêt de la liste.
    -   `prochain_arret` : Affiche le prochain arrêt.
    -   `arret_precedent` : Affiche l'arrêt précédent.
    -   `revenir_au_depart` : Ramène le bus au premier arrêt.

Prérequis
---------

-   **Langage** : C
-   **Compilateur** : GCC ou tout autre compilateur compatible avec le standard C99
-   **Système d'exploitation** : Ce projet est compatible avec Windows, Linux, et macOS

Installation
------------

1.  Clone ce dépôt :
```bash
    git clone https://github.com/youssefanjjar/Structures-de-donnes-en-c-.git
	```

2.  Navigue dans le répertoire du projet :
```
    bash
    cd projet-structures-donnees
	
	```

3.  Compile le projet avec GCC :
```
    bash
    gcc -Wall -std=c99 labyrinthe.c file_priorite.c historique_commandes.c arrets_bus.c pile.c -o projet
```
4.  Exécute le programme compilé :
```
    bash

    ./projet
	
	```

Structure des fichiers
----------------------

Le projet est organisé de la manière suivante :
```
bash
projet-structures-donnees/
├── labyrinthe.c               # Code pour la simulation du labyrinthe
├── appels_fonctions.c         # Code pour la simulation des appels de fonctions
├── file_priorite.c            # Code pour la gestion des patients dans une file à priorité
├── historique_commandes.c     # Code pour la gestion de l'historique des commandes
├── arrets_bus.c               # Code pour la gestion des arrêts de bus
├── pile.c                     # Code pour la gestion de la pile
├── arrets_bus.h               # Définition des structures et fonctions pour les arrêts de bus
├── historique_commandes.h     # Définition des structures et fonctions pour l'historique des commandes
├── file_priorite.h            # Définition des structures et fonctions pour la file à priorité
├── pile.h                     # Définition des structures et fonctions pour la pile
├── README.md                  # Documentation du projet
└── Makefile                   # Fichier pour automatiser la compilation (optionnel)
```
### Description des fichiers :

-   **`labyrinthe.c`** : Contient la fonction `main()` qui teste toutes les fonctionnalités des structures de données implémentées.
-   **`appels_fonctions.c`** : Gère les opérations liées à l'empilement et au dépilement des appels de fonctions.
-   **`file_priorite.c`** : Implémente la gestion des patients dans une file à priorité.
-   **`historique_commandes.c`** : Permet de gérer l'historique des commandes passées par un utilisateur dans une application de livraison.
-   **`arrets_bus.c`** : Gère la simulation des arrêts de bus à l'aide d'une liste circulaire doublement chaînée.
-   **`pile.c`** : Implémente la pile utilisée pour simuler la navigation dans un labyrinthe.

Tests
-----

Le programme utilise plusieurs tests intégrés pour vérifier les fonctionnalités des différentes structures de données :

1.  **Pile** : Test de l'ajout et du retrait de chemins dans un labyrinthe.
2.  **File à priorité** : Test de l'ajout de patients et du service en fonction de leur priorité.
3.  **Historique des commandes** : Test de l'ajout et de la suppression de commandes dans l'historique.
4.  **Arrêts de bus** : Test de l'ajout, de la suppression et de la navigation à travers les arrêts.

Contributions
-------------

Les contributions sont les bienvenues ! Si tu souhaites améliorer ce projet, n'hésite pas à ouvrir une "issue" ou à soumettre une "pull request". Voici quelques idées de contributions :

-   Ajouter de nouvelles fonctionnalités.
-   Améliorer la gestion des erreurs.
-   Optimiser le code.

Licence
-------

Ce projet est sous la licence MIT. Tu es libre de l'utiliser, de le modifier et de le distribuer à ta guise.

* * * * *