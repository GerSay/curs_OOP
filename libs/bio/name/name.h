#ifndef CURS_OOP_NAME_H
#define CURS_OOP_NAME_H

#include <string>

class Name {
    std::string _firstname;
    std::string _lastname;
    std::string _middlename;
    bool isMiddleName = false;

protected:
    void setFirstname(std::string& newName) { _firstname = newName; }
    void setLastname(std::string& newName) { _lastname = newName; }
    void setMiddleName(std::string& newName) { _middlename = newName; isMiddleName = true; }

public:
    std::string getFirstName() { return _firstname; }
    std::string getLastname() { return _lastname; }
    std::string getMiddlename() { return _middlename; }
};


#endif //CURS_OOP_NAME_H
