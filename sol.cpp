#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	// don't forget to put cin.ignore() here
	cin.ignore();
	while (tt--) {
		string s;
		getline(cin, s);
		// count the frequency of every letter present in the string
		vector<int> letter(26, 0);
		for (int i = 0; i < (int) s.size(); i++) {
			if (isalpha(s[i])) {
				letter[tolower(s[i]) - 'a']++;
			}
		}
		// concatenate all the letters that are not present in the string
		string ans = "";
		for (int i = 0; i < (int) letter.size(); i++) {
			if (letter[i] == 0) {
				ans += string(1, (char) i + 'a');
			}
		}
		cout << (ans == "" ? "~" : ans) << '\n';
	}
	return 0;
}
