/*
Author: rafa45
Date: 23 Jul 2021
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


    int tc;
    cin >> tc;


    while(tc--)
    {
        string s, t, ans = "NO";
        cin >> s >> t;
        
        for(int l=0; l<s.length(); l++)
        {
            for(int r=l; r<s.length(); r++)
            {
                int end = r-(t.length()-(r-l+1));
                if(end < 0) continue;
                
                string rs = s.substr(l, r-l+1);
                string ls = s.substr(end, r-end);
                reverse(ls.begin(), ls.end());

                if(rs + ls == t)
                {
                    ans = "YES";
                    break;
                }
            }
            if(ans == "YES") break;
        }

        cout << ans << endl;
    }


    return 0;
}