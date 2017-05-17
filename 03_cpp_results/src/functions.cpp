#include <functions.hpp>
#include <iostream>
#include <vector>

namespace math {

double pow( double base, unsigned int exp )
{
    double result = 1.0;
    for( unsigned int i = 0; i < exp; ++i ) {
        result *= base;
    }
    return result;
}

void phoenix()
{
    int a = 42;
    int b = 3;
    if( a == 42 || b < 5 ) {
        /* code */
    }
}

void dont_use_this_in_cpp()
{
    int a[3];
    a[0] = 3;
    a[1] = 9;
    a[2] = 8;

    // int* b = (int*) malloc( sizeof(int) * 3 );

    // a[5] = 6;
    std::cout << a[0] << "\n";
}

void alternative_in_cpp()
{
    std::cout << "here we go:\n";
    std::vector<int> a = { 3, 9, 8 };
    a.push_back( 5 );
    for( int elem : a ) {
        std::cout << elem << "\n";
    }
}

int square( int x )
{
    return x * x;
}

std::string square( std::string s )
{
    return s + s;
}

}
