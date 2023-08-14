#include <iostream>

using namespace std;

void pao(int len, int a[]) {
    for (int i = 1; i <= len - 1; i++) {
        for (int j = 1; j <= len - 1; j++) {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }
    for (int i = 1; i <= len; i++)
        cout << a[i] << ' ';
}
