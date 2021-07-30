/*
Author: rafa45
Date: 24 Sep 2020
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define m 1000000007

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;

    cin >> s;

    //sort(s.begin(), s.end());

    int i=0, j=0, cnt=1, odd=0;
    int len=0;
    char ch;

    vector<string> v;
    string str="";
    str+=s[0];

    for(i=1; i<s.size(); i++){
        if(s[i]==s[i-1]){
            cnt++;
            str += s[i];
        }
        else{
            v.push_back(str);
            if(cnt%2){
                odd++;
            }
            cnt = 1;
            str="";
            str += s[i];
        }
    }

    v.push_back(str);
    if(cnt%2){
        odd++;
    }

    if(odd>1){
        cout << "NO SOLUTION" << endl;
    }
    else{
        for(i=0; i<v.size(); i++){
            if(v[i].size()%2==0){
                for(j=1; j<=v[i].size()/2; j++){
                    cout << v[i][0];
                }
            }
            else{
                len = v[i].size();
                ch = v[i][0];
            }
        }

        for(i=1; i<=len; i++){
            cout << ch;
        }

        for(i=v.size()-1; i>=0; i--){
            if(v[i].size()%2==0){
                for(j=1; j<=v[i].size()/2; j++){
                    cout << v[i][0];
                }
            }
        }
    }

    cout << endl;

    return 0;
}

