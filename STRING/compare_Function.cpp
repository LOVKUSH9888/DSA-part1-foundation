#include <iostream>
using namespace std;
main()
{
    string x = "Lovkush";
    string y = "Friend";
    
    if (x.compare(y) == 0)
    {
        cout << "same";
    }
    else
    {
        cout << "Different";
    }

    // Understaing find() :-

    //This will search the Index value and return it also 
    cout<<x.find("ush");

}