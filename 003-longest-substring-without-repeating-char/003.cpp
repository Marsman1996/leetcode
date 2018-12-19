#include <iostream>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string temp;
        int i;
        int max = 0;

        for(i = 0; i + temp.size() < s.size(); i++){
            while(temp.find(s[i + temp.size()]) == -1 && i + temp.size() < s.size()){
                temp.push_back(s[i + temp.size()]);
                max = (max > temp.size()) ? max : temp.size();
            }
            temp = temp.substr(1, temp.size() - 1);
        }

        return max;
    }
};

//Sliding Window Optimized

int main(void){
    string input = "abcabcbb";
    Solution sol;
    cout << sol.lengthOfLongestSubstring(input);
    return 0;
}