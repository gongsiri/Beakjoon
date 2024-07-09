#include <iostream>
using namespace std;

int main() {
	int N, K, S, Y;
	int male[7] = { 0 };
	int female[7] = { 0 };
	int room=0;

	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		cin >> S >> Y;
		if (S == 0)
			female[Y]++;
		else
			male[Y]++;
	}

	for (int i = 1; i <= 6; i++) {
		if (male[i] % K == 0)
			room += male[i] / K;
		else
			room += male[i] / K + 1;
	}
	for (int i = 1; i <= 6; i++) {
		if (female[i] % K == 0)
			room += female[i] / K;
		else
			room += female[i] / K + 1;
	}
	cout << room;
}
