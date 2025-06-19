#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> anagrams(const vector<string> &A) {
    unordered_map<string, vector<int>> m;
    for (int i = 0; i < A.size(); i++) {
        string s = A[i];
        sort(s.begin(), s.end());
        m[s].push_back(i + 1);
    }

    vector<vector<int>> result;
    for (auto &entry : m) {
        result.push_back(entry.second);
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<string> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    vector<vector<int>> groups = anagrams(A);

    for (auto &group : groups) {
        for (int idx : group) {
            cout << idx << " ";
        }
        cout << endl;
    }

    return 0;
}
