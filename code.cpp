#include <bits/stdc++.h> 
using namespace std;

string has_duplicates(const vector<int>& arr) {
    unordered_set<int> seen;
    for (int num : arr) {
        if (seen.find(num) != seen.end()) {
            return "YES";
        }
        seen.insert(num);
    }
    return "NO";
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    cout << has_duplicates(A) << endl;

    return 0;
}

