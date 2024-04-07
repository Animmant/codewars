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
  for(int i = 0; i <= arr.size(); i++){
    for(int j = 0; j < i ; j++){
      int sumCurrentSubArray = sumArraySelected(arr, j, i);
      if(max < sumCurrentSubArray){
        max = sumCurrentSubArray;
      }
    }
  }
  return max;
}