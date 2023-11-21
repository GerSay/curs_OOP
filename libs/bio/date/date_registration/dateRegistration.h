#ifndef CURS_OOP_DATEREGISTRATION_H
#define CURS_OOP_DATEREGISTRATION_H

#include "../../../date/date.h"

class dateRegistration : date {
private:
    dateRegistration() {
        setTime(gmtime((const time_t *)time(nullptr)));
    }
};


#endif //CURS_OOP_DATEREGISTRATION_H
