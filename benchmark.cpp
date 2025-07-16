#include <iostream>
#include <string>

void consoleLog(const std::string& consoleOutput)
{
    std::cout << consoleOutput;
}

int main()
{
    consoleLog("Hello World!");
    return 0;

}