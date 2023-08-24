
#include <datetime.hpp>
#include <stdio.h>

int main() {
    auto date = CppEnhanced::DateTime()
        .SetYear(2023)
        .SetMonth(1)
        .SetDay(4)
        .SetHours(5)
        .SetMinutes(6)
        .SetSeconds(7)
        .SetMilliseconds(89)
        ;
    printf("%s\n", date.ToString(1).c_str());
    return 0;
}


