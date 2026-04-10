#include "liste-c.h"

typedef struct st_nodeLC {
    int value;
    struct st_nodeLC *next;
} *NodeLC;

struct st_listeC {
    NodeLC head;
    int size;
};