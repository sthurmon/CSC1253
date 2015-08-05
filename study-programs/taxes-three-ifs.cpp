#include <iostream>
using namespace std;

int main() {
float income, factor;
cout << "Enter your annual income:	" << endl;
cin >> income;
if (income < 9705) {
factor = .1;
}
if ((income >= 9705) && (income <=36900)) {
factor = .15;
}
if (income > 36900) {
factor = .25;
}
cout << "Your tax is at least: " << income*factor << endl;
cout << "Have a nice day!" << endl;
return 0;
}
