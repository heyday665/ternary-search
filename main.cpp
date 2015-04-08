#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include "tsearch.h"
using namespace std;
unsigned int ARRAYSIZE = 100;

int main(){
    cout << "Generating random array..." << endl;
	int array[ARRAYSIZE];
	for (int i=0; i<=ARRAYSIZE-1; ++i){
		int tmp = 0;
		srand(time(NULL)+i);
		tmp = rand()%1000;
		array[i] = tmp;
		cerr << "Value--> " << array[i] << endl; //Can uncomment to add someuseful debug messaging, and to know what values have been stored.
	}
	sort(array,array+ARRAYSIZE);

	int target=0; 
	cout << "Enter a number to search for in the random array: ";
	cin.clear();
	cin >> target;
	cout << endl;

	int answer = ternarysearch(array, 0, ARRAYSIZE-1, target);
	if (answer == -1){
		cerr << "Value not found in array" << endl;
		exit(2);
	}

	cout << "The number '" << target << "' can be found at element '" << answer << "' of the array." << endl;
}
