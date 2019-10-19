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

#endif
