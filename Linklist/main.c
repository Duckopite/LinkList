#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
struct Linklist
{
    char name[30];
    char age;
    struct Linklist *next;
};

typedef  struct Linklist *node;

node linkList_CreatNode()
{
    node temp;
    temp=(node)malloc(sizeof(struct Linklist));
    temp->next = NULL;
    printf("Please import name:");
    gets(temp->name);
    printf("Please import age:");
    scanf("%d", temp->age);
    return temp;
}
void linkList_printListNode(void)
{
    int index=0u;
    for(index=0;index<sizeof(struct Linklist); index++)
    {


    }

}
int main()
{

}
