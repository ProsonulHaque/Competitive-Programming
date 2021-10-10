/*
    ***************************
    *    Author: rafa45       *
    *    Date: 04 Aug 2021    *
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
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int f(int indx, int n, vector<int> &a, vector<int> &memo, vector<int> &next){
    if(memo[indx] != -1) return memo[indx];
    if(indx == n-1) return 1;

    for(int i=indx+1; i<n; i++){
        if(a[i]>a[indx]){
            int t = f(i, n, a, memo, next)+1;
            if(t > memo[indx]){
                memo[indx] = t;
                next[indx] = i; 
            }
        }
            // memo[indx] = max(memo[indx], f(i, n, a, memo)+1);
    }

    return memo[indx];
}

int main()
{
    IOS

    int n = 5;
    vector<int> memo(n, -1), a(n), next(n-1);
    a = {1, 2, 3, 4, 5};

    int ans = 0, first_index = 0;

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i; j++){
    //         if(a[j]<a[i]){
    //             memo[i] = max(memo[i], memo[j]+1);
    //         }
    //     }
    //     ans = max(ans, memo[i]);
    // }

    for(int i=0; i<n; i++){
        int t = f(i, n, a, memo, next);
        if(t>ans){
            ans = t;
            first_index = i;
        }
        // ans = max(ans, f(i, n, a, memo, next));
    }

    cout << "ans: ";
    cout << ans << endl;

    while(ans--){
        cout << a[first_index] << " ";
        first_index = next[first_index];
    }


    return 0;
}