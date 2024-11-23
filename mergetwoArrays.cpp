#include <iostream>
using namespace std;

void mergeArrays(int a[], int b[], int asize, int bsize) {
    for (int i = 0; i < asize; i++) {
        cout << a[i] << " ";
    }

    for (int i = 0; i < bsize; i++) {
        cout << b[i] << " ";
    }
}

int main() {
    int asize, bsize;

    cin >> asize;
    int a[asize];

    for (int i = 0; i < asize; i++) {
        cin >> a[i];
    }

    cin >> bsize;
    int b[bsize];

    for (int i = 0; i < bsize; i++) {
        cin >> b[i];
    }

    mergeArrays(a, b, asize, bsize);

    return 0;
}
