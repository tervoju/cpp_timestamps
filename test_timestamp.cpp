
#include <string>
#include <iostream>
#include <unistd.h>
#include <chrono>

int main()
{

    // Using time point and system_clock for monitoring speed of storing and acquisitions
    std::chrono::time_point<std::chrono::system_clock>
        start,
        end,
        prof_start,
        prof_end;
    std::chrono::time_point<std::chrono::system_clock> time_point;
    time_point = std::chrono::system_clock::now();
    std::time_t ttp = std::chrono::system_clock::to_time_t(time_point);
    std::cout << "Timestamp - Aquisition start: " << std::ctime(&ttp) << "\n";

    sleep(2);

    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t s_ttp = std::chrono::system_clock::to_time_t(end);

    std::cout << "Timestamp - Aquisition stop: " << std::ctime(&s_ttp);

    return 0;
}