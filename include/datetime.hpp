#ifndef CPPENHANCED_DATETIME_H
#define CPPENHANCED_DATETIME_H

#include <string>
#include <sstream>

#include "cppfecs.hpp"

//  Port of CSharp DateTime, Referenced in
//  https://referencesource.microsoft.com/#mscorlib/system/datetime.cs

namespace CppEnhanced {

    enum DateTimeExpressType {
        Empty = 0,    //
        LongDate = 1,    //  2023.02.05
        ShortDate = 2,    //  02.05
        LongTime = 3,    //  19:32:07
        ShortTime = 4,    //  19:32
        LongDateTime = 5,    //  2023.02.05 19:32:07
        ShortDateTime = 6,    //  02.05 19:32
        LongDateWithDay = 7,    //  2023.02.05 Sunday
        ShortDateWithDay = 8,    //  02.05 Sunday
        LongDateTimeWithDay = 9,    //  2023.02.05 19:32:07 Sunday
        ShortDateTimeWithDay = 10,   //  02.05 19:32 Sunday
        //  Take chinese culture for example.
        LongLocalDate = 11,   //  2023 年 2 月 5 日
        ShortLocalDate = 12,   //  2 月 5 日
        LongLocalTime = 13,   //  19 时 32 分 7 秒
        ShortLocalTime = 14,   //  19 时 32 分
        LongLocalDateTime = 15,   //  2023 年 2 月 5 日 19 时 32 分 7 秒
        ShortLocalDateTime = 16,   //  2 月 5 日 19 时 32 分
        LongLocalDateWithDay = 17,   //  2023 年 2 月 5 日 星期日
        ShortLocalDateWithDay = 18,   //  2 月 5 日 星期日
        LongLocalDateTimeWithDay = 19,   //  2023 年 2 月 5 日 19 时 32 分 7 秒 星期日
        ShortLocalDateTimeWithDay = 20,   //  2 月 5 日 19 时 32 分 星期日
    };

    class __declspec(dllexport) DateTime {

    private:
        // Number of 100ns ticks per time unit
        static constexpr const long TicksPerMillisecond = 10000;
        static constexpr const long TicksPerSecond = TicksPerMillisecond * 1000;
        static constexpr const long TicksPerMinute = TicksPerSecond * 60;
        static constexpr const long TicksPerHour = TicksPerMinute * 60;
        static constexpr const long TicksPerDay = TicksPerHour * 24;

        // Number of milliseconds per time unit
        static constexpr const int MillisPerSecond = 1000;
        static constexpr const int MillisPerMinute = MillisPerSecond * 60;
        static constexpr const int MillisPerHour = MillisPerMinute * 60;
        static constexpr const int MillisPerDay = MillisPerHour * 24;

        // Number of seconds per time unit
        static constexpr const int SecondsPerMinute = 60;

        // Number of minutes per time unit
        static constexpr const int MinutesPerHour = 60;

        // Number of hours per time unit
        static constexpr const int HoursPerDay = 24;

        // Number of months per time unit
        static constexpr const int MonthsPerYear = 12;

        // Number of days in a non-leap year
        static constexpr const int DaysPerYear = 365;
        // Number of days in 4 years
        static constexpr const int DaysPer4Years = DaysPerYear * 4 + 1;       // 1461
        // Number of days in 100 years
        static constexpr const int DaysPer100Years = DaysPer4Years * 25 - 1;  // 36524
        // Number of days in 400 years
        static constexpr const int DaysPer400Years = DaysPer100Years * 4 + 1; // 146097

        // Number of days from 1/1/0001 to 12/31/1600
        static constexpr const int DaysTo1601 = DaysPer400Years * 4;          // 584388
        // Number of days from 1/1/0001 to 12/30/1899
        static constexpr const int DaysTo1899 = DaysPer400Years * 4 + DaysPer100Years * 3 - 367;
        // Number of days from 1/1/0001 to 12/31/1969
        static constexpr const int DaysTo1970 = DaysPer400Years * 4 + DaysPer100Years * 3
            + DaysPer4Years * 17 + DaysPerYear; // 719,162
        // Number of days from 1/1/0001 to 12/31/9999
        static constexpr const int DaysTo10000 = DaysPer400Years * 25 - 366;  // 3652059

        static constexpr const long MinTicks = 0;
        static constexpr const long MaxTicks = DaysTo10000 * TicksPerDay - 1;
        static constexpr const long MaxMillis = (long)DaysTo10000 * MillisPerDay;

        static constexpr const long FileTimeOffset = DaysTo1601 * TicksPerDay;
        static constexpr const long DoubleDateOffset = DaysTo1899 * TicksPerDay;
        // The minimum OA date is 0100/01/01 (Note it's year 100).
        // The maximum OA date is 9999/12/31
        static constexpr const long OADateMinAsTicks = (DaysPer100Years - DaysPerYear) * TicksPerDay;
        // All OA dates must be greater than (not >=) OADateMinAsDouble
        static constexpr const double OADateMinAsDouble = -657435.0;
        // All OA dates must be less than (not <=) OADateMaxAsDouble
        static constexpr const double OADateMaxAsDouble = 2958466.0;

        static constexpr const int DatePartYear = 0;
        static constexpr const int DatePartDayOfYear = 1;
        static constexpr const int DatePartMonth = 2;
        static constexpr const int DatePartDay = 3;

        int Year = 2000;
        int Month = 1;
        int Day = 1;
        int Hours = 0;
        int Minutes = 0;
        int Seconds = 0;
        int Milliseconds = 0;

        void MillisecondsOverflow() noexcept;
        void SecondsOverflow() noexcept;
        void MinutesOverflow() noexcept;
        void HoursOverflow() noexcept;

        void MonthOverflow() noexcept;

    public:
        DateTime SetYear(int year) noexcept;

        DateTime SetMonth(int month) noexcept;

        DateTime SetDay(int day) noexcept;

        DateTime SetHours(int hours) noexcept;

        DateTime SetMinutes(int minutes) noexcept;

        DateTime SetSeconds(int seconds) noexcept;

        DateTime SetMilliseconds(int milliseconds) noexcept;

        DateTime AddYear(int year) noexcept;

        DateTime AddMonth(int month) noexcept;

        DateTime AddDay(int day) noexcept;

        DateTime AddHours(int hours) noexcept;

        DateTime AddMinutes(int minutes) noexcept;

        DateTime AddSeconds(int seconds) noexcept;

        DateTime AddMilliseconds(int milliseconds) noexcept;

        int GetYear() const noexcept;

        int GetMonth() const noexcept;

        int GetDay() const noexcept;

        int GetHours() const noexcept;

        int GetMinutes() const noexcept;

        int GetSeconds() const noexcept;

        int GetMilliseconds() const noexcept;

        std::string ToString(int type, char d = '.', char t = ':') const;

        std::string ToString(std::string format) const;

        std::wstring ToString(std::wstring format) const;

        bool Validate() noexcept;

        void Normalize() noexcept;
    };
}

#endif //CPPENHANCED_DATETIME_H
