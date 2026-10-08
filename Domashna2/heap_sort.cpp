#include "heapfuncs.hpp"
#include <utility>
#include <iostream>

void heap_sort(std::vector<int>& vec){
  int n = vec.size();
  static int num = 0;
  //pravime max-heap

  for(int i = n/2 - 1; i >= 0; i--)
    heapify(vec, n, i);

  //sortiraj i max-heap pak

  for(int i = n - 1; i > 0; i--){
    std::swap(vec[0],vec[i]);
    num++;
    heapify(vec, i, 0);
  }

  std::cout << "Irteracii: " << num << '\n';
}
