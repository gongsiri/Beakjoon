#include <iostream>
using namespace std;

int main() {
	int N,v;
	cin >> N;
	int* arr = new int[N]; //동적 할당
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	cin >> v;
	
	int count = 0;
	for (int i = 0; i < N; i++) {
		if (arr[i] == v)
			count++;
	}

	cout << count;
}

