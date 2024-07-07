#include <iostream>
using namespace std;

int main() {
	string S;
	cin >> S;

	int alphabet[26] = { 0 }; // 알파벳의 개수를 담는다.

	for (int i = 0; i < S.size(); i++) {
		alphabet[S[i] - 'a'] += 1; // 현재 문자가 'a'부터 몇 번째 떨어져 있는 지 계산 후, alphabet 배열의 빈도 증가 
	}

	for (int i = 0; i < 26; i++) {
		cout << alphabet[i] << " ";
	}
}

