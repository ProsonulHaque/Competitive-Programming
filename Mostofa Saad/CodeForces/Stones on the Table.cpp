#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main(){
    int n=0, cnt=0;
    int left=0, right=1;
    string s;

    cin >> n;
    cin >> s;

    if(n==1){
        cout << 0 << endl;
        return 0;
    }

    while(right<n){
        if(s[left]==s[right]){
            cnt++;
            right++;
        }
        else{
            left=right;
            right++;
        }
    }

    cout << cnt << endl;
    return 0;
}
