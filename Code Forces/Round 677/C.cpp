/*
Author: rafa45
Date: 20 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;
const int MXN=200002;

int main()
{
    int t, i, n;
    cin>>t;

    while(t--){
        cin >> n;
        vector<int> a(n);
        for(auto &x:a) cin >> x;

        int cnt = 1, maxV = a[0], idx = 0;

        for(i=1; i<n; i++){
            if(a[i]==a[0]) cnt++;
            if(a[i]>maxV){
                maxV = a[i];
            }
        }

        if(cnt==n){
            cout << -1 << endl;
            continue;
        }

        for(i=0; i<n; i++){
            if(a[i]==maxV & i==0){
                if(a[i+1]<a[i]){
                    idx = i;
                    break;
                }
            }
            if(a[i]==maxV & i>0){
                if((a[i+1]<a[i]) || (a[i-1]<a[i])){
                    idx = i;
                    break;
                }
            }
        }

        cout << idx+1 << endl;
    }

    return 0;
}
