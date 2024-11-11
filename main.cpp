int main()
{
    Timer timer;
   
    timer.start_time();
    std::cout << "Started Timer" << std::endl;

    long system_time_starts = timer.get_the_systemTime();
    std::cout << "System time at start: " << system_time_starts << std::endl;

    timer.wait_for_few_seconds();  
    timer.stop_time(); 
    std::cout << "Stopped Timer" << std::endl;
    long system_time_stops = timer.get_the_systemTime(); 
    std::cout << "System time at stop: " << system_time_stops << std::endl;
    long compare = system_time_stops - system_time_starts;
    std::cout << "Time difference (system time): " << compare << " seconds" << std::endl;

    time_t elapsed_time = timer.elapsed_time();  
    std::cout << "Elapsed time according to timer: " << elapsed_time << " seconds." << std::endl;
    
    if(elapsed_time == compare)
    {
        std::cout << "The difference in time is same" << std::endl;
    }
    else
    {
        std::cout << "The difference in time is not the same" << std::endl;
    }
    assert(elapsed_time == 3 && compare == 3);  
    std::cout << "All assertions passed" << std::endl;

    return 0;
}
