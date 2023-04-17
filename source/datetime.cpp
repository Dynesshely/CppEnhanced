//
// Created by Dynesshely on 2023.02.05.
// Changed by ChenPi11 on 2023.03.05.
//

#include <datetime.hpp>

namespace CppEnhanced
{
    namespace Classes
    {
        std::ostringstream _pub_osstream;

        void DateTime::SetYear(int year) noexcept {
            Year = year;
        }

        void DateTime::SetMonth(int month) noexcept {
            Month = month;
        }

        void DateTime::SetDay(int day) noexcept {
            Day = day;
        }

        void DateTime::SetHours(int hours) noexcept {
            Hours = hours;
        }

        void DateTime::SetMinutes(int minutes) noexcept {
            Minutes = minutes;
        }

        void DateTime::SetSeconds(int seconds) noexcept {
            Seconds = seconds;
        }

        void DateTime::SetMilliseconds(int milliseconds) noexcept {
            Milliseconds = milliseconds;
        }

        void DateTime::AddYear(int year) noexcept {
            Year += year;
        }

        void DateTime::AddMonth(int month) noexcept {
            Month += month;
        }

        void DateTime::AddDay(int day) noexcept {
            Day += day;
        }

        void DateTime::AddHours(int hours) noexcept {
            Hours += hours;
        }

        void DateTime::AddMinutes(int minutes) noexcept {
            Minutes += minutes;
        }

        void DateTime::AddSeconds(int seconds) noexcept {
            Seconds += seconds;
        }

        void DateTime::AddMilliseconds(int milliseconds) noexcept {
            Milliseconds += milliseconds;
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
            return "";//avoid gcc -Wreturn-type warning
        }
#warning DateTime::ToString(std::string format) unrealized
        std::string DateTime::ToString(std::string format) {
            return std::string("");
        }
#warning DateTime::ToString(std::wstring format) unrealized
        std::wstring DateTime::ToString(std::wstring format)
        {
            //TODO:to wstring
            return L"";
        }
#warning DateTime::Validate() unrealized
        bool DateTime::Validate() {
            Normalize();

            //TODO: 校验时间是否合法

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
    } // Classes
}