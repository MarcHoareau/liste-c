#include "../lib/liste-c.h"
#include <stdio.h>

void affiche(ListeC list){
    for(int i = 0; i < sizeLC(list); i++){
        printf("%d ", getLC(list, i));
    }

    printf("\n");
}

int main(){
    ListeC list;
    list=createLC();
    
    addLC(list,32);
    addLC(list,24);
    addLC(list,5);
    addLC(list,7);

    replaceLC(list, -15, 1);
    
    affiche(list);

    insertLC(list, 0, 2);
    insertLC(list, 64, 1);

    affiche(list);

    removeLC(list, 3);

    affiche(list);
    
    return 0;
}