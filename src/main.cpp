#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b;
	char c;
	cin >> a >> c >> b;

	while (0 != a || 0 != b || 'W' != c) {
		auto result = a;
		if ('W' == c) {
			result -= b;
		}
		else {
			result += b;
		}

		if (-200 <= result) {
			cout << result << '\n';
		}
		else {
			cout << "Not allowed\n";
		}

		cin >> a >> c >> b;
	}

	return 0;
}