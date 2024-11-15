// file_priorite.c
#include <stdio.h>
#include <string.h>
#include "file_priorite.h"

// Déclaration d'une file à priorité (ici un tableau simple pour la démonstration)
#define MAX_PATIENTS 100
static Patient file[MAX_PATIENTS];
static int taille = 0;

void ajouter_patient(Patient p) {
    if (taille < MAX_PATIENTS) {
        file[taille++] = p;
    } else {
        printf("La file est pleine !\n");
    }
}

Patient servir_patient() {
    if (taille > 0) {
        Patient p = file[0];
        // Décaler les patients restants
        for (int i = 1; i < taille; i++) {
            file[i - 1] = file[i];
        }
        taille--;
        return p;
    } else {
        printf("La file est vide !\n");
        return (Patient){"", FAIBLE}; // Patient fictif pour l'erreur
    }
}

Patient voir_prochain_patient() {
    if (taille > 0) {
        return file[0];
    } else {
        printf("La file est vide !\n");
        return (Patient){"", FAIBLE}; // Patient fictif
    }
}
