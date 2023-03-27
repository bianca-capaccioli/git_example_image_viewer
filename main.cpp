#include <iostream>
#include "vertion.h"
#include "BitmapImage.h"

int main() {
    std::cout << "Image viewer"  << std::endl;
    std::cout << "version" << std::endl;
    BitmapImage b;
    std::string imgName = "test.png";
    if (b.load(imgName))
        std::cout << "show image: " << imgName << std::endl;
    else
        std::cerr << "image:" << imgName << " not readable." << std::endl;
    return 0;
}