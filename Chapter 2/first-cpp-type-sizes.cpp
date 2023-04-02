/*
first-cpp-type-sizes.cpp
Webpage Learn C++: https://www.tutorialspoint.com/cplusplus/cpp_data_types.htm
Following is the example, which will produce correct size of various
data types on your computer.

This example uses endl, which inserts a new-line character
after every line and << operator is being used 	to pass multiple
values out to the screen. We are also using sizeof() operator to get
size of various data types.

When the above code is compiled and executed, it produces the
following result which can vary from machine to machine −

On Charles R. Hurley's Windows 10 x64 - Sun., March 19, 2023:
Size of char : 1
Size of int : 4
Size of short int : 2
Size of long int : 4
Size of float : 4
Size of double : 8
Size of wchar_t : 2
*/
#include <iostream>

using namespace std;

int main() {
cout << "Size of char : " << sizeof(char) << endl;
cout << "Size of int : " << sizeof(int) << endl;
cout << "Size of short int : " << sizeof(short int) << endl;
cout << "Size of long int : " << sizeof(long int) << endl;
cout << "Size of float : " << sizeof(float) << endl;
cout << "Size of double : " << sizeof(double) << endl;
cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

return 0;
}