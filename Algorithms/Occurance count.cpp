#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	// Initializing vector with array values
	int arr[] = {10, 20, 5, 23 ,42, 20, 15};
	int n = sizeof(arr)/sizeof(arr[0]);
	vector<int> vect(arr, arr+n);

	cout << "Occurrences of 20 in vector : ";

	cout << count(vect.begin(), vect.end(), 20);

	
	find(vect.begin(), vect.end(),5) != vect.end()?  // Ternary 
	cout << "\nElement found": cout << "\nElement not found";

	return 0;
}
