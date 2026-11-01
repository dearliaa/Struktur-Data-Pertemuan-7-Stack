#ifndef STACK2_H
#define STACK2_H

typedef struct elmStack *address;

struct elmStack {
    int info;
    address next;
};

struct Stack {
    address Top;
};

void createStack(Stack &S);
bool isEmpty(Stack S);
address alokasi(int x);
void dealokasi(address &P);
void push(Stack &S, address P);
bool pop(Stack &S, int &x);
void printInfo(Stack S);
void pushAscending(Stack &S, int x);
void clearStack(Stack &S);

#endif