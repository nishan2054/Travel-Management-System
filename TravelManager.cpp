#include <iostream>
#include <fstream>
//to show floating point value
#include <iomanip>
#include <windows.h>

using namespace std;
void menu();

class ManageMenu
{
protected:
    string userName; //hide admin name

public:
    //Constructor
    ManageMenu()
    {
        cout << "Enter your name as an Admin: ";
        cin >> userName;
        system("Cls");
        menu();

    }
    //Destructor
    ~ManageMenu(){}
};

class Customers
{
public:
    string name, gender, address;
    int age, phoneNum;
    static int customerId;
    char ever[999];
    void getDetails()
    {
        ofstream record("Cutomers.txt", ios::app);
        {
            cout << "Enter the customer ID:";
            cin >> customerId;
            cout << "Enter the Name: ";
            cin >> name;
            cout << "Enter the Age: ";
            cin >> age;
            cout << "Enter the gender: ";
            cin >>gender;
            cout << "Enter the address: ";
            cin >> address;
            cout << "Enter the phone number: ";
            cin >> phoneNum;

        }
        record << "\nCustomer ID: " << customerId << "\nName: " << name << "\nAge: " << age << "\nAge: " << age << "\nGender: " << gender << "\nAddress: "
                << address << "\nPhone number: " << phoneNum << endl;
                record.close();
                cout <<"\nNOTE: YOUR RECORDS ARE SAVED IN OUR SYSTEM" << endl;


    }
    void showDetails()
    {
        ifstream show("Customers.txt");
        {
            if(!show)
            {
                cout << "File Error!" << endl;
            }
            while(!(show.eof()))
            {
                show.getline(ever, 999);
                cout << ever << endl;
            }
             show.close();
        }
    }
};
int Customers::customerId;

class Cabs
{
 public:
     int cabChoice;
     int distance;
     float cabCharge;
     static float finalCabCharge;

     void cabDetails()
     {
         cout << "Thank you for choosing our cab service" << endl;
         cout << "\t\t\t****We have following services"<< endl;
         cout << "1. Rent a Standard Cab - $2 for 1 Mile" << endl;
         cout << "2. Rent a Luxury Cab - $5 for 1 Mile" << endl;

         cout << "Enter the service you like to take: ";
         cin >> cabChoice;
         cout << "Enter the miles your have to travel: ";
         cin >> distance;

         int hireCab;

         if(cabChoice == 1)
         {
             cabCharge = distance * 2;
             cout << "Your cab cost is: " << cabCharge << endl;
             cout << "Press 1 to hire this cab or press 2 to select another cab" << endl;
             cin >> hireCab;

             system("cls");
             if(hireCab == 1){
                finalCabCharge = cabCharge;
                cout<< "\nYour standard cab is booked" << endl;
             }
             else if(hireCab == 2)
             {
                 cabDetails();
             }
             else {
                cout << "Error!!! Redirecting to the cab option menu" << endl;
                Sleep(999);
                system("Cls");
                cabDetails();
             }
         }

         else if (cabChoice == 2)
         {
             cabCharge = distance * 5;
             cout << "Your cab cost is: " << cabCharge << endl;
             cout << "Press 1 to hire this cab or press 2 to select another cab" << endl;
             cin >> hireCab;

             system("cls");
             if(hireCab == 1){
                finalCabCharge = cabCharge;
                cout<< "\nYour luxury cab is booked" << endl;
             }
             else if(hireCab == 2)
             {
                 cabDetails();
             }
             else {
                cout << "Error!!! Redirecting to the cab option menu" << endl;
                Sleep(999);
                system("Cls");
                menu();
             }

             cout << "\nPress 1 to Redirect Main menu: ";
             cin >> hireCab;
             system("cls");
             if(hireCab == 1)
             {
                    menu();
             }

             else{
                menu();
         }
         }
     }

};

float Cabs::finalCabCharge;

class Booking
{
public :
    int choiceOfHotel;
    int hotelPackage;
    static float priceOfHotel;

