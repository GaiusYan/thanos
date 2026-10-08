# include <stdio.h>
# include "thanos.c"
# include <assert.h>


void print_thanos (thanos t) {
    list_chaine* lc = t -> debut;
    printf("[");
    while (lc != NULL) {
        printf("%d,",lc-> valeur);
        lc = lc -> suivant;
        if (lc == NULL) {
            printf("]");
        }
    }
    printf("\n");
}


int main () {
    thanos t = init();
    append(t,1);
    append(t,2);
    append(t,3);
    append(t,4);
    append(t,5);
    append(t,6);
    append(t,7);
    append(t,8);
    append(t,9);
    append(t,10);
    print_thanos(t);
    remove_thanos(t);
    print_thanos(t);
   // assert(t);
    append(t,11);
    append(t,12);
    append(t,13);
    append(t,14);
    append(t,15);
    append(t,16);
    append(t,17);
    append(t,18);
    append(t,19);
    append(t,20);
    remove_thanos(t);
    print_thanos(t);
    remove_thanos(t);
    print_thanos(t);

    return 0;
}