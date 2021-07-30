/*
Author: rafa45
Date: 27 Sep 2020
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;

    cin >> t;

    while(t--){
        int n=0, k=0, i=0;
        ll cnt=0;

        cin >> n >> k;

        vector<int> arr(n);

        for(i=0; i<n; i++)  cin >> arr[i];

        int mini = *min_element(arr.begin(), arr.end());
        int indx = min_element(arr.begin(), arr.end())-arr.begin();

        for(i=0; i<n; i++){
            if(i==indx) continue;
            cnt += (k-arr[i])/mini;
        }

        cout << cnt << endl;
    }

    return 0;
}
