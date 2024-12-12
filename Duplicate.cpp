#include <bits/stdc++.h> 
using namespace std;

string duplicates(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    for (int i = 1; i < arr.size(); ++i) { 
        if (arr[i] == arr[i - 1]) { 
            return "YES"; 
            } 
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

    cout << duplicates(A) << endl;

    return 0;
}
