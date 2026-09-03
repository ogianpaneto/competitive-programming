#include <iostream>
#include <vector>
using namespace std;
using matrix_t = vector<vector<int>>;

void printMatrix(const matrix_t& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

matrix_t mirror(const matrix_t& mat1) {
    int rows = mat1.size();
    int cols = mat1[0].size();
    matrix_t mat2;

    for (int i = 0; i < rows; i++) {
        vector<int> row;
        for (int j = cols-1; j>=0; j--) {
            row.emplace_back(mat1[i][j]);
        }
        mat2.emplace_back(row);
    }

    return mat2;
}

matrix_t rotate90(const matrix_t& mat1) {
    int rows = mat1[0].size();
    int cols = mat1.size();
    matrix_t mat2;

    for (int i = 0; i < cols; i++) {
        vector<int> row;
        for (int j = rows-1; j >= 0; j--) {
            row.emplace_back(mat1[j][i]);
        }
        mat2.emplace_back(row);
    }
    
    return mat2;
}

matrix_t rotate180(const matrix_t& mat1) {
    int rows = mat1.size();
    int cols = mat1[0].size();
    matrix_t mat2;

    for (int i = rows-1; i >= 0; i--) {
        vector<int> row;
        for (int j = cols-1; j >= 0; j--) {
            row.emplace_back(mat1[i][j]);
        }
        mat2.emplace_back(row);
    }

    return mat2;
}

int main() {
    int rows, cols;
    cin >> rows >> cols;
    int score = 0;
    matrix_t terrain;
    for (int i = 0; i < rows; i++) {
        vector<int> row;
        for (int j = 0; j < cols; j++) {
            char x;
            cin >> x;
            int a;
            if (x == '.') {
                a = 1;
            } else {
                a = 0;
            }
            row.emplace_back(a);
        }
        terrain.emplace_back(row);
    }
    matrix_t parch = terrain;

    if (rows == cols) {
        parch = rotate90(parch);
        if (terrain == parch) {score+=1;}
        parch = rotate90(parch);
        if (terrain == parch) {score+=1;}
        parch = rotate90(parch);
        if (terrain == parch) {score+=1;}
        parch = rotate90(parch);
        if (terrain == parch) {score+=1;}
        parch = mirror(parch);
        if (terrain == parch) {score+=1;}
        parch = rotate90(parch);
        if (terrain == parch) {score+=1;}
        parch = rotate90(parch);
        if (terrain == parch) {score+=1;}
        parch = rotate90(parch);
        if (terrain == parch) {score+=1;}
        cout << score;
        return 1;
    }
    parch = rotate180(parch);
    if (terrain == parch) {score+=1;}
    parch = rotate180(parch);
    if (terrain == parch) {score+=1;}
    parch = mirror(parch);
    if (terrain == parch) {score+=1;}
    parch = rotate180(parch);
    if (terrain == parch) {score+=1;}
    
    cout << score;
    return 0;
}