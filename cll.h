#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    };
int init(struct node **);
int insertAfter(struct node **,int,int);
int traverse(struct node *);
int searchElement(struct node *,int, struct node **);
int deleteElement(struct node **,int);
int destroyList(struct node **);
int check(struct node *);
int reverselist(struct node **);
