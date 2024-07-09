#include<iostream>
using namespace std;

int main() {
	int K, N,S,Y;
	int arr[2][7]{};
	int num = 0;
	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> S >> Y;
		arr[S][Y]++;
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 7; j++) {
			if (arr[i][j] != 0) {
				num += arr[i][j] / K;

				if (arr[i][j] % K != 0)
					num++;
			}
		}
	}
    cout<<num;
}