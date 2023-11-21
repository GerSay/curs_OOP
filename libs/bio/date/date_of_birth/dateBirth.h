#ifndef CURS_OOP_DATEBIRTH_H
#define CURS_OOP_DATEBIRTH_H

#include "../../../date/date.h"
#include <string>

class dateBirth : date {
protected:
    const int _day = getTime().tm_mday;
    const int _month = getTime().tm_mon;
    const int _year = getTime().tm_year;

    void setBirthDate(std::string& str) {
        int day = str[0] - '0';
        size_t i = 1;
        if (str[i] != '.')
            day += day * 10 + str[i++] - '0';

        int month = str[++i] - '0';
        if (str[i] != '.')
            month += month * 10 + str[i++] - '0';

        int year = str[++i] - '0';
        while (str[i++] != '\n')
            year += year * 10 + str[i] - '0';

        tm* time;
        time->tm_mday = day;
        time->tm_mon = month;
        time->tm_year = year;

        setTime((const tm*) time);
    }
};


#endif //CURS_OOP_DATEBIRTH_H
