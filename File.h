#ifndef FILE_H
#define FILE_H

#include <string>
#include "Date.h"

using namespace std;

class File {
private:
    string name;
    string content;
    Date lastModified;

public:
    // Constructor using Date reference
    File(string name, string content, Date& date);
    
    // lessThan function that takes non-const reference
    bool lessThan(File& other);
    
    // Print functions
    void print();
    void printContents();
};

#endif
