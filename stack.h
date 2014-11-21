#ifndef STACK_INCLUDED
#define STACK_INCLUDED

typedef struct Stack_T Stack;

extern Stack* Stack_new();
extern int Stack_empty(Stack*);
extern void Stack_push(Stack*, void*);
extern void* Stack_pop(Stack*);
extern void Stack_free(Stack**);

#undef T
#endif // STACK_INCLUDED
