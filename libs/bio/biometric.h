#ifndef CURS_OOP_BIOMETRIC_H
#define CURS_OOP_BIOMETRIC_H

#include "bio_include.h"

class biometric : Name, dateBirth {
    Name* _name;
    dateBirth* _date;
    std::string _mail;

protected:
    int setName(int n, std::string& name) {
        int flag = 0;
        switch (n) {
            case 1:
                setFirstname(name);
                break;
            case 2:
                setLastname(name);
                break;
            case 3:
                setMiddleName(name);
                break;
            default:
                flag = -1;
        }

        return flag;
    }


public:
    void readWord(std::string& str, std::string& word) {
        if (!word.empty())
            word.clear();
        for (size_t i = 0; i < str.size() && str[i] != ' '; i++) {
            word += str[i];
        }
    }

    int setName(std::string& str) {
        int flag;
        std::string name;
        readWord(str, name);
        if (name.empty()) return -1;
        flag = setName(1, name);
        name.clear();
        if (flag) return flag;
        readWord(str, name);
        if (name.empty()) return -1;
        flag = setName(2, name);
        name.clear();
        if (flag) return flag;
        if (!name.empty()) {
            flag = setName(3, name);
            name.clear();
            if (flag) return flag;
        }

        return flag;
    }


};


#endif //CURS_OOP_BIOMETRIC_H
