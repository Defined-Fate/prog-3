#include "heapfuncs.hpp"
#include <utility>

/*
 heapify go pravi heapot vo najgolemiot heap sto moze
*/

void heapify(std::vector<int>& vec, int n, int i){
  int largest = i;

  int left = 2*i+1;
  int right = 2*i+2;

  if(left < n && vec[left] > vec[largest]){
    largest = left;
  }

  if(right < n && vec[right] > vec[largest]){
    largest = right;
  }

  if(largest != i){
    std::swap(vec[i], vec[largest]);

    heapify(vec, n, largest);
  }
}
