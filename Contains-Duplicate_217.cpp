#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        //unordered set for fastest lookup
        
        std::unordered_set<int> seen = {};
        
        //prevents rehashing
        
        seen.reserve(nums.size());


        for(int num: nums){

            //if insert unsuccesful (meaning duplicate) this will trigger 

            if (!seen.insert(num).second){
                return true;
            }
        }
        //otherwise no duplicate
        return false;

    }
};
