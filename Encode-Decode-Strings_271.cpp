#include <vector>
#include <string>

class Solution {
public:

    string encode(vector<string>& strs) {

        //create our encoded string

        std::string encoded_string = "";
        
        //iterate through the vector of strings and encode

        for (std::string word:strs){

            //get length of string as a string so we can append to encoded string

            std::string length = std::to_string(word.length());

            std::string current_encoded = length + "#" + word;

            //append our current encoded word to the full encoded string

            encoded_string += current_encoded;

        }

        return encoded_string;

    }

    vector<string> decode(string s) {

        //create a vector for our decoded output 

        std::vector<std::string> decoded_vector;

        int i = 0;

        //while we arent at the end of the string
        
        while (i < s.size()){

            //find the position of the delimiter

            size_t found = s.find('#',i);

            //get the char before the delimiter to get our string length

            int len = stoi(s.substr(i, found-i));

            //set i pointer to actual beggining of string

            i = found + 1;

            //add our decoded word to the vector

            decoded_vector.push_back(s.substr(i, len));

            //set i at end of string

            i += len;
        
        }

        return decoded_vector;
        

    }
};
