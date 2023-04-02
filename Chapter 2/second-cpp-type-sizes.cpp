/*
second-cpp-type-sizes.cpp
Webpage Learn C++: https://www.tutorialspoint.com/cplusplus/cpp_data_types.htm
Following is another example:
Following is the example, which will produce correct size of various data types on your computer.

This example uses endl, which inserts a new-line character after every line
and << operator is being used to pass multiple values out to the screen.
We are also using sizeof() operator to get size of various data types.

When the above code is compiled and executed, it produces the following
result which can vary from machine to machine −

On Charles R. Hurley's Windows 10 x64 - Sun., March 19, 2023:
int Min -2147483648
int Max 2147483647
unsigned int Min 0
unsigned int Max 4294967295
long int Min -2147483648
long int Max 2147483647
unsigned long int Min 0
unsigned long int Max 4294967295
unsigned long long int Min 0
unsigned long long int Max 18446744073709551615
long double Min 3.3621e-4932
long double Max 1.18973e+4932
*/
#include <iostream>
#include <limits>

using namespace std;

int main() {
std::cout << "int Min " << std::numeric_limits<int>::min() << endl;
std::cout << "int Max " << std::numeric_limits<int>::max() << endl;
std::cout << "unsigned int Min " << std::numeric_limits<unsigned int>::min() << endl;
std::cout << "unsigned int Max " << std::numeric_limits<unsigned int>::max() << endl;
std::cout << "long int Min " << std::numeric_limits<long int>::min() << endl;
std::cout << "long int Max " << std::numeric_limits<long int>::max() << endl;
std::cout << "unsigned long int Min " << std::numeric_limits<unsigned long int>::min() << endl;
std::cout << "unsigned long int Max " << std::numeric_limits<unsigned long int>::max() << endl;
std::cout << "unsigned long long int Min " << std::numeric_limits<unsigned long long int>::min() << endl;
std::cout << "unsigned long long int Max " << std::numeric_limits<unsigned long long int>::max() << endl;
std::cout << "long double Min " << std::numeric_limits<long double>::min() << endl;
std::cout << "long double Max " << std::numeric_limits<long double>::max() << endl;

return 0;
}