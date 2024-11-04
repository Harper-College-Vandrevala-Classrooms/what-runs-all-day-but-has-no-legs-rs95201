#include <iostream>
#include <cassert>
#include "time.hpp"

int main() {
Timer timer;
  timer.get_the_system_time();
  timer.start();
  timer.wait_for_a_few_seconds();
  timer.stop();
  timer.get_the_system_time();

  std::cout << "Elapsed time: " << timer.compare_the_times() << " seconds." <<
  std::endl;
  double elapsed_time = timer.compare_the_times();
  assert(elapsed_time == 5);
  
 std::cout << "All assertions passed" << std:: endl;
  return 0;
}


