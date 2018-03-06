#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#include <iostream>
#include <ios>
#include <streambuf>
#include <istream>
#include <ostream>
 
namespace std {
 
    extern istream cin;
    extern ostream cout;
    extern ostream cerr;
    extern ostream clog;
 
    extern  wistream wcin;
    extern  wostream wcout;
    extern  wostream wcerr;
    extern  wostream wclog;
 
}

char *convert_to_uppercase(char *textinput)
{
    int index = -1;
    while(textinput[++index])
        textinput[index] = toupper(textinput[index]);
    return textinput;
}

int     main(int argc, char **argv)
{
    std::string outputstring = "";
    int index = 0;

    if (argc == 1)
    {
        outputstring = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    else
    {
        while (index++ < argc - 1)
            outputstring = outputstring + convert_to_uppercase(argv[index]);
    }

    while(index++ <= 100)
    {
        if(index % 3 == 0 && index % 5 == 0)
            cout << "FizzBuzz" <<endl;
        cout << outputstring << endl;
        index++;
    }
    return 0;
}
