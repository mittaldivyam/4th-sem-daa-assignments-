#include <bits/stdc++.h>
using namespace std;

void mergeVec(vector<int>& a, int l, int m, int r) {
    vector<int> L(a.begin() + l, a.begin() + m + 1);
    vector<int> R(a.begin() + m + 1, a.begin() + r + 1);
    int i = 0, j = 0, k = l;

    while (i < (int)L.size() && j < (int)R.size())
        a[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];

    while (i < (int)L.size()) a[k++] = L[i++];
    while (j < (int)R.size()) a[k++] = R[j++];
}

void ms(vector<int>& a, int l, int r) {
    if (l >= r) return;
    int m = l + (r - l) / 2;
    ms(a, l, m);
    ms(a, m + 1, r);
    mergeVec(a, l, m, r);
}

int main() {
    vector<int> a = {12,11,13,5,6,7};
    ms(a, 0, (int)a.size() - 1);
    for (int x : a) cout << x << " ";
    cout << "\n";
    // output: 5 6 7 11 12 13
    return 0;
    
}
