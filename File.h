#ifndef FILE_H
#define FILE_H

#include <string>
#include "Date.h"

class File {
private:
    std::string name;
    std::string content;
    Date lastModified;

public:
    // Constructor takes a name, content, and Date reference
    File(std::string name, std::string content, Date& date);
    
    // lessThan matches Date's implementation with non-const reference
    bool lessThan(File& other);
    
    // Print functions for displaying file information
    void print() const;
    void printContents() const;
};

#endif
