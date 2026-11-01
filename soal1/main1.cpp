#include <iostream>
#include "stack1.h"

using namespace std;

int main() {
    Stack S;
    int pilihan, x;

    createStack(S);

    do {
        cout << "\n===== MENU STACK ARRAY =====" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Tampilkan" << endl;
        cout << "4. Balik Stack" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan bilangan: ";
                cin >> x;

                if (push(S, x)) {
                    cout << x << " berhasil ditambahkan." << endl;
                } else {
                    cout << "Stack penuh! Push dibatalkan." << endl;
                }
                break;

            case 2:
                if (pop(S, x)) {
                    cout << "Elemen yang di-Pop: "
                         << x << endl;
                } else {
                    cout << "Stack kosong! Tidak dapat Pop." << endl;
                }
                break;

            case 3:
                printInfo(S);
                break;

            case 4:
                balikStack(S);
                cout << "Isi stack berhasil dibalik." << endl;
                printInfo(S);
                break;

            case 5:
                cout << "Program selesai." << endl;
                break;

            default:
                cout << "Pilihan tidak valid." << endl;
        }

    } while (pilihan != 5);

    return 0;
}