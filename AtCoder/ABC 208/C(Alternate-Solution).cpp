#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; long long k;
    cin >> n >> k;

    vector<int> a(n);
    for(auto& x:a) cin >> x;

    vector<int> order(n);
    iota(order.begin(), order.end(), 0);
    sort(order.begin(), order.end(), [&] (int i, int j) { return a[i]<a[j]; });

    vector<long long> ans(n, k/n);
    for(int i=0; i<k%n; i++) ans[order[i]]++;

    for(long long x:ans) cout << x << "\n";

    return 0;
}