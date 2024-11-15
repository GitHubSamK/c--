#include <iostream>
#include <string>
using namespace std;

int main()
{

    cout << "Welcome Sams cuisine. Please make a food item selection from below:" << endl;

    int sum = 0;
    char numChosen = '0';

    while (numChosen != 'd' && numChosen != 'D')
    {

        cout << "1. Cheeseburger, 3 dollars" << endl;
        cout << "2. Fries, 2 dollars" << endl;
        cout << "3. Milkshake, 2 dollars" << endl;
        cout << "4. Soda, 1 dollar" << endl;
        cout << "or type D to finish" << endl;

        cout << "Input your choice of food item by entering its corresponding menu item number or enter D to finish ordering" << endl;

        cin >> numChosen;

        if (numChosen == '1')
        {
            cout << "You have ordered item 1:Cheesburger." << endl;
            sum = sum + 3;
        }
        else if (numChosen == '2')
        {
            cout << "You have chosen item number 2:Fries" << endl;
            sum = sum + 2;
        }
        else if (numChosen == '3')
        {
            cout << "You have chosen item number 3:Milkshake" << endl;
            sum = sum + 2;
        }
        else if (numChosen == '4')
        {
            cout << "You have chosen item number 4:Soda" << endl;
            sum = sum + 1;
        }
        else if (numChosen == 'D' || numChosen == 'd')
        {
            cout << "Thanks for coming! Your total is $" << sum << "." << endl;
        }

        else
        {
            cout << "You have made an invalid food item choice" << endl;
        }
    }

    return 0;
}
