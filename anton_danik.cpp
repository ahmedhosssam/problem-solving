#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;	// number of games
	string s;	// string i.e ADAADA
	int anton = 0;
	int danik = 0;
	cin >> n;
	cin >> s;

	for(int i = 0 ; i < n ; i++)
	{
		if(s[i] == 'A') { anton += 1; }
		else if (s[i] == 'D' ) { danik += 1; }
	}

	if ( anton > danik ) { cout << "Anton" << endl; }
	else if ( anton < danik ) { cout << "Danik" << endl; }
	else if ( anton == danik ) { cout << "Friendship" << endl; }

	return 0;
}
