#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(const vector<int>& A, int B) {
    unordered_map<int, int> indexMap;
    vector<int> result;

    for (int i = 0; i < A.size(); i++) {
        int complement = B - A[i];
        if (indexMap.find(complement) != indexMap.end()) {
            result.push_back(indexMap[complement] + 1);
            result.push_back(i + 1);
            return result;
        }
        if (indexMap.find(A[i]) == indexMap.end()) {
            indexMap[A[i]] = i;
        }
    }

    return result;
}

int main() {
    int n, target;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    cin >> target;

    vector<int> result = twoSum(A, target);

    if (!result.empty()) {
        cout << result[0] << " " << result[1] << endl;
    }

    return 0;
}
