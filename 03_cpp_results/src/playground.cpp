#include <iostream>
#include <functions.hpp>

// int main( int argc, char** argv )
int main()
{

    // bla bla
    /*
       multi line comment
     */

    // math::sin( math::PI );
    // church::sin( "bad boy" );

    int a = 42;
    std::cout << math::square( a ) << "\n";
    std::cout << math::pow( a, 2 ) << "\n";
    std::cout << math::pow( a, 3 ) << "\n";

    math::dont_use_this_in_cpp();
    math::alternative_in_cpp();

    // std::cout << foo::bar() << "\n";

    //std::cout << "Hello World!\n";
    return 0;
}
