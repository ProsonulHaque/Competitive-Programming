#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void lengthOfLongestSubstring(string s) {
        unordered_map<char, int> m;
        int lastIndex = 0;
        int best = 0;

        for(int i=0; i<s.size(); i++){
            char ch = s[i];
            if(m.count(ch) <= 0){
                m[ch] = i;
                cout << "m[" << ch << "] = " << i << endl;
            }
            else{
                cout << "Last Index: " << lastIndex << ", m[ch] = " << m[ch] << endl;
                if(lastIndex > m[ch]){
                    best = max(best, i-lastIndex+1);
                }
                else{
                    best = max(best, i-lastIndex);
                }
                lastIndex = max(lastIndex, m[ch]+1);
                m[ch]= i;

                cout << "best: " << best << endl;
            }
        }

        cout << "\n\n\n";
        
        if(m.size() == s.size()) best = s.size();
        cout << "ans: " << best << endl;
    }
};

int main(){
    Solution *obj = new Solution();
    string s = "fnlmabcdebadghijkld";
    // string s = "abcabcbb";
    obj -> lengthOfLongestSubstring(s);
    return 0;
}

