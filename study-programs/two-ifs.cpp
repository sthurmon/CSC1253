#include <iostream>
using namespace std;

int main() {
bool rain = 1;
cout << "Is it raining?" << endl;
cin >> rain;
if (rain) {
cout << "It is raining." << endl;
}
if (!rain) {
cout << "It is not raining." << endl;
}
return 0;
}
