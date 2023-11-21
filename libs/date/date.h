#ifndef CURS_OOP_DATE_H
#define CURS_OOP_DATE_H

#include <ctime>

class date {
    tm* _time;

protected:
    void setTime(const tm* time);

    tm getTime();

public:
    int getSeconds() const;

    int getMinutes() const;

    int getHours() const;

    int getDayInWeek() const;

    int getDayInMonth() const;

    int getDayInYear() const;

    int getMonth() const;

    int getYear() const;

};


#endif //CURS_OOP_DATE_H
