#include <iostream>
#include "lib/Activation.hpp"

int main()
{
    Activation test = Activation();
    if (test.getStatus() == false)
    {
        test.verifActivation();
    }
    if (test.getPoint() > 0)
    {

        if (test.getStatus() == true)
        {
            std::cout << "Hello world" << std::endl;
        }
        else
        {
            std::cout << "Hello (tryal mode)" << std::endl;
        }
    }
    else
    {
        std::cout << "Acheter la licence" << std::endl;
    }
    return 0;
}