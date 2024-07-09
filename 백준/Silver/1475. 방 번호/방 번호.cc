#include <iostream>
using namespace std;

int main() {
	int numArr[10] = { 0 };
	int N;
	cin >> N;

	while (N != 0) {
		int n;
		n = N % 10;
		N = N / 10;
		if (n == 9)
			numArr[6]++;
		else
			numArr[n]++;
	}
	int setNum = 0;

	for (int i = 0; i < 10; i++) {
		if (i == 6 || i == 9) {
			numArr[i] = (numArr[i] + 1) / 2;
		}
		setNum = max(setNum, numArr[i]);
	}
	cout << setNum;
	return 0;
}