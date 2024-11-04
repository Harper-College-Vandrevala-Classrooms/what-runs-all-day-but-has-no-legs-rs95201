#include <ctime>
class Timer
{
    private:
        time_t start_time, end_time;

    public:
        void start();
        void stop();    
        double elapsed();
        void get_the_system_time();
        void wait_for_a_few_seconds();
        double compare_the_times();
};
