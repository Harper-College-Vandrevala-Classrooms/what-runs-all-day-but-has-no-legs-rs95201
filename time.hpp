#ifndef TIMER_HPP
#define TIMER_HPP
#include <ctime>
class Timer
{
private:
    time_t start, stop, elapsed;
    bool is_running;

public:
    Timer();

    void start_time();  
    void stop_time();   
    time_t elapsed_time();
    void wait_for_few_seconds();
    long get_the_system_time() const;
};
#endif
