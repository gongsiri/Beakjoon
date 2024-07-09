#include <iostream>
using namespace std;

int main() {
	int N;
	string s1, s2;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int alpha1[26] = { 0 };
		int alpha2[26] = { 0 };
		bool isPossible=true;
		cin >> s1>> s2;
		for (int j = 0; j < s1.size(); j++) {
			alpha1[s1[j] - 'a']++;
		}
		for (int j = 0; j < s2.size(); j++) {
			alpha2[s2[j] - 'a']++;
		}
		for (int j = 0; j < 26; j++) {
			if (alpha1[j] != alpha2[j]) {
				isPossible = false;
				break;
			}
		}
		if (isPossible == true) {
			cout << "Possible" << "\n";
		}
		else
			cout << "Impossible" << "\n";
	}
}