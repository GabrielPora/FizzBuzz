#include <iostream>
using namespace std;

/*
char *check_input(char *textinput)
{
    int index = -1;
    while(textinput[++index])
	{
        textinput[index] = toupper(textinput[index]);
	}
    return textinput;

	 string outputstring = "";

    if (argc == 1)
    {
        outputstring = "* Enter input of a number *";
    }
    else
    {
        while (index++ < argc - 1)
            outputstring = outputstring + check_input(argv[index]);
    }
}*/

int check_input(int numberinput)
{
     
        if(numberinput % 3 == 0 && numberinput % 5 == 0)
            cout << "FizzBuzz" << endl;
        else if(numberinput % 3 == 0)
            cout << "Fizz" << endl;
        else if(numberinput % 5 == 0)
            cout << "Buzz" << endl;
        else
            cout << numberinput << endl;
    return numberinput;
}

int     main(int argc, char **argv)
{
    int index = 0;
	string Buzz = "Buzz";
	string Fizz = "Fizz";
	string FizzBuzz = "FizzBuzz";

    int inputnumber = 0;

	cout << "* Enter input of a number *" << endl;
	cin >> inputnumber;
	while(!cin)
	{
		cout << "* Enter input of a number *" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> inputnumber;
	}
	check_input(inputnumber);

    /*while(index++ < 100)
    {
        if(index % 3 == 0 && index % 5 == 0)
            cout << FizzBuzz << endl;
        else if(index % 3 == 0)
            cout << Fizz << endl;
        else if(index % 5 == 0)
            cout << Buzz << endl;
        else
            cout << index << endl;
    };*/
    return 0;
}
