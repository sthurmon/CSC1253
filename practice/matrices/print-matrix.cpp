#include <iostream>
using namespace std;

#define N 3

void print(int A[N][N]) {
  for(int i=0; i<N; i++) {
     for(int j=0; j<N; j++) 
        cout << A[i][j] << "\t";
     cout << endl;
  }
}

int main(){
  int a[N][N]={{1,2,3},
               {4,5,6},
               {7,8,9}};
  print(a);
  char c = '0';
  int  d = 0;
}
