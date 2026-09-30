#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
  int arr[10] = {123, 5352, 346, 234, 5};

  for(int i = 0; i < 10; i++){
    std::cout << *(i+arr) << '\n';
  }
  return 0;
}
