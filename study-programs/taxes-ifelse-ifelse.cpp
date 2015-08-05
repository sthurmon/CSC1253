#include <iostream>
using namespace std;

int main() {
float income, factor;
cout << "Enter your annual income:	" << endl;
cin >> income;
if (income <= 9075) {
factor = .1;
}	else if (income <= 36900) {
factor = .15;
}	else {
factor = .25;
}
cout << "Your tax is at least " << income*factor << endl;
cout << "Have a nice day!" << endl;
return 0;
}
