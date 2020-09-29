/* 
 __  __            _                                
|  \/  | ___  _ __| |_ _   _        ___ _ __  _ __  
| |\/| |/ _ \| '__| __| | | |      / __| '_ \| '_ \ 
| |  | | (_) | |  | |_| |_| |  _  | (__| |_) | |_) |
|_|  |_|\___/|_|   \__|\__, | (_)  \___| .__/| .__/ 
                       |___/           |_|   |_|  
*/

// Include the Morty header file
#include "Morty.hpp"
#include <iostream>

// =========================================================================== // 
//          Define functions enclosed in Namespace C137 here 
// =========================================================================== // 
void C137::Morty(int start, int stop, int step) {

    std::cout << "Morty C137 says:" << std::endl;

    for (int i = start; i <= stop; i = i + step) {
        if (i % 15 == 0) {
            std::cout << i << ": Aww Geez Man" << std::endl;
            break;
        }
        else if (i % 5 == 0) {
            std::cout << i << ": Geez" << std::endl;
            break;
        }
        else if (i % 3 == 0) {
            std::cout << i << ": Aww" << std::endl;
            break;
        }
        else {
            std::cout << i << ":" << std::endl;
        }

    }
}
void C137::Morty(int start, int stop) {
    C137::Morty(start, stop, 1);
}


// =========================================================================== // 
//          Define functions enclosed in Namespace Z286 here 
// =========================================================================== //
void Z286::Morty(int start, int stop, int step) {
    
    std::cout << "Morty Z286 says:" << std::endl;

    for (int i = start; i <= stop; i = i + step) {
        if (i % 15 == 0) {
            std::cout << i << ": naM zeeG wwA" << std::endl;
            break;
        }
        else if (i % 5 == 0) {
            std::cout << i << ": zeeG" << std::endl;
            break;
        }
        else if (i % 3 == 0) {
            std::cout << i << ": wwA" << std::endl;
            break;
        }
        else {
            std::cout << i << ":" << std::endl;
        }

    }
}
void Z286::Morty(int start, int stop) {
    Z286::Morty(start, stop, 1);
}