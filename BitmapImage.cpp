#include "BitmapImage.h"

BitmapImage::BitmapImage() : width(640), height(480), channels(3), depth(8) {
    buffer = new int[width * height * channels];
}

bool BitmapImage::load(std::string name) {
    // check it is a supported image file
    std::string fileExt = name.substr(name.find_last_of(".") + 1);
    if ((fileExt == "png") || (fileExt == "jpg") || (fileExt == "bmp") || (fileExt == "gif") || (fileExt == "jpeg") ) {
        // load image file
        // decompress into buffer
        return true;
    }
    return false;
}

bool BitmapImage::save(std::string name) {
    // check it is a supported image file
    std::string fileExt = name.substr(name.find_last_of(".") + 1);
    if (fileExt == "jpg") {
        // load image file
        // decompress into buffer
        return true;
    }
    return false;
}
bool BitmapImage::resize(int w, int h) {
    if (w <= 0 || h <= 0)
        return false;
    // resize buffer
    return true;
}

BitmapImage::~BitmapImage() {
    delete[] buffer;
}
