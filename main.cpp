#include <iostream>

using namespace std;

int main()
{
    int quant, choice;

    int qRooms = 0, qPasta = 0, qBurger = 0, qNoodles = 0, qShake = 0, qChicken = 0; // Current Inventory

    int sRooms = 0, sPasta = 0, sBurger = 0, sNoodles = 0, sShake = 0, sChicken = 0; // Sold Items

    int tRooms = 0, tPasta = 0, tBurger = 0, tNoodles = 0, tShake = 0, tChicken = 0; // Total Items

    cout << "\n\t Quantity of Items We Have";
    cout << "\n Rooms Availabe :";
    cin >> qRooms;
    cout << "\n Pasta Available :";
    cin >> qPasta;
    cout << "\n Burgers Available :";
    cin >> qBurger;
    cout << "\n Noodles Available :";
    cin >> qNoodles;
    cout << "\n Shake Available :";
    cin >> qShake;
    cout << "\n Chicken Available :";
    cin >> qChicken;

m:
    cout << "\n\t\t\t Please Select from the Menu";
    cout << "\n\n 1) Rooms";
    cout << "\n 2) Pasta";
    cout << "\n 3) Burger";
    cout << "\n 4) Noodles";
    cout << "\n 5) Shake";
    cout << "\n 6) Chicken";
    cout << "\n 7) Information Regarding Sales and Collections";
    cout << "\n 8) Exit";

    cout << "\n\n Please Enter Your Choice!!";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\n Enter Number of Rooms Required.";
        cin >> quant;
        if (qRooms - sRooms >= quant)
        {
            sRooms += quant;
            tRooms = (tRooms + quant) * 1200;
            cout << "\n\n\t\t" << quant << " room(s) have been alloted.";
        }
        else
        {
            cout << "\n\t\t Only " << qRooms - sRooms << " are vacant.";
        }
        break;
    case 2:
        cout << "\n Enter Pasta Quantity : ";
        cin >> quant;
        if (qPasta - sPasta >= quant)
        {
            sPasta += quant;
            tPasta = (tPasta + quant) * 180;
            cout << "\n\n\t\t" << quant << " pasta(s) have been ordered";
        }
        else
        {
            cout << "\n\t\t Only " << qPasta - sPasta << " pasta(s) are left";
        }
        break;
    case 3:
        cout << "\n Enter Burger Quantity : ";
        cin >> quant;
        if (qBurger - sBurger >= quant)
        {
            sBurger += quant;
            tBurger = (tBurger + quant) * 120;
            cout << "\n\n\t\t" << quant << " pasta(s) have been ordered";
        }
        else
        {
            cout << "\n\t\t Only " << qBurger - sBurger << " pasta(s) are left";
        }
        break;
    case 4:
        cout << "\n Enter Noodles Quantity : ";
        cin >> quant;
        if (qNoodles - sNoodles >= quant)
        {
            sNoodles += quant;
            tNoodles = (tNoodles + quant) * 150;
            cout << "\n\n\t\t" << quant << " noodles(s) have been ordered";
        }
        else
        {
            cout << "\n\t\t Only " << qNoodles - sNoodles << " noodles(s) are left";
        }
        break;
    case 5:
        cout << "\n Enter Shakes Quantity : ";
        cin >> quant;
        if (qShake - sShake >= quant)
        {
            sShake += quant;
            tShake = (tShake + quant) * 100;
            cout << "\n\n\t\t" << quant << " shake(s) have been ordered";
        }
        else
        {
            cout << "\n\t\t Only " << qShake - sShake << " shake(s) are left";
        }
        break;
    case 6:
        cout << "\n Enter Chicken Quantity : ";
        cin >> quant;
        if (qChicken - sChicken >= quant)
        {
            sChicken += quant;
            tChicken = (tChicken + quant) * 120;
            cout << "\n\n\t\t" << quant << " chicken(s) have been ordered";
        }
        else
        {
            cout << "\n\t\t Only " << qChicken - sChicken << " chicken(s) are left";
        }
        break;
    case 7:
        cout << " \n\t Details of Sales and Collections \n\t\t";

        cout << "\n No. of Rooms we had : " << qRooms;
        cout << "\n No. of Rooms sold : " << sRooms;
        cout << "\n Remaining Rooms : " << qRooms - sRooms;
        cout << "\n Total Collections : " << tRooms;

        cout << "\n No. of Pasta we had : " << qPasta;
        cout << "\n No. of Pasta sold : " << sPasta;
        cout << "\n Remaining Pasta : " << qPasta - sPasta;
        cout << "\n Total Collections : " << tPasta;

        cout << "\n No. of Burgers we had : " << qBurger;
        cout << "\n No. of Burgers sold : " << sBurger;
        cout << "\n Remaining Burgers : " << qBurger - sBurger;
        cout << "\n Total Collections : " << tBurger;

        cout << "\n No. of Noodles  we had : " << qNoodles;
        cout << "\n No. of Noodles sold : " << sNoodles;
        cout << "\n Remaining Noodles : " << qNoodles - sNoodles;
        cout << "\n Total Collections : " << tNoodles;

        cout << "\n No. of Shakes we had : " << qShake;
        cout << "\n No. of Shakes sold : " << sShake;
        cout << "\n Remaining Shakes : " << qShake - sShake;
        cout << "\n Total Collections : " << tShake;

        cout << "\n No. of Chickens we had : " << qChicken;
        cout << "\n No. of Chicken sold : " << sChicken;
        cout << "\n Remaining Chicken : " << qChicken - sChicken;
        cout << "\n Total Collections : " << tChicken;

    case 8:
        exit(0);

    default:
        cout << "Not a valid operation";
    }
    goto m;
}
