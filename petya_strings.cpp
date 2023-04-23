#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int compareStrings(string s1, string s2) {
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower); // Convert s1 to lowercase
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower); // Convert s2 to lowercase

    if (s1 < s2) {
        return -1;
    } else if (s1 > s2) {
        return 1;
    } else {
        return 0;
    }
}

int main()
{
	string s1;
	string s2;

    cin >> s1 >> s2;

    int result = compareStrings(s1, s2);
    cout << result << endl;

	return 0;
}
