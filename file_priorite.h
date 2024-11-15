// file_priorite.h
#ifndef FILE_PRIORITE_H
#define FILE_PRIORITE_H

typedef enum { URGENT, NORMAL, FAIBLE } Priorite;

typedef struct {
    char nom[50];
    Priorite priorite;
} Patient;

void ajouter_patient(Patient p);
Patient servir_patient();
Patient voir_prochain_patient();

#endif // FILE_PRIORITE_H
