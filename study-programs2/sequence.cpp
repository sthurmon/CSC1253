#include <iostream>
using namespace std;

int main() {
	int i, sum, start, stop, step;
	cout << "> ";
	cin >> start >> stop >> step;
	cout << "< ";	
	for(i=start; i<=stop-3; i+=step) {
		cout << i << " "; 
		sum += i;
	}
	cout << endl << "< " << sum << endl;
}
