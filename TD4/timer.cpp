#include "timer.h"

    Timer::Timer () : init_time(std::chrono::high_resolution_clock::now() ) {};
    Timer::~Timer(){
        
        std::chrono::duration<double> time_diff = std::chrono::high_resolution_clock::now() - init_time ;
        std::cerr << "temps écoulé : " << time_diff.count() << " s" << std::endl ;
        

    } ;
