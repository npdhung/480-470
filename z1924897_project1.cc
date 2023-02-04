#include <iostream>
#include <fstream>
#include <string>
using namespace std;




int main()
{
    fstream newfile;
    string tp1;
    string path;
    path = "/proc/sys/kernel/ostype";
    newfile.open(path,ios::in); //open a file to perform read operation using file object
    if (newfile.is_open())
    {   //checking whether the file is open
        string tp;
        while(getline(newfile, tp))
        {  //read data from file object and put it into string.
            cout << tp << "\n";   //print the data of the string
            tp1 = tp;
        }
        newfile.close();   //close the file object.
    }

    cout << "A: Question about turing's OS:" << endl;
    cout << "1. The type of turing's OS is " << tp1 << endl;

    return 0;
}