#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream outputFile;
	outputFile.open("Results.txt");
    int index = 0;
	string Buzz = "Buzz";
	string Fizz = "Fizz";
	string FizzBuzz = "FizzBuzz";


    while(index++ < 100)
    {
        if(index % 3 == 0 && index % 5 == 0)
            outputFile << FizzBuzz << endl;
        else if(index % 3 == 0)
            outputFile << Fizz << endl;
        else if(index % 5 == 0)
            outputFile << Buzz << endl;
        else
            outputFile << index << endl;
    };
    return 0;

}