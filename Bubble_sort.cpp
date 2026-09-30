#include <iostream>
#define LEN 10
void bubble_sort(int* arr, int len){
  for(int i = 0; i < len; i++){
    for(int j = 0; j < len - i - 1; j++){
      if(*(j+arr) > *(arr+j+1)){
        int t = *(arr+j);
        *(arr+j) = *(arr+j+1);
        *(arr+j+1) = t;
      }
    }
  }
}

int main (int argc, char *argv[]) {
  int arr[LEN] = {5 ,7, 6, 3, 4, 7, 3, 4, 9, 1};

  for(auto i : arr){
    std::cout << i << " ";
  }

  std::cout << std::endl;

  bubble_sort(arr, LEN);

  for(auto i : arr){
    std::cout << i << " ";
  }

  return 0;
}
