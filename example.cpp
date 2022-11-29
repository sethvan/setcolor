#include <iostream>

#include "setcolor.hpp"

int main() {
    const char *testStr = "TEST STRING";
    std::string str1( "This line is half yellow background " );
    std::string str2( "and the other half is red background" );
    int i = 1000;
    std::cout << setcolor( Color::RED ) << testStr << "   " << setcolor( Color::MAG_BACK ) << " RANDOM TEXT"
              << "\n";
    std::cout << setcolor( Color::WHITE_BACK ) << testStr << "   " << setcolor( Color::GREEN ) << " RANDOM TEXT"
              << "\n";
    std::cout << setcolor( Color::BLUE ) << testStr << "   " << setcolor( Color::BLUE_BACK ) << " RANDOM TEXT"
              << "\n";
    std::cout << setcolor( Color::YELLOW_BACK ) << testStr << "   " << setcolor( Color::RED_BACK ) << " RANDOM TEXT"
              << "\n";
    std::cout << setcolor( Color::CYAN_BACK ) << testStr << "   " << setcolor( Color::MAGENTA ) << " RANDOM TEXT"
              << "\n";
    std::cout << setcolor( Color::GREY ) << "This " << setcolor( Color::YELLOW ) << "line " << setcolor( Color::GREEN )
              << "is " << setcolor( Color::RED ) << "made " << setcolor( Color::BLUE ) << "up "
              << setcolor( Color::CYAN ) << "of " << setcolor( Color::MAGENTA ) << "words " << setcolor( Color::YELLOW )
              << "with " << setcolor( Color::RED ) << "different " << setcolor( Color::GREEN ) << "colors." << '\n';
    std::cout << setcolor( Color::YELLOW_BACK ) << str1 << setcolor( Color::RED_BACK ) << str2 << std::endl;

    return 0;
}
