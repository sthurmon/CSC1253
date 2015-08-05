#include <iostream>
using namespace std;

int binary_search(int a[], int k, int n) {
  int left = 0, right = n-1, mid;
  while (left <= right) {
    mid = (right - left)/2;
    if (a[mid] == k)
      return mid;
    else if (a[mid] > k)
      right = mid-1;
    else
      left = mid+1;
  }
  return -1;
}

int main() {
  int n = 5;
  int a[n] = {1, 2, 3, 4, 5};
  binary_search(a, 2, n);
}
