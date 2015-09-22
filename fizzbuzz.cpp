#include <bits/stdc++.h>
using namespace std;

int main() {
	for (int i = 0; i < 101; i++) {
		if (i % 15 == 0) {
			cout << "Fizz Buzz";
		}else if (i % 5 == 0) {
			cout << "Buzz";
		}else if (i % 3 == 0) {
			cout << "Fizz";
		}else cout << i;
	}
	cout << endl;
	return 0;
}

