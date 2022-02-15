/*
* Program to find the number of elements which occur more than once. 
*/

#include<iostream>
#define EQUAL_TO_ONE 1

using namespace std;

int main() {
	int arr[] = {1,2,2,3,3,3,3,4,7,7,7,9,9};
	int size = sizeof(arr) / sizeof(arr[0]);
	int elementCount = 0;
	int occurenceCount = 0;
	for(int i=0; i < size; i++) {
		if(arr[i] == arr[i + 1]) {
			occurenceCount++;
		}
		else {
			occurenceCount = 0;
		}

		if(occurenceCount == EQUAL_TO_ONE) {
			elementCount++;
		}
	}
	cout << elementCount;
	return 0;
}