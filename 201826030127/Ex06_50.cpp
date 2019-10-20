#include<iostream>
using namespace std;
template<typename T>
T minimum(T value1,T value2)
{
    T minimum = value1 < value2 ? value1:value2;
    return minimum;
}

int main()
{
    int int1,int2;

    cout << "Input two integer values:" ;
    cin >> int1 >> int2;
    cout << "The minimum integer value:" << minimum(int1,int2) << endl;

    double double1,double2;

    cout << "Input two double values:" ;
    cin >> double1 >> double2;
    cout << "The minimum double value:" << minimum(double1,double2) << endl;

    char ch1,ch2;

    cout << "Input two char values:" ;
    cin >> ch1 >> ch2;
    cout << "The minimum char value:" << minimum(ch1,ch2) << endl;
}
