#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    vector<vector<int>> livro;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        vector<int> nivel = {a, b};
        livro.push_back(nivel);
    }
    int q;
    vector<int> consultas;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int nj;
        cin >> nj;
        consultas.push_back(nj);
    }
    for (const auto& nivel : consultas) {
        double c = 0, v = 0;
        for (int i = 0; i < nivel; i++) {
            c += livro[i][0];
            v += livro[i][1];
        }
        double i = (c-v)/(c+v);
        if (i > 0) {
            cout << "COMPRA" << endl;
        } else if (i < 0) {
            cout << "VENDA" << endl;
        } else {
            cout << "NEUTRO" << endl;
        }
        
    }
}