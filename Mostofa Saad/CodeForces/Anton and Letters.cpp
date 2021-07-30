/*
Author: rafa45
Date: 28 Sep 2020
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int i=0; char c;
    set<char> letter;

    while(c!='}'){
        cin >> c;
        if(c!=',' && c!='{' && c!='}'){
            letter.insert(c);
        }
    }

    cout << letter.size() << endl;

    return 0;
}
