#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b;
	cin >> a >> b;

	if (a == b) {
		cout << a;
	}
	else {
		cout << (a < b ? b : a);
	}

	return 0;
}