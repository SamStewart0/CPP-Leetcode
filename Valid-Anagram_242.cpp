#include <map>
#include <string>

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        //if different length anagram impossible

        if (s.length() != t.length()) return false;

        //create vector of buckets for each letter of alpha

        std::vector <int> counts(26,0);
        

        for (char c:s){
            //subtracts ASCII code, so we add the count to corresponding bucket
            //d = index 3++
            counts[c - 'a']++;
        }
        
        //iterate through t and:
        for (char c:t){

            //decrement count
            counts[c - 'a']--;
        
            
            //if any buckets go below zero anagram not valid
            if(counts[c - 'a'] < 0){
                return false;
            }
            
        }

        return true;
    }
