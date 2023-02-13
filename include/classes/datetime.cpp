//
// Created by Dynesshely on 2023.02.05.
//

#include "datetime.h"

namespace CppEnhanced::Classes {

    std::ostringstream _pub_osstream;

    void DateTime::SetYear(int year) {
        Year = year;
    }

    void DateTime::SetMonth(int month) {
        Month = month;
    }

    void DateTime::SetDay(int day) {
        Day = day;
    }

    void DateTime::SetHours(int hours) {
        Hours = hours;
    }

    void DateTime::SetMinutes(int minutes) {
        Minutes = minutes;
    }

    void DateTime::SetSeconds(int seconds) {
        Seconds = seconds;
    }

    void DateTime::SetMilliseconds(int milliseconds) {
        Milliseconds = milliseconds;
    }

    void DateTime::AddYear(int year) {
        Year += year;
    }

    void DateTime::AddMonth(int month) {
        Month += month;
    }

    void DateTime::AddDay(int day) {
        Day += day;
    }

    void DateTime::AddHours(int hours) {
        Hours += hours;
    }

    void DateTime::AddMinutes(int minutes) {
        Minutes += minutes;
    }

    void DateTime::AddSeconds(int seconds) {
        Seconds += seconds;
    }

    void DateTime::AddMilliseconds(int milliseconds) {
        Milliseconds += milliseconds;
    }

    int DateTime::GetYear() {
        return Year;
    }

    int DateTime::GetMonth() {
        return Month;
    }

    int DateTime::GetDay() {
        return Day;
    }

    int DateTime::GetHours() {
        return Hours;
    }

    int DateTime::GetMinutes() {
        return Minutes;
    }

    int DateTime::GetSeconds() {
        return Seconds;
    }

    int DateTime::GetMilliseconds() {
        return Milliseconds;
    }

    std::string DateTime::ToString(int type, char d = '.', char t = ':') const {
        _pub_osstream.clear();
        switch (type) {
            case 0:
                return "";
            case 1:
                _pub_osstream << Year << d << Month << d << Day;
                return _pub_osstream.str();
            case 2:
                _pub_osstream << Month << d << Day;
                break;
            default:
                return "";
        }
    }

    std::string DateTime::ToString(std::string format) {
        return std::string("");
    }

    bool DateTime::Validate() {
        Normalize();

        //TODO: 校验时间是否合法

        return true;
    }

    void DateTime::Normalize() {
        MillisecondsOverflow();
        SecondsOverflow();
        MinutesOverflow();
        HoursOverflow();

        MonthOverflow();
    }

    void DateTime::MillisecondsOverflow() {
        auto secIncrease = Milliseconds % MillisPerSecond;
        Seconds += secIncrease;
        Milliseconds -= MillisPerSecond * secIncrease;
    }

    void DateTime::SecondsOverflow() {
        auto minIncrease = Seconds % SecondsPerMinute;
        Minutes += minIncrease;
        Seconds -= SecondsPerMinute * minIncrease;
    }

    void DateTime::MinutesOverflow() {
        auto hourIncrease = Minutes % MinutesPerHour;
        Hours += hourIncrease;
        Minutes -= MinutesPerHour * hourIncrease;
    }

    void DateTime::HoursOverflow() {
        auto dayIncrease = Hours % HoursPerDay;
        Day += dayIncrease;
        Hours -= HoursPerDay * dayIncrease;
    }

    void DateTime::MonthOverflow() {
        auto yearIncrease = Month % MonthsPerYear;
        Year += yearIncrease;
        Month -= MonthsPerYear * yearIncrease;
    }
} // Classes