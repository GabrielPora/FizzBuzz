#include <iostream>

int     main(int argc, char **argv)
{
    int index = 0;
	std::string Buzz = "Buzz";
	std::string Fizz = "Fizz";
	std::string FizzBuzz = "FizzBuzz";


    while(index++ < 100)
    {
        if(index % 3 == 0 && index % 5 == 0)
            std::cout << FizzBuzz << std::endl;
        else if(index % 3 == 0)
            std::cout << Fizz << std::endl;
        else if(index % 5 == 0)
            std::cout << Buzz << std::endl;
        else
            std::cout << index << std::endl;
    };
    return 0;
}
