#include <datetime.hpp>

namespace CppEnhanced {

    std::ostringstream _pub_osstream;

    DateTime DateTime::SetYear(int year) noexcept {
        this->Year = year;
        return *this;
    }

    DateTime DateTime::SetMonth(int month) noexcept {
        this->Month = month;
        return *this;
    }

    DateTime DateTime::SetDay(int day) noexcept {
        this->Day = day;
        return *this;
    }

    DateTime DateTime::SetHours(int hours) noexcept {
        this->Hours = hours;
        return *this;
    }

    DateTime DateTime::SetMinutes(int minutes) noexcept {
        this->Minutes = minutes;
        return *this;
    }

    DateTime DateTime::SetSeconds(int seconds) noexcept {
        this->Seconds = seconds;
        return *this;
    }

    DateTime DateTime::SetMilliseconds(int milliseconds) noexcept {
        this->Milliseconds = milliseconds;
        return *this;
    }

    DateTime DateTime::AddYear(int year) noexcept {
        this->Year += year;
        return *this;
    }

    DateTime DateTime::AddMonth(int month) noexcept {
        this->Month += month;
        return *this;
    }

    DateTime DateTime::AddDay(int day) noexcept {
        this->Day += day;
        return *this;
    }

    DateTime DateTime::AddHours(int hours) noexcept {
        this->Hours += hours;
        return *this;
    }

    DateTime DateTime::AddMinutes(int minutes) noexcept {
        this->Minutes += minutes;
        return *this;
    }

    DateTime DateTime::AddSeconds(int seconds) noexcept {
        this->Seconds += seconds;
        return *this;
    }

    DateTime DateTime::AddMilliseconds(int milliseconds) noexcept {
        this->Milliseconds += milliseconds;
        return *this;
    }

    int DateTime::GetYear() const noexcept {
        return Year;
    }

    int DateTime::GetMonth() const noexcept {
        return Month;
    }

    int DateTime::GetDay() const noexcept {
        return Day;
    }

    int DateTime::GetHours() const noexcept {
        return Hours;
    }

    int DateTime::GetMinutes() const noexcept {
        return Minutes;
    }

    int DateTime::GetSeconds() const noexcept {
        return Seconds;
    }

    int DateTime::GetMilliseconds() const noexcept {
        return Milliseconds;
    }

    std::string DateTime::ToString(int type, char d, char t) const {

        _pub_osstream.clear();

        switch (type) {

            case 0:
                break;

            case 1:
                _pub_osstream << Year << d << Month << d << Day;
                break;

            case 2:
                _pub_osstream << Month << d << Day;
                break;
        }

        return _pub_osstream.str();
    }

    std::string DateTime::ToString(std::string format) const {

        // Todo: to string

        return std::string("");
    }

    std::wstring DateTime::ToString(std::wstring format) const {

        // Todo: to wstring

        return L"";
    }

    bool DateTime::Validate() noexcept {

        Normalize();

        // Todo: 校验时间是否合法

        return true;
    }

    void DateTime::Normalize() noexcept {

        MillisecondsOverflow();

        SecondsOverflow();

        MinutesOverflow();

        HoursOverflow();

        MonthOverflow();
    }

    void DateTime::MillisecondsOverflow() noexcept {

        auto secIncrease = Milliseconds % MillisPerSecond;

        Seconds += secIncrease;

        Milliseconds -= MillisPerSecond * secIncrease;
    }

    void DateTime::SecondsOverflow() noexcept {

        auto minIncrease = Seconds % SecondsPerMinute;

        Minutes += minIncrease;

        Seconds -= SecondsPerMinute * minIncrease;
    }

    void DateTime::MinutesOverflow() noexcept {

        auto hourIncrease = Minutes % MinutesPerHour;

        Hours += hourIncrease;

        Minutes -= MinutesPerHour * hourIncrease;
    }

    void DateTime::HoursOverflow() noexcept {

        auto dayIncrease = Hours % HoursPerDay;

        Day += dayIncrease;

        Hours -= HoursPerDay * dayIncrease;
    }

    void DateTime::MonthOverflow() noexcept {

        auto yearIncrease = Month % MonthsPerYear;

        Year += yearIncrease;

        Month -= MonthsPerYear * yearIncrease;
    }

}
