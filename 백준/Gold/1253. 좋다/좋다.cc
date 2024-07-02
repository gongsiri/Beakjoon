#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int N;
	int count = 0;
	cin >> N;
	vector<int> A(N, 0);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	
	// 오름차순 정렬
	sort(A.begin(), A.end());

	// 투 포인터 알고리즘 (포인터가 i,j)
	for (int k = 0; k < N; k++) {
		long find = A[k];
		int i = 0;
		int j = N - 1;
		while (i < j) {
			if (A[i] + A[j] == find) {
				// 포인터는 자기 자신의 위치와 같지 않아야 함
				if (i!=k && j!=k) {
					count++;
					break;
				}
				else if (i==k) {
					i++;
				}
				else if (j==k) {
					j--;
				}
			}
			else if (A[i] + A[j] < find) {
				i++;
			}
			else {
				j--;
			}
		}
	}
	cout << count << endl;
}