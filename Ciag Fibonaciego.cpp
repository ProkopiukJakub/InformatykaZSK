#include <iostream>
using namespace std;


int main()
{
	int n = 0;
	int f0 = 0;
	int f1 = 1;
	int f = 0;

	cout << "Ile wyrazow ciagu wypisac: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		if (i > 1) {
			f = f1 + f0;
			f0 = f1;
			f1 = f;
		}
		else {
			f = i;
		}
		cout << f << endl;
	}










}