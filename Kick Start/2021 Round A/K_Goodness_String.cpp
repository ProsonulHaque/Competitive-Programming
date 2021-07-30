#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    
    for(int g=1; g<=t; g++){
        int n; cin >> n;
        int k; cin >> k;
        string s; cin >> s;
        int c = 0;
        
        for(int i=0; i<n/2; i++){
            if(s[i] != s[n-i-1]) c++;    
        }
        
        cout << "Case #" << g << ": " << abs(k-c) << endl;
    }
    
    return 0;
}