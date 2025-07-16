#include "Timer.h"
#include "utils.h"
#include "string"

Timer::Timer(const std::string &algorithmName, std::function<void()> algorithm)
{
    m_algorithmName = algorithmName;
    m_start = getTime();
    algorithm;
}

Timer::~Timer()
{
    m_finish = std::chrono::high_resolution_clock::now();

    std::chrono::milliseconds deltaT = getDeltaTime();
    std::string benchmark;
    benchmark += "Time Elapsed for " + m_algorithmName + ": " + std::to_string(deltaT.count()) + " ms\n";

    utils::consoleLog(benchmark);
}

std::chrono::time_point<std::chrono::high_resolution_clock> Timer::getTime()
{
    return std::chrono::high_resolution_clock::now();
}

std::chrono::milliseconds Timer::getDeltaTime()
{
    return std::chrono::duration_cast<std::chrono::milliseconds>(m_finish - m_start);
}
