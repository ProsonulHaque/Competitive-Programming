#include<bits/stdc++.h>
#define ll long long

using namespace std;


int n = 3;

vector<int> values = {60, 100, 120};
vector<int> weight = {10, 20, 30};

int total_cap = accumulate(weight.begin(), weight.end(), 0);

vector<vector<int>> memo(n+1, vector<int>(total_cap+1, -1));


int KS(int n, int cap){
    if(memo[n][cap] != -1)
        return memo[n][cap];

    int result = 0;

    //This is base case
    if(n==values.size() || cap==0)
        result = 0;
    else if(weight[n]>cap)
        result = KS(n+1, cap);
    else{
        int temp1 = KS(n+1, cap);
        int temp2 = values[n] + KS(n+1, cap-weight[n]);
        result = max(temp1, temp2);
    }

    memo[n][cap] = result;

    return result;
}


int main(){
    //print maximum value
    int cap; cin >> cap;

    cout << "Maximum value: "
         << KS(0, cap);
    
    return 0;
}