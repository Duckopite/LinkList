#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

struct listClass
{
    uint32_t name;
    uint32_t age;
   struct listClass *next;
};

#define PRINT_LIST 1u
#define ADD_STUDENT 2u
#define SEARCH_STUDENT 3u
#define ARRANGE_STUDENT 4u
#define DELETE_STUDENT 5u


#endif
