#include <iostream>
#include <cassert>
#include "time.hpp"
int main()
{
    Timer timer;
   
    //timer.start_time(); 
    std::cout << "System time: " << std::endl;
    timer.get_the_system_time();
    timer.wait_for_few_seconds();  

    timer.stop_time(); 

    std::cout << "System time: " << std::endl;
    timer.get_the_system_time();

    time_t elapsed_time = timer.elapsed_time();  
    std::cout << "Elapsed time: " << elapsed_time << " seconds." << std::endl;
    assert(elapsed_time == 5);
   std::cout << "All assertions passed" << std:: endl;

    return 0;
}


