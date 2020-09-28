/* 
 __  __            _                                
|  \/  | ___  _ __| |_ _   _        ___ _ __  _ __  
| |\/| |/ _ \| '__| __| | | |      / __| '_ \| '_ \ 
| |  | | (_) | |  | |_| |_| |  _  | (__| |_) | |_) |
|_|  |_|\___/|_|   \__|\__, | (_)  \___| .__/| .__/ 
                       |___/           |_|   |_|  
*/

// Include the Morty header file
#include "../src/Morty.hpp"
#include <cstdlib>

// =========================================================================== // 
//          Define functions enclosed in Namespace C137 here 
// =========================================================================== // 
void C137::Morty(int start, int stop) {
   for(int i = start; i <= stop; i++){
       std::cout << i << ": ";
       if(i%15 == 0)
           std::cout << "Aww Geez Man";
        else if(i%5 == 0)
           std::cout << "Geez";
        else if(i%3 == 0)
           std::cout << "Aww";
        std::cout << "" << std::endl;
   }
}

void C137::Morty(int start, int stop, int step) {
    for(int i = start; i <= stop; i = i + step){
       std::cout << i << ": ";
       if(i%15 == 0)
           std::cout << "Aww Geez Man";
        else if(i%5 == 0)
           std::cout << "Geez";
        else if(i%3 == 0)
           std::cout << "Aww";
        std::cout << "" << std::endl;
   }
}


// =========================================================================== // 
//          Define functions enclosed in Namespace Z286 here 
// =========================================================================== // 
void Z286::Morty(int start, int stop) {
     for(int i = start; i <= stop; i++){
       std::cout << i << ": ";
       if(i%15 == 0)
           std::cout << "naM zeeG wwA";
        else if(i%5 == 0)
           std::cout << "zeeG";
        else if(i%3 == 0)
           std::cout << "wwA";
        std::cout << "" << std::endl;
   }
}

void Z286::Morty(int start, int stop, int step) {
    for(int i = start; i <= stop; i = i + step){
       std::cout << i << ": ";
       if(i%15 == 0)
           std::cout << "naM zeeG wwA";
        else if(i%5 == 0)
           std::cout << "zeeG";
        else if(i%3 == 0)
           std::cout << "wwA";
        std::cout << "" << std::endl;
   }
}
