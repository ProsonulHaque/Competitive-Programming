/*
Author: rafa45
Date: 17 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;

int main()
{
    int t, i;
    string a, b;
    cin >> t;

    while(t--){
        cin >> a;
        stack<char> s;

        for(i=0; i<a.size(); i++){
            if(a[i]=='A') s.push('A');
            else{
                if(s.empty()) s.push('B');
                else s.pop();
            }
        }

        cout << s.size() << endl;
    }

    return 0;
}
