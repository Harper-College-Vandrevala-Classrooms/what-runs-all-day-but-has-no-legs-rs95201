#include <iostream>
#include "time.hpp"

void Timer::start()
{
    time_t start_time = time(nullptr);  
}

void Timer::stop()
{
    time_t end_time = time(nullptr); 
}

double Timer::elapsed()
{
    return difftime(end_time, start_time);
}

void Timer::get_the_system_time()
{
    constexpr short sec_per_min = 60,
                  min_per_hour = 60,
                    sec_per_hour = sec_per_min * min_per_hour, 
                    hrs_per_day = 24;
    constexpr long sec_per_day = static_cast<long>(sec_per_hour) * hrs_per_day;

    long sec_today = time(nullptr) % sec_per_day;

    short hour = static_cast<short>(sec_today / sec_per_hour),
          sec_not_hour = static_cast<short>(sec_today % sec_per_hour),
          min = sec_not_hour / sec_per_min,
          sec = sec_not_hour % sec_per_min;

    std::cout << "The time now is " << hour << ':';
    std::cout.fill('0');
    std::cout.width(2);
    std::cout << min << ':';
    std::cout.width(2);
    std::cout << sec << ".\n";
}

void Timer::wait_for_a_few_seconds()
{
    time_t wait_until = time(nullptr) + 5; 
    while (time(nullptr) < wait_until)
    {
    }
}

double Timer::compare_the_times()
{
    return difftime(end_time, start_time);
}
