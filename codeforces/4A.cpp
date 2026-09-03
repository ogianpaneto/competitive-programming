#include <bits/stdc++.h>
using namespace std;

bool canDivide(int w) {
    if (w == 2) {
        return false;
    }
    if (w % 2 == 0) {
        return true;
    }
    return false;
}

int main() {
    int w;
    cin >> w;
    if (canDivide(w)) {
        cout << "YES";
        return 0;
    }    
    cout << "NO";
    return 0;
}