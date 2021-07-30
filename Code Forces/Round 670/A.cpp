/*
Author: rafa45
Date: 29 Sep 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	int t;
    cin >> t;

    while(t--){
        int n, i, x, ans=0;
        set<int> a, b;

        cin >> n;

        for(i=0; i<n; i++){
            cin >> x;
            if(a.count(x)){
                b.insert(x);
            }
            else{
                a.insert(x);
            }
        }

        for(i=0; i<=100; i++){
            if(a.count(i)==0){
                ans += i;
                break;
            }
        }

        for(i=0; i<=100; i++){
            if(b.count(i)==0){
                ans += i;
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}

