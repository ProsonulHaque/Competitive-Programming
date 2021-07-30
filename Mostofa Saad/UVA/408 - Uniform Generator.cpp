/*
Author: rafa45
Date: 8 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
const int MXN=600;

int main()
{
    int i=0, j=0;
    int step, mod;

    while(cin >> step){
        cin >> mod;
        int a[mod];
        memset(a, 0, sizeof(a));
        int seed = 0, flag = 1;

        for(i=0; i<mod; i++){
            seed += step;
            seed %= mod;
            if(a[seed] == 1){
                flag = 0;
                break;
            }
            a[seed] = 1;
        }

/*      string ans;
        for(i=1; i<=(10-floor(log10(step)+1)); i++) ans += " ";
        ans += to_string(step);
        for(i=1; i<=(10-floor(log10(mod)+1)); i++) ans += " ";
        ans += to_string(mod);
        for(i=1; i<=4; i++) ans += " ";
        flag? ans += "Good Choice" : ans += "Bad Choice";

        cout << ans << endl;
        cout << endl;
*/
        cout << setw(10) << step << setw(10) << mod << "    ";
        flag? cout << "Good Choice\n\n" : cout << "Bad Choice\n\n";
    }

    return 0;
}
