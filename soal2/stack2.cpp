
#include <iostream>
#include "stack2.h"

using namespace std;

void createStack(Stack &S) {
    S.Top = nullptr;
}

bool isEmpty(Stack S) {
    return S.Top == nullptr;
}

address alokasi(int x) {
    address P = new elmStack;
    P->info = x;
    P->next = nullptr;
    return P;
}

void dealokasi(address &P) {
    delete P;
    P = nullptr;
}

void push(Stack &S, address P) {
    P->next = S.Top;
    S.Top = P;
}

bool pop(Stack &S, int &x) {
    if (isEmpty(S)) {
        return false;
    }

    address P = S.Top;
    x = P->info;
    S.Top = P->next;
    P->next = nullptr;
    dealokasi(P);

    return true;
}

void printInfo(Stack S) {
    if (isEmpty(S)) {
        cout << "Stack kosong." << endl;
        return;
    }

    cout << "TOP: ";

    address P = S.Top;

    while (P != nullptr) {
        cout << P->info << " ";
        P = P->next;
    }

    cout << endl;
}

void pushAscending(Stack &S, int x) {
    Stack bantu;
    int nilai;

    createStack(bantu);

    while (!isEmpty(S) && S.Top->info > x) {
        pop(S, nilai);
        push(bantu, alokasi(nilai));
    }

    push(S, alokasi(x));

    while (!isEmpty(bantu)) {
        pop(bantu, nilai);
        push(S, alokasi(nilai));
    }
}

void clearStack(Stack &S) {
    int nilai;

    while (pop(S, nilai)) {
    }
}
