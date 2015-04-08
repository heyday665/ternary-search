#include <iostream>
#include <stdlib.h>
#include "tsearch.h"
using namespace std;

int main(){
    int n = 0;
	cout << "Ternary Search" << endl << "Number elements in your array: ";
	cin >> n;
	cout << endl;

    int array[n];
    cerr << "Remember to have your array *sorted* (ascending order) for input!" << endl;

	for (int i=0; i<=n-1; i++){														//
		int tmp = 0;																  //
		cin.clear();                                                                    //
		cout << "Please enter value for element " << i << ": ";                         // Creation of
		cin >> tmp;                                                                     // User Defined
		if (i == 0){                                                                	// input array
			array[i] = tmp;                                                         //
		}                                                                               //
		else if (tmp < array[i-1]){                                                     //
        	cerr << "The value entered is less than the previous value!" << endl;           //
			exit(1);                                                                //
		}                                                                               //
		else {                                                                          //
			array[i] = tmp;                                                         //
		}																			  //
	}																				//

	int target = 0;
	cout << "Enter target value to search for: ";
	cin >> target;
	cout << endl;

    int answer = ternarysearch(array, 0, n-1, target);
	if (answer == -1){
		cerr << "Value not found in array!" << endl;
		exit(2);
	}

	cout << "Target: " << target << " found at element: " << answer << endl;

	return 0;
}
