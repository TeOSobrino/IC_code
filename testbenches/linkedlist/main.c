#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"


int main(int argc, char* argv[])
{

    llist* list = llist_create((void*) 123);

    for(int i = 0; i < INT32_MAX; i++){
        llist_rand_push(list, (void *)rand());
    }

    for(int i = 0; i < INT32_MAX; i++){
        llist_rand_del(list);
    }

    return 0;
}