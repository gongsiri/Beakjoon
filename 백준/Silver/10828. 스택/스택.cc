#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<int> s;
	int N;
	string command;
	int num;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> command;
		if (command == "push") {
			cin >> num;
			s.push(num);
		}
		else if (command == "top") {
			if (s.size() == 0) { // 스택이 비어 있으면 top은 없기에 -1 출력
				cout << -1 << "\n";
			} else
				cout<<s.top()<<"\n";
		}
		else if (command == "size") 
			cout<<s.size()<<"\n";
	
		else if (command == "empty") {
			if (s.size() == 0)
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if (command == "pop") {
			if (s.size() == 0) {
				cout << -1 << "\n";
			}
			else {
				cout << s.top() << "\n";
				s.pop();
			}
		}
	}
}