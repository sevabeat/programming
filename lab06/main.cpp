#include <iostream>
#include <vector>
#include "algo.h"

int main() {
    std::vector<int> nums = {10, 2};
    std::cout << noneOf(nums.begin(), nums.end(), [](int num){
        return num < 5;
    }) << std::endl;

    std::vector<int> sorted_nums = {2, 4, 5, 9, 7};
    std::cout << isSorted(sorted_nums.begin(), sorted_nums.end(), [](int a, int b){
        return b > a;
    }) << std::endl;;
    std::vector<int> nums_for_find = {2, 4, 5, 9, 18};
    auto it = findBackward(nums_for_find.begin(), nums_for_find.end(), 18);

    if(it != nums_for_find.end()){
        std::cout << *it << std::endl;
    }else{
        std::cout << "false" << std::endl;
    }

    return 0;
}