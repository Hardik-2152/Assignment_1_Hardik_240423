#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ans(nums1.size());
    int in = 0;

    for (int i = 0; i < nums1.size(); i++) {
        for (int j = 0; j < nums2.size(); j++) {
            if (nums1[i] == nums2[j]) {
                int c = in;
                for (int k = j + 1; k < nums2.size(); k++) {
                    if (nums2[k] > nums2[j]) {
                        ans[in] = nums2[k];
                        in++;
                        break;
                    }
                }
                if (c == in) {
                    ans[in] = -1;
                    in++;
                }
                break;
            }
        }
    }

    return ans;
}

int main() {
    int n, m;
    cin >> n;

    vector<int> nums1(n);
    for (int i = 0; i < n; i++) {
        cin >> nums1[i];
    }

    cin >> m;

    vector<int> nums2(m);
    for (int i = 0; i < m; i++) {
        cin >> nums2[i];
    }

    vector<int> result = nextGreaterElement(nums1, nums2);

    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
