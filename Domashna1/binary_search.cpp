#include <algorithm>
#include <iostream>
#include <ostream>
#define LEN 10

int binarySearch(int n, int* arr, int start, int end);

int binarySearchR(int n, int* arr, int start, int end);

int main (int argc, char *argv[]) {
  int arr[LEN] = {124, 25, 634, 623, 1234, 6, 3, 20, 9, 100};
  for( auto i : arr){
    std::cout << i << " ";
  }
  std::cout << std::endl;
  std::sort(arr, arr + LEN);
  for( auto i : arr){
    std::cout << i << " ";
  }

  std::cout << std::endl;
  int answer = binarySearch(3, arr, 0, LEN-1);
  
  std::cout << answer << '\n';

  answer = binarySearchR(632, arr, 0, LEN-1);

  std::cout << answer << '\n';

  return 0;
}

int binarySearch(int n, int* arr, int start, int end){
  int mid;
  while(start <= end){
    mid = (start + end) / 2;

    if(*(mid+arr) == n){
      return mid;
    }
    if(*(mid+arr) > n){
      end = mid - 1;
    }

    if(*(mid+arr) < n){
      start = mid + 1;
    }
  }
  return -1;
}

int binarySearchR(int n, int* arr, int start, int end){
  int r = -1;
  if(start > end) return r;
  else{
    int mid = (start + end) / 2;

    if(*(mid+arr) == n){
      return mid;
    }

    if(*(mid+arr) > n){
      r = binarySearchR(n, arr, start, mid - 1);
    }

    if(*(mid+arr) < n){
      r = binarySearchR(n,arr, mid + 1, end);
    }

    return r;
  }
}
