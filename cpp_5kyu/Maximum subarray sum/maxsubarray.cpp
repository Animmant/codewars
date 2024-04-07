#include <vector>

int sumArraySelected(const std::vector<int>& arr, int start, int end){
  int sum = 0;
  for(int i = start; i < end; i++){
    sum += arr[i];
  }
  return sum;
}

int maxSequence(const std::vector<int>& arr){
  int max =0;
  for(int i = 1; i <= arr.size(); i++){
    for(int j = 0; j < i ; j++){
      int sumCurrentSubArray = sumArraySelected(arr, j, arr.size() -i + j);
      if(max < sumCurrentSubArray){
        max = sumCurrentSubArray;
      }
    }
  }
  return max;
}

#include <iostream>

int main() {
    auto result = maxSequence({-2, 1, -3, 4, -1, 2, 1, -5, 4});
    std::cout << result << std::endl;


    return 0;
}