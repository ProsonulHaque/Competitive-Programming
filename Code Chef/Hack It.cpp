#include<bits/stdc++.h>
using namespace std;

void solve(){
    int i=0, power = 0;
    long long n=0, pass=0;

    cin >> n;

    vector<long long> digit;
    vector<long long> number;

    while(n>0){
        digit.push_back(n%10);
        n = n/10;
    }
    for(i=digit.size()-1; i>0; i--){
        if(i==1){
            number.push_back(digit[i]-2);
            number.push_back(digit[i-1]-2);
        }
        else{
            number.push_back(digit[i]-2);
        }
    }

    for(i=0; i<number.size(); i++){
        cout << number[i];
        //power = number.size()-(i+1);
        //pass += number[i]*pow(10,power);
    }

    cout << "\n";
    //cout << pass << "\n";
}

int main(){
    int t=0;
    cin >> t;

    while(t--)
        solve();

    return 0;
}


