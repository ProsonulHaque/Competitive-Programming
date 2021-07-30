/*
Author: rafa45
Date: 12 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;
const int MXN=600;

int main()
{
    int t, n, k, i;
    string s;
    cin >> t;

    while(t--){
        cin >> n >> k >> s;
        vector<int> gap;
        int total_W=0, streak=0, W_cnt=0;
        int L_cnt=0, gap_fill=0, flag=1;

        for(i=0; i<n; i++){
            if(s[i]=='W'){
                total_W++;
                if(W_cnt==0){
                    streak++;
                    W_cnt++;
                }
                if(L_cnt>0){
                    if(flag==0) flag=1;
                    else gap.push_back(L_cnt);
                    L_cnt=0;
                }
            }
            else{
                W_cnt = 0;
                L_cnt++;
                if(i==0) flag=0;
            }
        }

        if(k+total_W>=n){
            cout << 2*n-1 << endl;
            continue;
        }

        if(total_W==0 && k>0){
            cout << 2*k-1 << endl;
            continue;
        }

        sort(gap.begin(), gap.end());

        int temp_k = k;
        for(i=0; i<gap.size(); i++){
            if(gap[i]<=temp_k){
                gap_fill++;
                temp_k -= gap[i];
            }
        }

        cout << 2*(k+total_W)-streak+gap_fill << endl;
    }

    return 0;
}
