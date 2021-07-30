#include<bits/stdc++.h>
using namespace std;

void solve(int a, int b){
    int i=0, j=0, p=0;
    bool prime[b+1];

    memset(prime, true, sizeof(prime));

    prime[0]=false;
    prime[1]=false;

    for(i=2; i*i<=b; i++){
        if(prime[i]==true){
            for(j=i*i; j<=b; j+=i){
                prime[j] = false;
            }
        }
    }

    vector<int> num;

    for(i=a; i<=b; i++){
        if(prime[i]){
            num.push_back(i);
        }
    }

/*  cout << "prime numbers: " << endl;
    for(i=0; i<num.size(); i++){
        cout << num[i] << " ";
    }
    cout << endl;
*/
    int low = (a*b)/4;
    int up = a*b;

    vector<pair<int, int>> ans;

    for(i=0; i<num.size()-1; i++){
        j=i+1;
        while(j<num.size()){
            if((num[i]*num[j])>up){
                break;
            }
            if((num[i]*num[j])>=low && (num[i]*num[j])<=up){
                ans.push_back(make_pair(num[i], num[j]));
            }
            j += 1;
        }
    }

    for(i=0; i<ans.size(); i++){
        cout << ans[i].first << "," << ans[i].second << "\n";
    }
}

int main(){
    int a=0, b=0;

    cin >> a >> b;

    solve(a, b);

    return 0;
}
