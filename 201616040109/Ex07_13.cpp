// Exercise 7.13 Solution: Ex07_13.cpp
// Comparing call by value and call by reference.
#include <iostream>
#include <array>
using namespace std;
int main()
{
	array <int,20> array1={};
	int j = 0;
	int flag=0;
	cout << "Enter 20 numbers:" << endl;
	for (int i = 0;i < 20;i++) {
		int number;
		cin >> number;
		// If you enter the same number as the previously read, set flag=1; 
		for(size_t k=0;k<20;k++){
			if(number==array1[k]){
				flag=1;
			}
		}
		//avoid reading out-of-order and duplicate numbers
		if (number >= 10 && number <= 100 &&flag==0){
			array1[j] = number;
			j++;
		}
		flag=0;
		
	}
	//print array numbers
	cout << "The numbers in the array are:" << endl;
	for (size_t q=0;q<j;q++) {
		cout << array1[q] << " ";
	}
	return 0;
}