    void hotels()
    {
        string hotelName[] = {"Marriot", "Hillton", "VillaHouse", "Sheraton"};
        for(int i = 0; i < 4; i++)
        {
            cout << (i+1)<<". Hotel " << hotelName[i] << endl;
        }
        cout << "Connecting with these hotels!!!" <<endl;
        cout << "Press any key to back or\nEnter the number of hotel you want to book: ";
        cin >> choiceOfHotel;
        system("Cls");

        if (choiceOfHotel == 1)
        {
            cout << "----------WELCOME TO HOTEL MARRIOT-----------\n" << endl;
            cout << "Packages available in Hotel Marriot\n" << endl;
            cout << "1. Standard Pack" << endl;
            cout << "\tBasic packages are only $50" << endl;
            cout << "2. Premium Pack" <<endl;
            cout << "\tPremium packages are available for only $100" <<endl;
            cout << "3. Luxury Pack" << endl;
            cout << "\tLuxury packages are available for only $150" <<endl;

            cout << "\nPress another key to back or\nEnter package number you want to book: ";
            cin >> hotelPackage;

            if (hotelPackage == 1){
                priceOfHotel = 50;
                cout << "\nYou have successfully booked Standard package at Hotel Marriot" << endl;
                cout << "Goto Menu and take the reciept" <<endl;
            }
            else if (hotelPackage == 2){
                priceOfHotel = 100;
                cout << "\nYou have successfully booked premium package at Hotel Marriot" << endl;
                cout << "Goto Menu and take the reciept" <<endl;
            }
            else if (hotelPackage == 3){
                priceOfHotel = 150;
                cout << "\nYou have successfully booked luxury package at Hotel Marriot" << endl;
                cout << "Goto Menu and take the reciept" <<endl;
            }
            else{
                cout << "Error!! Redirecting to previous menu \nPlease Wait!" << endl;
                Sleep(999);
                system("cls");
                hotels();
            }
            int redirectMenu;
            cout << "\nPress 1 to Redirect Main Menu: ";
            cin >> redirectMenu;
            if(redirectMenu == 1){
                menu();
            }
            else{
                menu();
            }
        }
            else if (choiceOfHotel == 2)
        {
            cout << "----------WELCOME TO HOTEL HILLTON-----------\n" << endl;
            cout << "Packages available in Hotel Hilton\n" << endl;
            cout << "1. Standard Pack" << endl;
            cout << "\tBasic packages are only $70" << endl;
            cout << "2. Premium Pack" <<endl;
            cout << "\tPremium packages are available for only $120" <<endl;
            cout << "3. Luxury Pack" << endl;
            cout << "\tLuxury packages are available for only $170" <<endl;

            cout << "\nPress another key to back or\nEnter package number you want to book: ";
            cin >> hotelPackage;

            if (hotelPackage == 1){
                priceOfHotel = 70;
                cout << "\nYou have successfully booked Standard package at Hotel Hilton" << endl;
                cout << "Goto Menu and take the reciept" <<endl;
            }
            else if (hotelPackage == 2){
                priceOfHotel = 120;
                cout << "\nYou have successfully booked premium package at Hotel Hilton" << endl;
                cout << "Goto Menu and take the reciept" <<endl;
            }
            else if (hotelPackage == 3){
                priceOfHotel = 170;
                cout << "\nYou have successfully booked luxury package at Hotel Hilton" << endl;
                cout << "Goto Menu and take the reciept" <<endl;
            }
            else{
                cout << "Error!! Redirecting to previous menu \nPlease Wait!" << endl;
                Sleep(999);
                system("cls");
                hotels();
            }
            int redirectMenu;
            cout << "\nPress 1 to Redirect Main Menu: ";
            cin >> redirectMenu;
            if(redirectMenu == 1){
                menu();
            }

            else{
                menu();
            }

        }

           else if (choiceOfHotel == 3)
        {
            cout << "----------WELCOME TO HOTEL VILLA HOUSE-----------\n" << endl;
            cout << "Packages available in Hotel Villa House\n" << endl;
            cout << "1. Standard Pack" << endl;
            cout << "\tBasic packages are only $40" << endl;
            cout << "2. Premium Pack" <<endl;
            cout << "\tPremium packages are available for only $80" <<endl;
            cout << "3. Luxury Pack" << endl;
            cout << "\tLuxury packages are available for only $130" <<endl;

            cout << "\nPress another key to back or\nEnter package number you want to book: ";
            cin >> hotelPackage;

            if (hotelPackage == 1){
                priceOfHotel = 40;
                cout << "\nYou have successfully booked Standard package at Hotel Villa House" << endl;
                cout << "Goto Menu and take the reciept" <<endl;
            }
            else if (hotelPackage == 2){
                priceOfHotel = 80;
                cout << "\nYou have successfully booked premium package at Hotel Villa House" << endl;
                cout << "Goto Menu and take the reciept" <<endl;
            }
            else if (hotelPackage == 3){
                priceOfHotel = 130;
                cout << "\nYou have successfully booked luxury package at Hotel Villa House" << endl;
                cout << "Goto Menu and take the reciept" <<endl;
            }
            else{
                cout << "Error!! Redirecting to previous menu \nPlease Wait!" << endl;
                Sleep(999);
                system("cls");
                hotels();
            }
            int redirectMenu;
            cout << "\nPress 1 to Redirect Main Menu: ";
            cin >> redirectMenu;
            if(redirectMenu == 1){
                 menu();
            }

            else{
                menu();
            }

        }

            else if (choiceOfHotel == 4)
        {
            cout << "----------WELCOME TO HOTEL SHERATON-----------\n" << endl;
            cout << "Packages available in Hotel Sheraton\n" << endl;
            cout << "1. Standard Pack" << endl;
            cout << "\tBasic packages are only $100" << endl;
            cout << "2. Premium Pack" <<endl;
            cout << "\tPremium packages are available for only $150" <<endl;
            cout << "3. Luxury Pack" << endl;
            cout << "\tLuxury packages are available for only $200" <<endl;

            cout << "\nPress another key to back or\nEnter package number you want to book: ";
            cin >> hotelPackage;

            if (hotelPackage == 1){
                priceOfHotel = 50;
                cout << "\nYou have successfully booked Standard package at Hotel Sheraton" << endl;
                cout << "Goto Menu and take the reciept" <<endl;
            }
            else if (hotelPackage == 2){
                priceOfHotel = 100;
                cout << "\nYou have successfully booked premium package at Hotel Sheraton" << endl;
                cout << "Goto Menu and take the reciept" <<endl;
            }
            else if (hotelPackage == 3){
                priceOfHotel = 150;
                cout << "\nYou have successfully booked luxury package at Hotel Sheraton" << endl;
                cout << "Goto Menu and take the reciept" <<endl;
            }
            else{
                cout << "Error!! Redirecting to previous menu \nPlease Wait!" << endl;
                Sleep(999);
                system("cls");
                hotels();
            }
            int redirectMenu;
            cout << "\nPress 1 to Redirect Main Menu: ";
            cin >> redirectMenu;
            if(redirectMenu == 1){}
                //menu();
            else{}
                //menu();
        }

        else{
            cout << "Error!!! Redirecting to Previous Menu \nPlease Wait!" <<endl;
            Sleep(1000);
            system("cls");
            //menu();

        }


    }
};
//Using inheritance
float Booking::priceOfHotel;
class Charges : public Booking, Cabs, Customers
{
public:
    void printBill()
    {
        ofstream outPrint("receipt.txt");
        {
            outPrint << "----------Your Travel Manager-----------" <<endl;
            outPrint << "--------------Receipt-------------------" <<endl;
            outPrint << "Customer ID: " << Customers::customerId << endl << endl;
            outPrint << "Description \t\t Total" << endl;
            outPrint << "Hotel cost:\t\t " << fixed << setprecision(2) << Booking::priceOfHotel << endl;
            outPrint << "Travel (cab) cost:\t "<<fixed <<setprecision(2) << Cabs::finalCabCharge << endl;
            outPrint << "Total Charge:\t\t" <<fixed << setprecision(2) << Booking::priceOfHotel+Cabs::finalCabCharge << endl;
            outPrint << "------------THANK YOU------------------" <<endl;
        }
        outPrint.close();
    }

