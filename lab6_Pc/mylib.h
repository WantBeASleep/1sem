#ifndef MYLIB_H
#define MYLIB_H

typedef struct list{
    struct list *prev;
    char letter;
} list;

list *processed(list *data);
list *oneWorldChange(list *sWorld, list *eWorld);

void input();
void change(list *index, list *data);
void output(list *data);
void clean(list *start, list *end);
void allclean(list *start);

#endif
