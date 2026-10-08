

#include <stdlib.h>

typedef struct list_chaine list_chaine;
struct list_chaine {
  int valeur;
  list_chaine *suivant;
};

struct Thanos {
   list_chaine *debut;
    list_chaine *fin;
};

typedef struct Thanos* thanos;

thanos init() {
    thanos t =  malloc(sizeof(struct Thanos));
    t->debut = NULL;
    t->fin = NULL;
    return t;
}

void append(thanos t, int x) {
    list_chaine* dernier_thanos = malloc(sizeof(list_chaine));

    dernier_thanos->valeur = x;
    dernier_thanos->suivant = NULL;

    if (t -> debut == NULL) {
        t -> debut = dernier_thanos;
        t -> fin = dernier_thanos;
    }
    else {
        t -> fin -> suivant = dernier_thanos;
        t -> fin  = dernier_thanos;
    }
}


void remove_thanos(thanos t) {
    list_chaine* lc = t->debut;
    thanos nouveau_thanos = init();
    int i = 1;
    while (lc != NULL) {
        if (i % 2 == 0) {
            append(nouveau_thanos, lc->valeur);
        }
        i++;
        lc = lc -> suivant;
    }
    t -> debut = nouveau_thanos -> debut;
    t -> fin = nouveau_thanos -> fin ;
}



