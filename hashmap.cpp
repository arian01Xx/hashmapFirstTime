#include "solution.hpp"

int main(){
    Solution solution;
    std::string numbers="23";
    std::vector<std::string> output=solution.letterCombinations(numbers);
    for(int i=0; i<output.size(); i++){
        std::cout<<output[i]<<std::endl;
    }
    return 0;
}