/// Simple Restaurant Selector program 
// Purpose of this program is to help 
// choosing restaurants for the user's based on their 
// dietary restrictions. 
#include <iostream>
#include <string> 

using namespace std;

int main()
{
    string vegetarian, vegan, gluten_free; 
    cout << "Is anyone in your party a vegetarian? " << endl; 
    cin >> vegetarian; 
    
    if (vegetarian == "yes" || vegetarian == "no")
    {
        cout << "Is anyone in your party a vegan? " << endl; 
        cin >> vegan; 
        if (vegan == "yes" || vegan == "no")
        {
            cout << "Is anyone in your party gluten-free? " << endl; 
            cin >> gluten_free; 
            if (gluten_free == "yes" || gluten_free == "no")
            {
                cout << endl; 
                cout << "Here are your restaurant choices: " << endl; 
                if (vegetarian == "yes")
                {
                    if (vegan == "yes")
                    {
                        if (gluten_free == "yes")
                        {
                           cout << "   Corner Cafe\n";
                           cout << "   The Chef's Kitchen\n";
                        }
                        else 
                        {
                           cout << "   Corner Cafe\n";
                           cout << "   The Chef's Kitchen\n";
                        }
                    }
                    else 
                    {
                        if (gluten_free == "yes")
                        {
                            cout << "   Main Street Pizza Company\n";
                            cout << "   Corner Cafe\n";
                            cout << "   The Chef's Kitchen\n";
                        }
                        else 
                        {
                            cout << "   Main Street Pizza Company\n";
                            cout << "   Corner Cafe\n";
                            cout << "   Mama's Fine Italian\n";
                            cout << "   The Chef's Kitchen\n";
                        }
                    }
                }
                else 
                {
                    if (vegan == "yes")
                    {
                        if (gluten_free == "yes")
                        {
                            cout << "   Corner Cafe\n";
                            cout << "   The Chef's Kitchen\n";
                        }
                        else 
                        {
                           cout << "   Corner Cafe\n";
                           cout << "   The Chef's Kitchen\n";
                        }
                    }
                    else 
                    {
                        if (gluten_free == "yes")
                        {
                            cout << "   Main Street Pizza Company\n";
                            cout << "   Corner Cafe\n";
                            cout << "   The Chef's Kitchen\n";
                        }
                        else 
                        {
                            cout << "   Joe's Gourmet Burgers\n";
                            cout << "   Main Street Pizza Company\n";
                            cout << "   Corner Cafe\n";
                            cout << "   Mama's Fine Italian\n";
                            cout << "   The Chef's Kitchen\n";
                        }
                    }
                }
            }
            else 
            {
                cout << "Please enter only yes or no as your responses!" << endl; 
            }
        }
        else 
        {
            cout << "Please enter only yes or no as your responses!" << endl; 
        }
    }
    else 
    {
        cout << "Please enter only yes or no as your responses!" << endl; 
    }
    return 0;
}
