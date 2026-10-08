#include "heapfuncs.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

int main (int argc, char *argv[]) {
  srand(time(0));
  
  int n;
  std::cin >> n;
  std::vector<int> vec;
  for(int i = 0; i < n; i++){
    int randnum = (rand() % n) + 1;

    vec.push_back(randnum);
  }

  // for(auto i : vec){
  //   std::cout << i << " ";
  // }

  std::cout << '\n';
  clock_t start = clock();
  heap_sort(vec);
  clock_t end = clock();
  
  double elapsed = double(end - start) / CLOCKS_PER_SEC;
  std::cout << "Sortiranjeto zavrsi za: " << elapsed << " sekundi.\n";

  // for(auto i : vec){
  //   std::cout << i << " ";
  // }
  return 0;
}
