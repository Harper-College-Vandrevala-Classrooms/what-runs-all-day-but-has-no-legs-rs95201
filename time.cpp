#include <iostream>
#include <chrono>
#include <thread>
#include "time.hpp"
Timer::Timer() : start(0), stop(0), elapsed(0), is_running(false) {}

void Timer::start_time()
{
    if (!is_running)
    {
        start = time(nullptr);  
        is_running = true;
    }
}

void Timer::stop_time()
{
    if (is_running)
    {
        stop = time(nullptr);  
        is_running = false;    
    }
    else
    {
        std::cout << "Error: The timer has not been started!" << std::endl;
    }
}

time_t Timer::elapsed_time() 
{
    if (!is_running)
    {
        elapsed = stop - start;  
    }
    return elapsed;  
}

void Timer::wait_for_few_seconds()
{
    std::this_thread::sleep_for(std::chrono::seconds(3)); 
}
long Timer::get_the_system_time() 
{
    constexpr short sec_per_min = 60;
    constexpr short min_per_hour = 60;
    constexpr short sec_per_hour = sec_per_min * min_per_hour; 
    constexpr short hrs_per_day = 24;
    constexpr long sec_per_day = static_cast<long>(sec_per_hour) * hrs_per_day;

    long sec_today = time(nullptr) % sec_per_day;  // Get seconds for the current day

    return sec_today;
}