    void showReceipt()
    {
        ifstream inPrint("receipt.txt");
        {
            if(!inPrint)
            {
                cout << "Cannot open the file!" << endl;
            }
            while(!(inPrint.eof()))
            {
                inPrint.getline(ever, 999);
                cout << ever << endl;
            }
        }
        inPrint.close();
    }
};

void menu()
{
    int mainOption;
    int chooseOption;
    int gotoMenu;


    cout << "\t\t  Your Travel Manager \n" << endl;
    cout << "-----------Main Menu-------" <<endl;
    cout<<"\t____________________________" <<endl;
    cout << "1. Customer Management" <<endl;
    cout << "2. Cabs Management" <<endl;
    cout << "3. Bookings Management" <<endl;
    cout << "4. Charges & Bill" <<endl;
    cout << "5. Exit" <<endl;

    cout << "\nEnter Your Option: ";
    cin >>mainOption;

    system("cls");

    Customers a2;
    Cabs a3;
    Booking a4;
    Charges a5;

    if(mainOption ==1){
        cout << "------Customers------\n"<<endl;
        cout << "1. Enter New Customer" << endl;
        cout << "2. View Old Customers" << endl;

        cout <<"\nEnter your option: " ;
        cin >>chooseOption;

        system("cls");
        if(chooseOption==1){
            a2.getDetails();
        }
        else if(chooseOption==2){
            a2.showDetails();
        }
        else{
            cout<<"Error! Redirecting to Previous menu" <<endl;
            Sleep(1100);
            system("cls");
            menu();
        }

        cout <<"\nPress 1 to Redirect main menu: ";
        cin >> gotoMenu;
        system("cls");
        if(gotoMenu == 1){
            menu();
        }
        else{
                menu();
        }

    }
    else if(mainOption==2){
        a3.cabDetails();
    }
    else if(mainOption==3){
        a4.hotels();
    }
    else if(mainOption==4){
        a5.printBill();
        cout <<"Your receipt is ready \n" <<endl;
        cout <<"Enter 1 to display your receipt or any another key for main menu: ";
        cin >>gotoMenu;
        if(gotoMenu == 1){
            system("cls");
            a5.showReceipt();
            cout << "\nPress 1 to redirect main menu: ";
            cin >> gotoMenu;
            system("cls");
            if(gotoMenu == 1){
                menu();
            }
            else{
                menu();
            }
        }
        else{
            system("cls");
            menu();
        }
    }
    else if(mainOption==5){
        cout<< "--Thank You for Visiting";
        Sleep(999);
        system("cls");
        menu();
    }
    else{
        cout << "Error!!! Redirecting to Previous Menu \nPlease Wait!" <<endl;
            Sleep(1000);
            system("cls");
            menu();
    }

}

int main()
{

    ManageMenu startObj;
    return 0;
}
