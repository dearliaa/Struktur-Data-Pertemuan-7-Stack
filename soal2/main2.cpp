#include <iostream>
#include "stack2.h"

using namespace std;

int main() {
    Stack S;
    int pilihan, x;

    createStack(S);

    do {
        cout << "\n===== MENU STACK POINTER =====" << endl;
        cout << "1. Tambah Terurut" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Tampilkan" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan bilangan: ";
                cin >> x;

                pushAscending(S, x);

                cout << x
                     << " berhasil ditambahkan secara terurut."
                     << endl;
                break;

            case 2:
                if (pop(S, x)) {
                    cout << "Elemen yang di-Pop: "
                         << x << endl;
                } else {
                    cout << "Stack kosong! Tidak dapat Pop."
                         << endl;
                }
                break;

            case 3:
                printInfo(S);
                break;

            case 4:
                clearStack(S);
                cout << "Seluruh node berhasil dihapus."
                     << endl;
                cout << "Program selesai." << endl;
                break;

            default:
                cout << "Pilihan tidak valid." << endl;
        }

    } while (pilihan != 4);

    return 0;
}