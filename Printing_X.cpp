#include <bits/stdc++.h> 
using namespace std;

void Pattern(int N) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i == j && i == N / 2) {
                cout << "X";
            } else if (i == j) {
                cout << "\\";
            } else if (i + j == N - 1) {
                cout << "/";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int N;
    cin >> N;
    Pattern(N);
    return 0;
}
