#include "File.h"
#include <iostream>

File::File(std::string name, std::string content, Date& date) 
    : name(name), 
      content(content), 
      lastModified(date) {
}

bool File::lessThan(File& other) {
    return lastModified.lessThan(other.lastModified);
}

void File::print() const {
    std::cout << "File: " << name << std::endl;
    std::cout << "Last Modified: ";
    lastModified.print();
    std::cout << std::endl;
}

void File::printContents() const {
    print();
    std::cout << "Contents:" << std::endl;
    std::cout << content << std::endl;
}
