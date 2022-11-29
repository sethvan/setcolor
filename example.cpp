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
    std::cout << setcolor( Color::RED ) << "RED" << '\n';
    std::cout << setcolor( Color::GREY ) << "GREY" << '\n';
    std::cout << setcolor( Color::GREEN ) << "GREEN" << '\n';
    std::cout << setcolor( Color::YELLOW ) << "YELLOW" << '\n';
    std::cout << setcolor( Color::BLUE ) << "BLUE" << '\n';
    std::cout << setcolor( Color::MAGENTA ) << "MAGENTA" << '\n';
    std::cout << setcolor( Color::CYAN ) << "CYAN" << '\n';
    std::cout << setcolor( Color::DARK_GREY ) << "DARK_GREY" << '\n';
    std::cout << setcolor( Color::BLACK_BACK ) << "BLACk BACKGROUND" << '\n';
    std::cout << setcolor( Color::RED_BACK ) << "RED BACKGROUND" << '\n';
    std::cout << setcolor( Color::GREEN_BACK ) << "GREEN BACKGROUND" << '\n';
    std::cout << setcolor( Color::YELLOW_BACK ) << "YELLOW BACKGROUND" << '\n';
    std::cout << setcolor( Color::BLUE_BACK ) << "BLUE BACKGROUND" << '\n';
    std::cout << setcolor( Color::MAG_BACK ) << "MAGENTA BACKGROUND" << '\n';
    std::cout << setcolor( Color::CYAN_BACK ) << "CYAN BACKGROUND" << '\n';
    return 0;
}
