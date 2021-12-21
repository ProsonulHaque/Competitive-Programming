/*
    ***************************
    *    Author: rafa45       *
    *    Date: 16 Dec 2021    *
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


    int tc;
    cin >> tc;


    while(tc--){
        string s, t;
        cin >> s >> t;

        sort(all(s));

        int count_a = 0, count_b = 0, count_c = 0;

        for(char ch:s){
            if(ch == 'a')
                count_a++;
            else if(ch == 'b')
                count_b++;
            else if(ch == 'c')
                count_c++;
        }

        if(t != "abc" || (count_a < 1 || count_b < 1 || count_c < 1)){
            cout << s << endl;
            continue;
        }

        int indx_c = 0, indx_b = 0;

        while(s[indx_c] != 'c') indx_c++;
        while(s[indx_b] != 'b') indx_b++;

        string ans = "";
        bool ok = true;

        for(int i=0; i<s.size(); i++){
            if(s[i] == 'c') continue;
            if(s[i] == 'b' && ok){
                for(int j=0; j<count_c; j++) ans += 'c';
                ok = false;
            }
            ans += s[i];
        }

        cout << ans << endl;
    }


    return 0;
}