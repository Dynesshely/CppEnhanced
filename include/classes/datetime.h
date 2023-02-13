//
// Created by Dynesshely on 2023.02.05.
//

#ifndef CPPENHANCED_DATETIME_H
#define CPPENHANCED_DATETIME_H

#include <string>
#include <sstream>

//  Port of CSharp DateTime, Referenced in
//  https://referencesource.microsoft.com/#mscorlib/system/datetime.cs
namespace CppEnhanced::Classes {

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

    class DateTime {
    private:
        // Number of 100ns ticks per time unit
        const long TicksPerMillisecond = 10000;
        const long TicksPerSecond = TicksPerMillisecond * 1000;
        const long TicksPerMinute = TicksPerSecond * 60;
        const long TicksPerHour = TicksPerMinute * 60;
        const long TicksPerDay = TicksPerHour * 24;

        // Number of milliseconds per time unit
        const int MillisPerSecond = 1000;
        const int MillisPerMinute = MillisPerSecond * 60;
        const int MillisPerHour = MillisPerMinute * 60;
        const int MillisPerDay = MillisPerHour * 24;

        // Number of seconds per time unit
        const int SecondsPerMinute = 60;

        // Number of minutes per time unit
        const int MinutesPerHour = 60;

        // Number of hours per time unit
        const int HoursPerDay = 24;

        // Number of months per time unit
        const int MonthsPerYear = 12;

        // Number of days in a non-leap year
        const int DaysPerYear = 365;
        // Number of days in 4 years
        const int DaysPer4Years = DaysPerYear * 4 + 1;       // 1461
        // Number of days in 100 years
        const int DaysPer100Years = DaysPer4Years * 25 - 1;  // 36524
        // Number of days in 400 years
        const int DaysPer400Years = DaysPer100Years * 4 + 1; // 146097

        // Number of days from 1/1/0001 to 12/31/1600
        const int DaysTo1601 = DaysPer400Years * 4;          // 584388
        // Number of days from 1/1/0001 to 12/30/1899
        const int DaysTo1899 = DaysPer400Years * 4 + DaysPer100Years * 3 - 367;
        // Number of days from 1/1/0001 to 12/31/1969
        const int DaysTo1970 = DaysPer400Years * 4 + DaysPer100Years * 3
                               + DaysPer4Years * 17 + DaysPerYear; // 719,162
        // Number of days from 1/1/0001 to 12/31/9999
        const int DaysTo10000 = DaysPer400Years * 25 - 366;  // 3652059

        const long MinTicks = 0;
        const long MaxTicks = DaysTo10000 * TicksPerDay - 1;
        const long MaxMillis = (long) DaysTo10000 * MillisPerDay;

        const long FileTimeOffset = DaysTo1601 * TicksPerDay;
        const long DoubleDateOffset = DaysTo1899 * TicksPerDay;
        // The minimum OA date is 0100/01/01 (Note it's year 100).
        // The maximum OA date is 9999/12/31
        const long OADateMinAsTicks = (DaysPer100Years - DaysPerYear) * TicksPerDay;
        // All OA dates must be greater than (not >=) OADateMinAsDouble
        const double OADateMinAsDouble = -657435.0;
        // All OA dates must be less than (not <=) OADateMaxAsDouble
        const double OADateMaxAsDouble = 2958466.0;

        const int DatePartYear = 0;
        const int DatePartDayOfYear = 1;
        const int DatePartMonth = 2;
        const int DatePartDay = 3;

        int Year = 2000;
        int Month = 1;
        int Day = 1;
        int Hours = 0;
        int Minutes = 0;
        int Seconds = 0;
        int Milliseconds = 0;

        void MillisecondsOverflow();
        void SecondsOverflow();
        void MinutesOverflow();
        void HoursOverflow();

        void MonthOverflow();
    public:
        void SetYear(int year);

        void SetMonth(int month);

        void SetDay(int day);

        void SetHours(int hours);

        void SetMinutes(int minutes);

        void SetSeconds(int seconds);

        void SetMilliseconds(int milliseconds);

        void AddYear(int year);

        void AddMonth(int month);

        void AddDay(int day);

        void AddHours(int hours);

        void AddMinutes(int minutes);

        void AddSeconds(int seconds);

        void AddMilliseconds(int milliseconds);

        int GetYear();

        int GetMonth();

        int GetDay();

        int GetHours();

        int GetMinutes();

        int GetSeconds();

        int GetMilliseconds();

        [[nodiscard]] std::string ToString(int type, char d, char t) const;

        std::string ToString(std::string format);

        bool Validate();

        void Normalize();
    };

} // Classes

#endif //CPPENHANCED_DATETIME_H
