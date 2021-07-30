#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n=0, i=0, x=0, y=0;
    int val=0;

    cin >> n;

    vector<int> p;
    vector<int> m;

    for (i = 0; i < n; i++){
        cin >> x >> y;
        p.push_back(x+y);
        m.push_back(x-y);
    }

    int max1 = *max_element(p.begin(), p.end());
    int min1 = *min_element(p.begin(), p.end());
    int val1 = max1-min1;

    int max2 = *max_element(m.begin(), m.end());
    int min2 = *min_element(m.begin(), m.end());
    int val2 = max2-min2;

    val = max(val1, val2);

    cout << val << "\n";
}

int main(){

    solve();

    return 0;
}

