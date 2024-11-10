#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>
#include <cstdlib>  

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
    void get_the_system_time() const;
    void wait_for_few_seconds();
};