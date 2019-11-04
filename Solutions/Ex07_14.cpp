// Exercise 7.14 Solution: Ex07_14.cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
   const int SIZE = 20; // smallest possible size of vector
   vector <int> v = {};
   int length = 0;
   int duplicate;
   int value; // number entered by user

   cout << "Enter 20 integers between 10 and 100:\n";

   // get 20 nonduplicate integers in the range between 10 and 100
   for ( int i = 0; i < SIZE; )
   {
      duplicate = 0;
      cin >> value;

      // validate input and test if there is a duplicate
      if ( value >= 10 && value <= 100 )
      {
         for ( int j = 0; j < length; ++j )
         {
            if ( value == v.at(j) )
            {
               duplicate = 1;
               break;
            } // end if
         } // end for

         // if number is not a duplicate, push it at the back of vector
         if ( !duplicate )
         {
            v.push_back(value);
            length++;
            ++i;
         } // end if
         else
            cout << "Duplicate number.\n";
      } // end if
      else
         cout << "Invalid number.\n";
   } // end for

   cout << "\nThe nonduplicate values are:\n";

   // display vector of nonduplicates
   for (const int &item: v)
      cout<<item<<' ';
   //for ( int i = 0; i < SIZE; ++i )
   //   cout << v.at(i)<< ' ';

   cout << endl;
} // end main

