#include <algorithm>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

// BEGIN NO SAD
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define f first
#define s second
typedef vector<int> vi;
typedef long long ll;
typedef pair<int, int> pii;
// END NO SAD
// REMEMBER CLEAR GLOBAL STATE
// REMEMBER READ THE PROBLEM STATEMENT AND DON'T SOLVE A DIFFERENT PROBLEM
// remember hidden T factor of 1e2
// read the bounds for stupid cases
// did you restart your editor

int rating[505][505]; // rating[i][j] is pos of j in pref[i]
int currentrating[505];

class Solution {
public:
    int unhappyFriends(int n, vector<vector<int>>& preferences, vector<vector<int>>& pairs) {
        for(int i = 0; i < n; i++) {
          for(int j = 0; j < sz(preferences[i]); j++) {
            rating[i][preferences[i][j]] = j;
          }
        }
        int ret = 0;
        for(auto out: pairs) {
            currentrating[out[0]] = rating[out[0]][out[1]];
            currentrating[out[1]] = rating[out[1]][out[0]];
        }
        for(auto out: pairs) {
            for(int i = 0; i < n; i++) {
                if(i == out[0]) continue;
                if(rating[out[0]][i] < currentrating[out[0]] && rating[i][out[0]] < currentrating[i]) {
                  ret++;
                  break;
                }
            }
            for(int i = 0; i < n; i++) {
                if(i == out[1]) continue;
                if(rating[out[1]][i] < currentrating[out[1]] && rating[i][out[1]] < currentrating[i]) {
                  ret++;
                  break;
                }
            }

        }
        return ret;
    }
};
