/* -------- CANTEEN MENU --------
    1. Pizza       Rs. 10.50
    2. Burger      Rs. 8.25
    3. Sandwich    Rs. 5.00
    4. Coffee      Rs. 4.00
    5. Tea         Rs. 2.50
    6. Exit & Generate Bill
------------------------------- */

#include <iostream>
#include <iomanip>     
using namespace std;
int main()
{
    int choice, quantity;
    float total = 0;
       cout << "-------- CANTEEN MENU --------" << endl;
        cout << " 1. Pizza       Rs. 10.50" << endl;
        cout << " 2. Burger      Rs. 8.25" << endl;
        cout << " 3. Sandwich    Rs. 5.00" << endl;
        cout << " 4. Coffee      Rs. 4.00" << endl;
        cout << " 5. Tea         Rs. 2.50" << endl;
        cout << " 6. Exit & Generate Bill" << endl;
        cout << "-------------------------------" << endl
             << endl;

    do
    {
     

        cout << "\tEnter the choice for food: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\t\tEnter quantity for Pizza: ";
            cin >> quantity;
            total += 10.50 * quantity;
            break;

        case 2:
            cout << "\t\tEnter quantity for Burger: ";
            cin >> quantity;
            total += 8.25 * quantity;
            break;

        case 3:
            cout << "\t\tEnter quantity for Sandwich: ";
            cin >> quantity;
            total += 5.00 * quantity;
            break;

        case 4:
            cout << "\t\tEnter quantity for Coffee: ";
            cin >> quantity;
            total += 4.00 * quantity;
            break;

        case 5:
            cout << "\t\tEnter quantity for Tea: ";
            cin >> quantity;
            total += 2.50 * quantity;
            break;
        case 6:
            cout << "\n\nExiting and generating bill..." << endl;
            cout << "Total Bill: Rs. " << fixed << setprecision(2) << total << endl;
            break;

        default:
            cout<<"\t\t\n\n"<<"enter the right choise not wrong"<<endl<<"\t\t\n\n";
            break;
        }
    } while (choice != 6);

    float gst = total * 0.05;
    float finalAmount = total + gst;

    cout << fixed << setprecision(2);
    cout << "-------------------------------" << endl;
    cout << "Total: Rs. " << total << endl;
    cout << "GST (5%): Rs. " << gst << endl;
    cout << "Final Bill: Rs. " << finalAmount << endl;
    cout << "-------------------------------" << endl;

    return 0;
}