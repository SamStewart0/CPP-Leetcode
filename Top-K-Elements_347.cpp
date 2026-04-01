#include <unordered_map>
#include <vector>

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        //get counts of each element 

        std::unordered_map<int,int> counts;

        for (int num : nums){
            counts[num]++;
        }

        //sort our counts into frequency buckets

        std::vector<std::vector<int>> buckets(nums.size()+1);

        //get the num frequency pairs and add them to corresponding bucket

        for (auto const& [num,freq] : counts){
            buckets[freq].push_back(num);
        }

        //vector for results

        std::vector<int> results;

        //iterate from the end of the buckets so we get the largest value

        for (int i = buckets.size() - 1 ; i >= 0; i--){

            //for each num inside vector

            for (int num: buckets[i]){
                
                //add to results

                results.push_back(num);
            
            //when we have top k frequencies return

            if (results.size() == k) return results;
            }
            
        }

        return {};
        
    }
};
