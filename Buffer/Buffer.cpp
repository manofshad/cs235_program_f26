// Buffer.cpp -- Buffer::grow() is NEW code, added today.
#include "Buffer.hpp"

void Buffer::grow(std::size_t newSize) {
    int* newData = new int[newSize]{};
    for (std::size_t i = 0; i < size_; ++i) {
        newData[i] = data_[i];
    }
    data_ = newData;
    size_ = newSize;
}

// --- FIXED VERSION (for after the demo) --------------------------------
// void Buffer::grow(std::size_t newSize) {
//     int* newData = new int[newSize]{};
//     for (std::size_t i = 0; i < size_; ++i) {
//         newData[i] = data_[i];
//     }
//     delete[] data_;      // free the OLD array first
//     data_ = newData;
//     size_ = newSize;
// }