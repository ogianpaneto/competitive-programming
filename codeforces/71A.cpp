#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> words(n);

    for (int i = 0; i < n; i++) {
        string big_word;
        string small_word = "";
        cin >> big_word;
        int size = big_word.size();
        if (size <= 10) {
            words[i] = big_word;
            continue;
        }
        small_word.push_back(big_word[0]);
        small_word += to_string(size-2);
        small_word.push_back(big_word[size - 1]);
        words[i] = small_word;
    }

    for (const string word : words) {
        cout << word << "\n";
    }

    return 0;
}