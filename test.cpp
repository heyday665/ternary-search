#include <iostream>
#include <stdlib.h>
#include "tsearch.h"
using namespace std;

int main(){
	int testArray1[10] = {10, 26, 35, 41, 42, 77, 81, 88, 90, 99};
	cerr << "Array 1 initialized!" << endl;				//Debug msg

	int testArray2[100] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,
		47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,
		131,137,139,149,151,157,163,167,173,179,181,191,193,197,
		199,211,223,227,229,233,239,241,251,257,263,269,271,277,
		281,283,293,307,311,313,317,331,337,347,349,353,359,367,
		373,379,383,389,397,401,409,419,421,431,433,439,443,449,
		457,461,463,467,479,487,491,499,503,509,521,523,541};
	//Yes, that is the first 100 primes.
	cerr << "Array 2 initialized" << endl;				//Debug msg

	int answer1=0, answer2=0;	
	answer1 = ternarysearch(testArray1, 0, 9, 88);
	answer2 = ternarysearch(testArray2, 0, 99, 433);

	cout << "Found 88 in 'testArray1' at element: " << answer1 << endl;
	cout << "Found 433 in 'testArray2' at element: " << answer2 << endl << endl;
	//Following is probably not nessicary, but...
	cout << "Just to confirm, testArray1's element #" << answer1 << " is confirmed to be " << testArray1[answer1] << endl;
	cout << "Just to confirm, testArray2's element #" << answer2 << " is confirmed to be " << testArray2[answer2] << endl;
	return 0;
}
