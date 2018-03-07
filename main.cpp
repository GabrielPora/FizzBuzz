#include <iostream>
using namespace std;

int     main(int argc, char **argv)
{
    int index = 0;
	string Buzz = "Buzz";
	string Fizz = "Fizz";
	string FizzBuzz = "FizzBuzz";


    while(index++ < 100)
    {
        if(index % 3 == 0 && index % 5 == 0)
            cout << FizzBuzz << endl;
        else if(index % 3 == 0)
            cout << Fizz << endl;
        else if(index % 5 == 0)
            cout << Buzz << endl;
        else
            cout << index << endl;
    };
    return 0;
}
