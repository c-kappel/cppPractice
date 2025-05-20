#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> topKFrequent(std::vector<int>& nums, int k){
        std::unordered_map<int, int> map;
        for(int uniqueNum: nums){
            map[uniqueNum] += 1;
        }

        std::vector<int> out;
        while(k > 0){
            int largest = 0;
            int largestNum = 0;
            for(int num : nums){
                if(map[num] > largest){
                    largest = map[num];
                    largestNum = num;
                }
            }
            out.push_back(largestNum);
            map[largestNum] = -1;
            k--;
        }
        return out;
    }

int main(){

}