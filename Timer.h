#include <functional>
#include <chrono>

class Timer
{
public:
    Timer(const std::string& algorithmName, std::function<void()> algorithm);
    ~Timer();
private:
    std::string m_algorithmName;
    std::chrono::time_point<std::chrono::high_resolution_clock> m_start;
    std::chrono::time_point<std::chrono::high_resolution_clock> m_finish;

    std::chrono::time_point<std::chrono::high_resolution_clock> getTime();
    std::chrono::milliseconds getDeltaTime();
};