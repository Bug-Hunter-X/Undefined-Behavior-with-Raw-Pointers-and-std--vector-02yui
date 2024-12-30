#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec = {1, 2, 3};
  // Correct approach using iterators:
  for (auto it = vec.begin(); it != vec.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;

  vec.push_back(4);
  // Iterate again safely
  for (int val : vec) {
    std::cout << val << " ";
  }
  std::cout << std::endl;

  // Correct approach using data() (valid until size/capacity changes)
  int* dataPtr = vec.data();
  for (size_t i = 0; i < vec.size(); ++i) {
     std::cout << dataPtr[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}