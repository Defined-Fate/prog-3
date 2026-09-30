#include <iostream>

void swap_p(int* x, int* y);
void swap_r(int &x, int &y);

int main (int argc, char *argv[]) {
  int n = 100, m = 999;
  std::cout << n << " " << m;
  
  std::cout << '\n';
  swap_p(&n, &m);
  
  std::cout << n << " " << m;

  int a = 83, b = 91;

  std::cout << a << " " << b;

  std::cout << '\n';
  swap_r(a, b);

  std::cout << a << " " << b;
  return 0;
}

void swap_p(int* x, int* y){
  int t = *x;
  *x = *y;
  *y = t;
}

void swap_r(int &x, int &y){
  int t = x;
  x = y;
  y = t;
}
