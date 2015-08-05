#include <iostream>
using namespace std;

int main() {
  float net_income;
  cin >> net_income;
       if (net_income < 25000) net_income -= (net_income*.04);
  else if (net_income < 50000) net_income -= (net_income*.05);
  else if (net_income <100000) net_income -= (net_income*.06);
  else if (net_income <200000) net_income -= (net_income*.07);
  else                         net_income -= (net_income*.08);
  cout << net_income;
}
