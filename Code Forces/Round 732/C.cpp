/*
Author: rafa45
Date: 11 Jul 2021
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


int main()
{
    IOS


    int t;
    cin >> t;


    while(t--){
        int n; cin >> n;
        string ans = "Yes";

        vector<int> unsorted(n);
        vector<int> sorted(n);

        for(int i=0; i<n; i++) cin >> unsorted[i];
        
        sorted = unsorted;
        
        sort(sorted.begin(), sorted.end());

        unordered_map<int, int> even_unsorted;
        unordered_map<int, int> odd_unsorted;

        unordered_map<int, int> even_sorted;
        unordered_map<int, int> odd_sorted;

        for(int i=0; i<n; i++){
            if(i%2 == 0){
                even_unsorted[unsorted[i]]++;
                even_sorted[sorted[i]]++;
            }
            else{
                odd_unsorted[unsorted[i]]++;
                odd_sorted[sorted[i]]++;
            }
        }

        for(int i=0; i<n; i++){
            if(even_unsorted[sorted[i]] != even_sorted[sorted[i]] || odd_unsorted[sorted[i]] != odd_sorted[sorted[i]]){
                   ans = "No";
                   break;
               }
        }

        cout << ans << endl;
    }


    return 0;
}