#include <iostream>
using namespace std;
int main()
{

    // We couldn't print the spaced name as it was taking it as sentece so we have some functions in cpp

    string name;
    cout << "Enter a valid name here";
    getline(cin, name);
    cout << "Entered name is " << name;
}