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

        int d = 0, cnt = 0;

        for(i=0; i<n; i++){
            if(a[i]==1){
                if(cnt>0){
                    d += cnt-1;
                    cnt = 1;
                }
                else cnt = 1;
            }
            else{
                if(cnt>0) cnt++;
            }
        }

        cout << d << endl;
    }

    return 0;
}
