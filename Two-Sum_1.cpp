#include <unordered_map>
#include <vector>
#include <ranges>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> seen;

        for (auto [i, num] : nums | std::views::enumerate) {
            //find needed number to reach target
            
            int needed = target - num;

            
            //if needed is in seen this will evaluate to true as seen.find return seen.end if value not found
           
            if (seen.find(needed) != seen.end()) {

                //return the indexs
                
                return {(int)i, seen[needed]};
            }
            
            //otherwise we add the value to the unordered map

            seen[num] = (int)i;
        }
        
        //return empty vector if as a fail safe as we told the compiler no matter what we will return vector
        return {}; 
    }
}; 
