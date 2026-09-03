#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    int menor = 0;
    int soma = 0;
    cin >> n;
    vector<int> quant(n);
    vector<int> meta(n);
    for (int& q : quant) {
        cin >> q;
    }
    for (int& m : meta) {
        cin >> m;
    }

    for (int i = 0; i < n; i++) {
        if (meta[i] > quant[i]) {
            cout << -1;
            return -1;
        }

        if (quant[i] - meta[i] < quant[menor] - meta[menor]) {
            menor = i;
        }
    }
    for (int i = 0; i < n; i++) {
        if (!(i == menor)) {
            soma += quant[i];
        } else {
            soma += meta[i];
        }
    }

    cout << soma;
    
}