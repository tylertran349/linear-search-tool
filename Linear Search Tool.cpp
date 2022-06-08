#include <iostream>
using namespace std;

int main() {
	int num, numElements, searchValue;
	
	// Prompt user for array size and declare array
	cout << "How many elements are in the list (numbers only)? ";
	cin >> numElements;
	int nums[numElements] = {};
	cout << endl;
	
	// Initialize array
	for(int i = 0; i < numElements; i++) {
		cout << "Enter element " << i + 1 << ": ";
		cin >> num;
		nums[i] = num;
	}
	cout << endl;
	
	// Prompt user for search value
	cout << "Enter number (NOT index) to search for: ";
	cin >> searchValue;
	cout << endl;
	
	// Search array for search value
	for(int i = 0; i < numElements; i++) {
		if(nums[i] == searchValue) {
			cout << searchValue << " was found at index " << i << "." << endl;
			// End program if search value is found in array
			return 0;
		}
	}
	
	// Only output message below if search value is not found in array
	cout << searchValue << " was not found in the array." << endl;
}
