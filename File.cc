#include "File.h"

File::File(string name, string content, Date& date) {
    this->name = name;
    this->content = content;
    this->lastModified.setDate(date);
}

bool File::lessThan(File& other) {
    return this->lastModified.lessThan(other.lastModified);
}

void File::print() {
    cout << "File: " << name << endl;
    cout << "Last Modified: ";
    lastModified.print();
    cout << endl;
}

void File::printContents() {
    print();
    cout << "Contents:" << endl;
    cout << content << endl;
}
