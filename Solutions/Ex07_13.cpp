// Exercise 7.13 Solution: Ex07_13.cpp
#include <iostream>
#include <array>
using namespace std;

int main()
{
   const int SIZE = 20; // size of array
   array <int, SIZE> a = {};
   int subscript = 0;
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
         for ( int j = 0; j < subscript; ++j )
         {
            if ( value == a[ j ] )
            {
               duplicate = 1;
               break;
            } // end if
         } // end for

         // if number is not a duplicate, enter it in array
         if ( !duplicate )
         {
            a[ subscript++ ] = value;
            ++i;
         } // end if
         else
            cout << "Duplicate number.\n";
      } // end if
      else
         cout << "Invalid number.\n";
   } // end for

   cout << "\nThe nonduplicate values are:\n";

   // display array of nonduplicates
   for ( int i = 0; i < SIZE; ++i )
      cout << a[ i ] << ' ';

   cout << endl;
} // end main

