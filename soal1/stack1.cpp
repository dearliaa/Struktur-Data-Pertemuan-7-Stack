
#include <iostream>
#include "stack1.h"

using namespace std;

void createStack(Stack &S) {
    S.Top = 0;
}

bool isEmpty(Stack S) {
    return S.Top == 0;
}

bool isFull(Stack S) {
    return S.Top == MAX;
}

bool push(Stack &S, int x) {
    if (isFull(S)) {
        return false;
    }

    S.Top++;
    S.info[S.Top] = x;
    return true;
}

bool pop(Stack &S, int &x) {
    if (isEmpty(S)) {
        return false;
    }

    x = S.info[S.Top];
    S.Top--;
    return true;
}

void printInfo(Stack S) {
    if (isEmpty(S)) {
        cout << "Stack kosong." << endl;
        return;
    }

    cout << "TOP: ";

    for (int i = S.Top; i >= 1; i--) {
        cout << S.info[i] << " ";
    }

    cout << endl;
}

void balikStack(Stack &S) {
    int kiri = 1;
    int kanan = S.Top;
    int temp;

    while (kiri < kanan) {
        temp = S.info[kiri];
        S.info[kiri] = S.info[kanan];
        S.info[kanan] = temp;

        kiri++;
        kanan--;
    }
}