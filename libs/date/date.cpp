#include "date.h"


void date::setTime(const tm* time) {
    _time =(tm *) time;
}

tm date::getTime() {
    return *_time;
}



int date::getSeconds() const{
    return _time->tm_sec;
}

int date::getMinutes() const {
    return _time->tm_min;
}

int date::getHours() const {
    return _time->tm_hour;
}

int date::getDayInWeek() const {
    return _time->tm_wday;
}

int date::getDayInMonth() const {
    return _time->tm_mday;
}

int date::getDayInYear() const {
    return _time->tm_yday;
}

int date::getMonth() const {
    return _time->tm_mon;
}

int date::getYear() const {
    return _time->tm_year;
}

