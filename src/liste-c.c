#include "liste-c.h"

typedef struct st_nodeLC {
    int value;
    struct st_nodeLC *next;
} *NodeLC;

struct st_listeC {
    NodeLC head;
    int size;
};

ListeC createLC(){
    ListeC liste = malloc(sizeof(struct st_listeC));
    if(liste == NULL) return NULL;

    liste->head = NULL;
    liste->size = 0;

    return liste;
}

int sizeLC(ListeC liste){
    return liste->size;
}

void addLC(ListeC liste, int value){
    NodeLC nextNode = malloc(sizeof(struct st_nodeLC));
    if(nextNode == NULL) return;

    nextNode->value = value;
    nextNode->next = NULL;

    if(liste->head == NULL){
        liste->head = nextNode;
    } else {
        NodeLC currentNode = liste->head;
        while(currentNode->next != NULL){
            currentNode = currentNode->next;
        }
        currentNode->next = nextNode;
    }

    liste->size++;
}

int getLC(ListeC liste, int pos){
    if(pos < 0 || pos >= liste->size){
        return -1;
    }
    NodeLC currentNode = liste->head;

    for(int i = 0; i < pos; i++){
        currentNode = currentNode->next;
    }

    return currentNode->value;
}

void deleteLC(ListeC liste){
    NodeLC currentNode = liste->head;

    while(currentNode != NULL){
        NodeLC temp = currentNode;
        currentNode = currentNode->next;
        free(temp);
    }

    free(liste);
}