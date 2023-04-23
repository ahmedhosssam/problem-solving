#include <iostream>
using namespace std;

int main()
{
	int n;	// number of friends
	int h;	// height of the fence
	int w = 0;	// valid width of the road

	cout << "Number of friends : "; cin >> n;
	cout << "Height of the fence : "; cin >> h;

	int a[n];	// array of heights of friends
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i];
		if(a[i] <= h) { w = w + 1; }
		else { w = w + 2; }
	}

	cout << w << endl;

	return 0;
}
