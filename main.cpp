#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> numbersList;
    bool quit{0};
    char choice{};

    do
    {

        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 'p':
        case 'P':

            if (numbersList.size() == 0)
            {
                cout << "List is empty" << endl;
            }
            else
            {
                cout << "[ ";
                for (int i = 0; i < numbersList.size(); i++)
                {
                    cout << numbersList[i] << " ";
                }
                cout << "]" << endl;
            }
            break;
        case 'A':
        case 'a':
            cout << "Enter intiger to add to list: " << endl;
            cin >> choice;
            numbersList.push_back(choice);
            break;
        case 'M':
        case 'm':
        {
            if (numbersList.size() == 0)
            {
                cout << "List is empty" << endl;
            }
            else
            {

                double mean{0};

                cout << "The mean is: " << endl;
                for (int i = 0; i < numbersList.size(); i++)
                {
                    mean += numbersList[i];
                }
                cout << mean / numbersList.size() << endl;
            }
            break;
        }
        case 'S':
        case 's':
        {
            if (numbersList.size() == 0)
            {
                cout << "List is empty" << endl;
            }
            else
            {

                int smallest{numbersList[0]};
                for (int i = 0; i < numbersList.size(); i++)
                {
                    if (numbersList[i] < smallest)
                    {
                        smallest = numbersList[i];
                    }
                }
                cout << "The smallest number is: "
                     << smallest << endl;
            }
            break;
        }
        case 'L':
        case 'l':
        {
            int largest{numbersList[0]};
            if (numbersList.size() == 0)
            {
                cout << "List is empty" << endl;
            }
            else
            {
                for (int i = 0; i < numbersList.size(); i++)
                {
                    if (numbersList[i] > largest)
                    {
                        largest = numbersList[i];
                    }
                }
                cout << "The largest number is: "
                     << largest << endl;
            }
            break;
        }
        case 'Q':
        case 'q':
            cout << "Good Bye" << endl;
            quit = 1;
            break;
        default:
            cout
                << "Invalid choice!!"
                << endl;
        }
    } while (!quit);

    return 0;
}