#include<bits/stdc++.h>
using namespace std;

int conv(char c){
    if(c=='0') return 0;
    else if(c=='1') return 1;
    else if(c=='2') return 2;
    else if(c=='3') return 3;
    else if(c=='4') return 4;
    else if(c=='5') return 5;
    else if(c=='6') return 6;
    else if(c=='7') return 7;
    else if(c=='8') return 8;
    else return 9;
}

int solve(){
    int n=0, i=0;
    string num;

    cin >> n;
    cin >> num;

    //Even position
    if(n%2==0){
        for(i=1; i<n; i+=2){
            if(conv(num[i])%2==0){
                return 2;
            }
        }
        return 1;
    }
    //Odd position
    else{
        for(i=0; i<n; i+=2){
            if(conv(num[i])%2!=0){
                return 1;
            }
        }
        return 2;
    }
}

int main(){
    int T=0;
    cin >> T;

    while(T--)
        cout << solve() << "\n";

    return 0;
}
