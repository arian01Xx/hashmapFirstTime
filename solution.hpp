#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

class Solution {
public:
    std::vector<std::string> letterCombinations(std::string digits) {
        std::vector<std::string> res;
        if(digits.empty()){
            return res;
        }
        std::unordered_map<char, std::string> digitToLetters={
            {'2', "abc"},{'3',"def"},{'4',"ghi"},
            {'5',"jkl"},{'6',"mno"},{'7',"pqrs"},
            {'8',"tuv"},{'9',"wxyz"}
        };
        backTrack(digits, 0, "", res, digitToLetters);
        return res;
    }

    void backTrack(const std::string& digits, int idx, std::string comb, 
                   std::vector<std::string>& res, const std::unordered_map<char, std::string>& digitToLetters){
        if(idx==digits.length()){
            res.push_back(comb);
            return;
        }
        std::string letters=digitToLetters.at(digits[idx]);
        for(char letter: letters){
            backTrack(digits, idx+1, comb+letter, res, digitToLetters);
        }
    }
/*
Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
*/
};

#endif // SOLUTION_HPP