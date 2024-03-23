

#include <iostream>
using namespace std;

int main ()
{
    /*
        Variables 
            int
            string
            char
            bool
    */

    // defining  int variables
    int age = 20; // this is variable
    int Total_Amount = 2000000; // this is variable
    cout << endl; cout << endl;cout << endl;
    // printing them on the screen
    cout << age << endl;
    cout << Total_Amount << endl;

    // printing empty space
    cout << endl;cout << endl; cout << endl;



    // defining  string variables
    string name = "DAPHINE"; // this is variable
    string title = "Soft Ware Developer"; // this is variable
    char aka = 'D'; // this is variable

    string name_speaking = "My Name Is :: ";
    string aka_speaking = "Also Known As ";
    string title_speaking = "I am a :: ";
    string description_speaking = "I Develop Web Sites, Mobile Application and Custom Software ";
    string language_speaking = "Using C++ Language, Hire Me Now ";
    string end_speaking = "***************************";


     // printing them on the screen
    cout << name << endl;
    cout << title << endl;

    // printing empty space
    cout << endl;cout << endl; cout << endl;

    // joining variables together and printing them  on the same line
    cout << "++++++++++++++++++++++++++++++++++++"<< endl;
    cout << name_speaking << name << endl;
    cout << endl;
    cout << aka_speaking << aka << endl;
    cout << endl;
    cout << title_speaking << title << endl;
    cout << endl;
    cout << description_speaking << endl;
    cout << endl;
    cout << language_speaking << endl;
    cout << endl;
    cout << end_speaking << endl;

    cout << endl;cout << endl;cout << endl;



    return 0;
}