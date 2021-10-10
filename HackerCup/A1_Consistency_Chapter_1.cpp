/*
    ***************************
    *    Author: rafa45       *
    *    Date: 27 Aug 2021    *
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

    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    
    int tc; cin >> tc;

    for(int tcn=1; tcn<=tc; tcn++){
        string str; cin >> str;
        
        int n = str.length(), ans = 1e9;
        int vow = 0, con = 0;

        set<char> vowels = {'A', 'E', 'I', 'O', 'U'};

        for(int i=0; i<n; i++){
            int cnt = 0;
            bool parentIsVowel = (vowels.count(str[i])>0);

            if(parentIsVowel) vow++; else con++;

            for(int j=0; j<n; j++){
                if(str[i] == str[j]) continue;
                bool childIsVowel = (vowels.count(str[j])>0);
                if(parentIsVowel==childIsVowel) cnt += 2;
                else cnt += 1;
            }

            ans = min(ans, cnt);
        }

        if(vow == n || con == n) ans = min(ans, n);

        printf("Case #%d: %d\n", tcn, ans); 
    }


    return 0;
}