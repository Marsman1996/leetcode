#include <iostream>
#include <vector>
#include <hash_map>
#include <map>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i;
        unordered_map<int, int> myhash;
        for(i = 0; i < nums.size(); i++){
            int othernum = target - nums[i];
            // j = myhash[othernum];
            if(myhash.find(othernum) != myhash.end()){
                return vector<int>{i, myhash[othernum]};
            }
            myhash.insert(pair <int, int>{nums[i], i});
        }
        return vector<int>{0, 0};
    }
};

// brute force
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i, j;
        for(i = 0; i < nums.size(); i++){
            for(j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    return vector<int>{i, j};
                }
            }
        }
        return vector<int>{0, 0};
    }
};

int main() {
    vector<int> nums{ -3, 4, 3, 90 };
    vector<int> res;
    Solution sol;
    res = sol.twoSum(nums, 0);
    cout << res[0] << "and" << res[1] << endl;
}