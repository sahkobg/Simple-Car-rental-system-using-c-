#include <iostream>
using namespace std;

int main() {

	int taxi;
	int uber;
	int carbrand{};
	double k;

	cout << "What brand do you whant to call to pick you up!\n taxi - 1\n uber - 2\nType the number" << endl;
	cin >> carbrand;
	if (carbrand>1) {
		cout << "Thanks for picking uber!";
	}
	else {
		cout << "Thanks for picking taxi!";
	}
	cout << " Please enter the place 1 - 200 kilomiters" << endl;
	cin >> k;
	if (k<201) {
		cout << "Thanks for the information. We are on our way!";
	}
	else {
		cout << "We can't reach this place sorry!";
	}
	return 0;
}