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
  for(int i = 0; i < arr.size(); i++){
    for(int j = 0; j <= i ; j++){
      int sumCurrentSubArray = sumArraySelected(arr, j, arr.size() - i + j);
      if(max < sumCurrentSubArray){
        max = sumCurrentSubArray;
      }
    }
  }
  return max;
}

int dmaxSequence(const vector<int>& arr) {
	int localmax=0;
	int globalmax=0;
	for (int i = 0;i<arr.size();i++)
	{
		localmax = localmax + arr[i];
		if (localmax > globalmax)
			globalmax = localmax;
		if (localmax < 0)
			localmax = 0;
	}
	return globalmax;
}

#include <iostream>

int main() {
    auto result = dmaxSequence({-2, 1, -3, 4, -1, 2, 1, -5, 4});
    std::cout << result << std::endl;
    auto chell = maxSequence({7,4,11,-11,39,36,10,-6,37,-10,-32,44,-26,-34,43,43});
    std::cout << chell << std::endl;
    auto chell2 = sumArraySelected({7,4,11,-11,39,36,10,-6,37,-10,-32,44,-26,-34,43,43}, 0, 16);
    std::cout << chell2 << std::endl;

    return 0;
}