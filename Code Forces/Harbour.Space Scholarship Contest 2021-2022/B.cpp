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
        string s, t, c, ans = "NO";
        cin >> s >> t;
        int l1 = s.length();
        int l2 = t.length();

        for(int i=0; i<l1; i++)
        {
            c = s[i];
            for (int j=i; j<l1; j++)
            {
                if(j!=i) c += s[j];
                string tempC = c;
                
                int l = l2 - c.length();
                int indx = j-1;
                
                while (indx >=0 && l>0)
                {
                    c += s[indx];
                    indx--;
                    l--;
                }
                
                if(c == t)
                {
                    ans = "YES";
                    break;
                }
                
                c = tempC;
            }
            if(ans == "YES") break;
        }

        cout << ans << endl;
    }


    return 0;
}