#include <bits/stdc++.h> 
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> A(N);
    vector<long long> prefix_sum(N);

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    prefix_sum[0] = A[0];
    for (int i = 1; i < N; ++i) {
        prefix_sum[i] = prefix_sum[i - 1] + A[i];
    }

    for (int i = N - 1; i >= 0; --i) {
        cout << prefix_sum[i] << " ";
    }
    cout << endl;

    return 0;
}

