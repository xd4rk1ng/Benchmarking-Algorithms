#include <iostream>
#include <windows.h>
#include "Timer.h"
#include "utils.h"
void testingAlg()
{
    // int array[100];
    // for (size_t i = 0; i < 100; i++)
    // {
    //     array[i]=i;
    // }
    Sleep(2000);
    
}


int main()
{
    {
        std::string testName = "Testing Algorithm";
        Timer test(testName, testingAlg);

    }

    return 0;

}