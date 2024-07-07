#include <iostream>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;

	int alphabet1[26] = {};
	int alphabet2[26] = {};

	for (int i = 0; i < a.length(); i++) {
		alphabet1[a[i] - 'a']++;
	}
	for (int i = 0; i < b.length(); i++) {
		alphabet2[b[i] - 'a']++;
	}

	int count = 0;
	for (int i = 0; i < 26; i++) {
		if (alphabet1[i] != alphabet2[i])
			count += abs(alphabet1[i] - alphabet2[i]);
	}
	
	cout << count;
}

