#include <iostream>
#include "pao.h"

using namespace std;
int a[100000];

int main() {
    cout << "input wei: ";
    int wei;
    cin >> wei;
    for (int i = 1; i <= wei; i++)
        cin >> a[i];
    pao(wei, a);
    return 0;
}
