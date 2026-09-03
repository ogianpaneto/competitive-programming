#include <iostream>
using namespace std;

int main() {
    int t, c, k;
    cin >> t >> c >> k;
    int p = t*k;

    if (c > p) {
        cout << p;
    } else {
        cout << c;
    }
}
