/*
Author: rafa45
Date: 4 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;

int conv(char c){
    if(c=='1') return 1;
    else if(c=='2') return  2;
    else return 3;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int i=0, n=0, x=0;
    string s;
    vector<int>v;

    cin >> s;

    for(i=0; i<s.size(); i++){
        if(s[i]!='+') v.push_back(conv(s[i]));
    }

    sort(v.begin(), v.end());

    for(i=0; i<v.size(); i++){
        if(i!=v.size()-1)
            printf("%d+", v[i]);
        else
            printf("%d", v[i]);
    }

    return 0;
}
