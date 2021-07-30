#include<bits/stdc++.h>
using namespace std;

string solve(int n){
    int l = to_string(n).length();
    int i=l, d=0;

    while(n>0){
        d = l-i+1;
        if(n%d!=0){
            return "No";
        }
        n = n/10;
        i--;
    }

    return "Yes";
}

int main(){
    int n=0;

    cin >> n;

    cout << solve(n) << "\n";

    return 0;
}


