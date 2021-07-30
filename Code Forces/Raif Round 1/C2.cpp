/*
Author: rafa45
Date: 17 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;

//Bonus: what is the length of the longest string that
//Zookeeper can make such that there are no moves left?

int main()
{
    int t, i;
    string a;
    cin >> t;

    while(t--){
        cin >> a;
        stack<char> s;
        int cnt = 0;

        for(i=0; i<a.size(); i++){
            if(a[i]=='A') s.push('A');
            else{
                if(s.empty() || s.top()=='A') s.push('B');
                else s.pop();
            }
        }

        while(!s.empty()){
            if(s.top()=='B'){
                s.pop();
                if(!s.empty()) s.pop();
                else cnt++;
            }
            else{
                cnt++;
                s.pop();
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
