#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0, i=0;

    cin >> n;

    vector<int> num;

    for(i=2; i<=n; i+=2){
        num.push_back(i);
    }

    for(i=1; i<=n; i+=2){
        num.push_back(i);
    }

    for(i=0; i<n-1; i++){
        if(abs(num[i+1]-num[i])==1){
            cout << "NO SOLUTION" << "\n";
            return 0;
        }
    }

    for(i=0; i<n; i++){
        cout << num[i] << " ";
    }

    return 0;
}
