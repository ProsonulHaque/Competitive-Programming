/*
    ***************************
    *    Author: rafa45       *
    *    Date: 26 Sep 2021    *
    ***************************
*/


#include<bits/stdc++.h>
using namespace std;


const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;
const int N=5000;


#define endl              '\n'
#define PRIME             M
#define mod               M
#define ll                long long
#define all(v)            (v).begin(),(v).end()
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main()
{
    IOS


    int n, m;
    
    cin >> n;
    vector<int> a(n);
    
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    
    cin >> m;
    vector<int> b(m);

    for(int i=0; i<m; i++){
        cin >> b[i];
    }

    int mx = 0, mx_cnt = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(b[j]%a[i] == 0){
                int x = b[j]/a[i];
                if(x > mx){
                    mx = x;
                    mx_cnt = 1;
                }
                else if(x == mx){
                    mx_cnt++;
                }
            }
        }
    }

    cout << mx_cnt;

    return 0;
}