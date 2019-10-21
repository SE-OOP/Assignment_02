// Exercise 7.14 Solution: Ex07_14.cpp
// Comparing call by value and call by reference.
#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> items;
	int integer;
	int flag=9;
	cout << "Enter 20 numbers" << endl;
	for(int i=1;i<=20;i++){
		cin>> integer;
		//traverse the vector array, and if the same number, set flag=1;
		for(int item1:items){
			if(item1==integer){
				flag=1;
			}
		}
		//if integer meets the requirements, insert it into the vector array
		if(integer>10&&integer<100&&flag==0){
			items.push_back(integer);
		}
		flag=0;
	}
	//print vector array
	cout << "The values in the vector are:" << endl;
	for(int item2:items){
		cout << item2 << " ";
	}
	return 0;
}
