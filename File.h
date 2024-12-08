#ifndef FILE_H
#define FILE_H

#include <string>

class Date {
public:
    bool lessThan(const Date& other) const;
    void print() const;
};

class File {
private:
    std::string name;
    std::string content;
    Date lastModified;

public:
    // Constructor
    File(std::string name, std::string content, Date& date);
    
    // Returns true if this file's date comes before other file's date
    bool lessThan(const File& other) const;
    
    // Print file metadata (name and date)
    void print() const;
    
    // Print metadata and contents
    void printContents() const;
};

#endif