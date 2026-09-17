// Buffer.hpp -- from Tuesday's lecture slip (unchanged)
#ifndef BUFFER_HPP
#define BUFFER_HPP

#include <cstddef>

class Buffer {
public:
    explicit Buffer(std::size_t size)
        : data_(new int[size]{}), size_(size) {}

    ~Buffer() { delete[] data_; }

    Buffer(const Buffer& other)
        : data_(new int[other.size_]), size_(other.size_) {
        for (std::size_t i = 0; i < size_; ++i) {
            data_[i] = other.data_[i];
        }
    }

    // NEW today -- buggy, see grow() below (implemented in Buffer.cpp)
    void grow(std::size_t newSize);

    int& at(std::size_t i) { return data_[i]; }
    std::size_t size() const { return size_; }

private:
    int* data_;
    std::size_t size_;
};

#endif