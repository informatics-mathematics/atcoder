#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a, b, c; cin >> a >> b >> c;
	cout << ((stoi(a+b+c) % 4 == 0) ? "YES" : "NO") << "\n";

	return 0;
}
