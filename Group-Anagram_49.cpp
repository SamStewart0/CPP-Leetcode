#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        //use unordered map to store key value pairs

        std::unordered_map<std::string, std::vector<string>> groups;

        std::vector<std::vector<string>> output;

        //take each word and sort it alphabetically

        for (std::string word : strs){

            std::string sortedWord = word;

            std::sort(sortedWord.begin(), sortedWord.end());

            //add the key value pair of sortedWord : anagram, creates vector if one does not already exist

            groups[sortedWord].push_back(word);

        }

        //get the group anagrams list we created and add it to our output vector for result

        for (auto& [key, anagramList] : groups){

            output.push_back(anagramList);

        }

        return output;
        
    }
};
