#pragma once
#include <iostream>
#include <chrono>
#include <stdlib.h>
#include <stdio.h>


class Timer {
    public : 
        Timer();
        ~Timer() ;
    
    private : 
        std::chrono::steady_clock::time_point init_time;

};

