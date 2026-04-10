#pragma once
#include <stdlib.h>

char* versionLC();

struct st_listeC;
typedef struct st_listeC * ListeC;

ListeC createLC(); // Sert a creer une liste de type "ListeC"
int sizeLC(ListeC liste); // Renvoie la taille de "liste"
void addLC(ListeC liste, int value); // Ajoute une valeur "value" a la fin de "liste"
int getLC(ListeC liste, int pos); // Donne la valeur attribue a "pos" dans "liste"

void replaceLC(ListeC liste, int value, int pos); // Remplace la valeur a "pos" par "value"
void insertLC(ListeC liste, int value, int pos); // Insert une valeur "value" a "pos"
void removeLC(ListeC liste, int pos); // Suprime la position "pos"

void deleteLC(ListeC liste); // Suprime "liste" pour liberer la memoire
