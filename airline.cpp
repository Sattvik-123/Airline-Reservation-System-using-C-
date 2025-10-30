#include <iostream>
#include <iomanip>
#include <windows.h> // For SetConsoleTitle and Sleep
#include <string>
#include <fstream>   // For file operations
#include <limits>    // NEW: Required for std::numeric_limits

using namespace std;

// ---
// Class Definitions
// ---

class Flight
{
public:
    void getInfo()
    {
        cout << setw(40) << "\n\nPASSENGER INFORMATION"; // Corrected typo
        cout << "\n\n\nEnter FIRST NAME: " << endl;
        cin >> fname;
        cout << "ENTER LAST NAME" << endl;
        cin >> lname;
        cout << endl << endl;
        system("CLS");
    };
    int num, r; // num and r still unused but kept as per request
    char fname[60];
    char lname[60];
};

class booking : public Flight
{
public:
    // MEMBER VARIABLES - Declared inside the class and used consistently
    int a, b, account, t, o, p, P, cvv; // Using b, o, t, p, P
    long double ifc, Dcard, Ccard;
    char Cname[15];
    int airline;
    int destinationChoice;
    string destination;
    int tripChoice;
    string trip;
    int year;
    int month;
    int date;
    int timeChoice;
    string time;
    int classChoice;
    string classType;
    double price;
    int seats;
    // fname and lname are inherited from the Flight class

    // MEMBER FUNCTIONS (Methods)
    void chooseAirlineInternational()
    {
        cout << "\nIn which AIRLINE you want to travel" << endl << endl;
        cout << "(1) - Qantas Airways" << endl;
        cout << "(2) - British Airways" << endl;
        cout << "(3) - Singapore Airlines" << endl;
        cout << "(4) - Qatar Airways" << endl;
        cout << "(5) - Emirates Air" << endl;
        cout << "(6) - Luftansa " << endl;
        cout << "(7) - Swiss International Airlines" << endl;
        cout << "(8) - Thai Airways" << endl;
        cout << "(9) - Malaysia Airlines" << endl;
        cout << "\nEnter your choice: ";
        cin >> airline;
        system ("cls");
        switch(airline)
        {
        case 1:
            cout << "\n\n" << setw(55) << "WELCOME TO Qantas Airways" << endl;
            chooseInternationalDestination();
            break;
        case 2:
            cout << "\n\n" << setw(55) << "WELCOME TO British Airways " << endl;
            chooseInternationalDestination();
            break;
        case 3:
            cout << "\n\n" << setw(55) << "WELCOME TO Singapore Airlines " << endl;
            chooseInternationalDestination();
            break;
        case 4:
            cout << "\n\n" << setw(55) << "WELCOME TO Qatar Airways" << endl;
            chooseInternationalDestination();
            break;
        case 5:
            cout << "\n\n" << setw(55) << "WELCOME TO Emirates Air" << endl;
            chooseInternationalDestination();
            break;
        case 6:
            cout << "\n\n" << setw(55) << "WELCOME TO Luftansa " << endl;
            chooseInternationalDestination();
            break;
        case 7:
            cout << "\n\n" << setw(55) << "WELCOME TO Swiss International Airlines " << endl;
            chooseInternationalDestination();
            break;
        case 8:
            cout << "\n\n" << setw(55) << "WELCOME TO Thai Airways" << endl;
            chooseInternationalDestination();
            break;
        case 9:
            cout << "\n\n" << setw(55) << "WELCOME TO Malaysia Airlines" << endl;
            chooseInternationalDestination();
            break;
        default:
            cout << "\n\nInvalid Choice! Try Again.";
            // Add a mechanism to go back or re-enter if invalid choice
            // For now, it will proceed, but destination will be uninitialized if not chosen
            break;
        }
    };

    void chooseAirlineLocal()
    {
        cout << "\nIn which AIRLINE you want to travel" << endl << endl;
        cout << "(1) - Vistara" << endl;
        cout << "(2) - AirAsia" << endl;
        cout << "(3) - IndiGo" << endl;
        cout << "(4) - SpiceJet" << endl;
        cout << "(5) - GoAir" << endl;
        cout << "(6) - Jet Airways" << endl;
        cout << "(7) - Kingfisher Airlines" << endl;
        cout << "\nEnter your choice: ";
        cin >> airline;
        system ("cls");
        switch(airline)
        {
        case 1:
            cout << "\n\n" << setw(55) << "WELCOME TO Vistara " << endl;
            chooseLocalDestination();
            break;
        case 2:
            cout << "\n\n" << setw(55) << "WELCOME TO AirAsia" << endl;
            chooseLocalDestination();
            break;
        case 3:
            cout << "\n\n" << setw(55) << "WELCOME TO IndiGo" << endl;
            chooseLocalDestination();
            break;
        case 4:
            cout << "\n\n" << setw(55) << "WELCOME TO SpiceJet" << endl;
            chooseLocalDestination();
            break;
        case 5:
            cout << "\n\n" << setw(55) << "WELCOME TO GoAir" << endl;
            chooseLocalDestination();
            break;
        case 6:
            cout << "\n\n" << setw(55) << "WELCOME TO Jet Airways" << endl;
            chooseLocalDestination();
            break;
        case 7:
            cout << "\n\n" << setw(55) << "WELCOME TO Kingfisher Airlines" << endl;
            chooseLocalDestination();
            break;
        default:
            cout << "\n\nInvalid Choice! Try Again.";
            // Add a mechanism to go back or re-enter if invalid choice
            break;
        }
    };

    void chooseLocalDestination()
    {
        cout << "Here are the available Destinations:" << endl;
        cout << "---------------" << endl;
        cout << "(1) - Rajiv Gandhi International Airport, Hyderabad" << endl;
        cout << "(2) - Chhatrapati Shivaji International Airport, Mumbai" << endl;
        cout << "(3) - Chennai International Airport, Chennai" << endl;
        cout << "(4) - Kempegowda International Airport, Bangalore" << endl;
        cout << "(5) - Coimbatore International Airport, Coimbatore" << endl;
        cout << "(6) - Dabolim Airport, Goa" << endl;
        cout << "(7) - Veer Savarkar International Airport, Port Blair" << endl;
        cout << "(8) - Lengpui Airport, Mizoram" << endl;
        cout << "(9) - Srinagar International Airport, Srinagar" << endl;
        cout << "\n(0) - Go Back" << endl;
        cout << "---------------" << endl;
        cout << "\nEnter your choice: ";
        cin >> destinationChoice;
        cout << endl << endl;
        switch(destinationChoice)
        {
        case 1: destination = "Rajiv Gandhi International Airport, Hyderabad"; price = 2800; break;
        case 2: destination = "Chhatrapati Shivaji International Airport, Mumbai"; price = 3200; break;
        case 3: destination = "Chennai International Airport, Chennai"; price = 4100; break;
        case 4: destination = "Kempegowda International Airport, Bangalore"; price = 4700; break;
        case 5: destination = "Coimbatore International Airport, Coimbatore"; price = 5750; break;
        case 6: destination = "Dabolim Airport, Goa"; price = 5000; break;
        case 7: destination = "Veer Savarkar International Airport, Port Blair"; price = 7500; break;
        case 8: destination = "Lengpui Airport, Mizoram"; price = 10000; break;
        case 9: destination = "Srinagar International Airport, Srinagar"; price = 2300; break;
        case 0: system("cls"); chooseAirlineLocal(); return;
        default: cout << "\nInvalid Choice! Sorry, the program will exit now.\n\n"; system("cls"); exit(0);
        }
        chooseTrip();
    };

    void chooseInternationalDestination()
    {
        cout << "Here are the available INTERNATIONAL flights:" << endl << endl;
        cout << "---------------" << endl;
        cout << "(1) - BANGKOK" << endl;
        cout << "(2) - BEIJING" << endl;
        cout << "(3) - DUBAI" << endl;
        cout << "(4) - HONGKONG" << endl;
        cout << "(5) - SEOUL" << endl;
        cout << "(6) - MACAU" << endl;
        cout << "(7) - OSAKA" << endl;
        cout << "(8) - MIAMI" << endl;
        cout << "(9) - GENEVA" << endl;
        cout << "\n(0) - Go Back" << endl;
        cout << "---------------" << endl;
        cout << "\nEnter your choice: ";
        cin >> destinationChoice;
        switch(destinationChoice)
        {
        case 1: destination = "BANGKOK"; price = 7200; break;
        case 2: destination = "BEIJING"; price = 22000; break;
        case 3: destination = "DUBAI"; price = 7500; break;
        case 4: destination = "HONGKONG"; price = 12000; break;
        case 5: destination = "SEOUL"; price = 25000; break;
        case 6: destination = "MACAU"; price = 30800; break;
        case 7: destination = "OSAKA"; price = 28000; break;
        case 8: destination = "MIAMI"; price = 50000; break;
        case 9: destination = "GENEVA"; price = 20000; break;
        case 0: system("cls"); chooseAirlineInternational(); return;
        default: cout << "\nInvalid Choice! Sorry, the program will exit now.\n\n"; system("cls"); exit(0);
        }
        chooseTrip();
    };

    void chooseTrip()
    {
        cout << "\nOne-way or Round Trip?" << endl;
        cout << "----------------------" << endl;
        cout << "(1) - One-way Trip" << endl;
        cout << "(2) - Round Trip" << endl;
        cout << "----------------------" << endl;
        cout << "\nEnter your choice: ";
        cin >> tripChoice;
        switch(tripChoice)
        {
        case 1: trip = "ONE WAY"; break;
        case 2: trip = "ROUND TRIP"; price = price * 2; break;
        case 0: system("cls"); /* Go back to previous step, not just cls */ break; // Original didn't go back
        default: cout << "\nInvalid Choice! Sorry, the program will exit now.\n\n"; system("cls"); exit(0);
        }
        chooseDate();
    };

    void chooseDate()
    {
        cout << "\nChoose THE DATE OF YOUR DEPARTURE" << endl;
        cout << "Enter Year (e.g., 24 for 2024): 20"; // Clarified year input
        cin >> year;
        cout << "Enter Month (1-12):" << endl; // Clarified month range
        cin >> month;
        cout << "Enter Date (1-31):" << endl;   // Clarified date range
        cin >> date;
        chooseTime();
    };

    void chooseTime()
    {
        cout << "\nAvailable TIMES FOR DEPARTURE" << endl;
        cout << "----------------------" << endl;
        cout << "(1) - 5:00 AM" << endl;
        cout << "(2) - 7:45 AM" << endl;
        cout << "(3) - 8:30 AM" << endl;
        cout << "(4) - 9:45 AM" << endl;
        cout << "(5) - 11:30 AM" << endl;
        cout << "(6) - 2:30 PM" << endl;
        cout << "(7) - 4:00 PM" << endl;
        cout << "(8) - 6:00 PM" << endl;
        cout << "(9) - 9:45 PM" << endl;
        cout << "\n(0) - Go Back" << endl;
        cout << "----------------------" << endl;
        cout << "\nEnter your choice: ";
        cin >> timeChoice;
        switch(timeChoice)
        {
        case 1: time = "5:00 AM"; break;
        case 2: time = "7:45 AM"; break;
        case 3: time = "8:30 AM"; break;
        case 4: time = "9:45 AM"; break;
        case 5: time = "11:30 AM"; break;
        case 6: time = "2:30 PM"; break;
        case 7: time = "4:00 PM"; break;
        case 8: time = "6:00 PM"; break;
        case 9: time = "9:45 PM"; break;
        case 0: system("cls"); chooseDate(); return;
        default: cout << "\nInvalid Choice! Sorry, the program will exit now.\n\n"; system("cls"); exit(0);
        }
        chooseClass();
    };

    void chooseClass()
    {
        cout << "\nIn which class you want to travel?" << endl;
        cout << "---------------" << endl;
        cout << "(1) - BUSINESS CLASS" << endl;
        cout << "(2) - ECONOMY CLASS" << endl;
        cout << "\n(0) - Go Back" << endl;
        cout << "---------------" << endl;
        cout << "\nEnter your choice: ";
        cin >> classChoice;
        switch(classChoice)
        {
        case 1: classType = "BUSINESS CLASS"; price = price * 3; break;
        case 2: classType = "ECONOMY CLASS"; break;
        case 0: system("cls"); chooseTime(); return;
        default: cout << "\nInvalid Choice! Sorry, the program will exit now.\n\n"; system("cls"); exit(0);
        }
        enterSeats();
    };

    void enterSeats()
    {
        cout << "\nEnter number of seats to be booked: " << endl;
        cin >> seats;
        price = price * seats;
        Flight::getInfo(); // Call getInfo from the base class Flight
    };

    void show()
    {
        // Ticket and Reference numbers should probably be generated or static
        // For simplicity, keeping as is, but know they'll be same for every ticket
        int t_no = 1;
        int r_no = 1;

        cout << setw(50) << "Bros TICKETING" << endl;
        cout << setw(45) << "AIRLINE TICKET DETAILS" << endl << endl;
        cout << "|Ticket No: " << t_no << "\t\t\tReference No: " << r_no
             << endl << "|_"
             << endl << " PASSENGER INFORMATION"
             << endl << " Name: " << fname << " " << lname // fname, lname from Flight
             << endl << "|_"
             << endl << " FLIGHT INFORMATION"
             << endl << " Origin: Indira Gandhi International Airport, Delhi"
             << endl << " Destination: " << destination
             << endl << " Date: " << date << "/" << month << "/20" << year // Ensure year is handled like '24' for 2024
             << endl << " Time: " << time
             << endl << endl << "" << trip
             << endl << "" << classType
             << endl << " Number of seat/s: " << seats
             << endl << "_"
             << endl << " PRICE: " << fixed << setprecision(2) << price << endl; // Format price for display
    };

    void payment()
    {
        cout << "Select payment mode" << endl;
        cout << "1.Online Banking" << endl;
        cout << "2.Debit Card" << endl;
        cout << "3.Credit card" << endl;
        cout << "Enter your choice: ";
        cin >> a;
        switch (a)
        {
        case 1:
            cout << "Choose Bank" << endl;
            cout << "(1) - SBI" << endl;
            cout << "(2) - HDFC" << endl;
            cout << "(3) - ICICI" << endl;
            cout << "(4) - AXIS" << endl;
            cout << "Enter bank choice: ";
            cin >> b;
            cout << "Enter account No." << endl;
            cin >> account;
            cout << "Enter PIN" << endl;
            cin >> ifc;
            if(ifc == 176061) // This is a hardcoded PIN, generally not secure
            {
                cout << "Enter Captcha" << endl;
                cout << "Enter Odd Digits Divisible By 7 (from the list below):" << endl;
                cout << "21 25 97" << endl;
                cout << "35 87 22" << endl;
                cout << "58 49 30" << endl;
                cout << "Your input (e.g., 21 35 49): ";
                cin >> o >> t >> p;
                if(o == 21 && t == 35 && p == 49)
                {
                    cout << "Enter 0 To Proceed To Payment" << endl;
                    cin >> P;
                    if(P == 0)
                    {
                        cout << "Total Price: " << fixed << setprecision(2) << price << endl;
                        cout << "Payment Successful" << endl;
                        cout << "Thanks for using Bros TICKETING!" << endl;
                    } else { cout << "Payment not confirmed. Incorrect input." << endl;}
                } else { cout << "Captcha failed. Incorrect input." << endl; }
            } else { cout << "Incorrect PIN." << endl; }
            break;
        case 2: // Debit Card
            cout << "Choose Bank" << endl;
            cout << "(1) - SBI" << endl;
            cout << "(2) - HDFC" << endl;
            cout << "(3) - ICICI" << endl;
            cout << "(4) - AXIS" << endl;
            cout << "Enter bank choice: ";
            cin >> b;
            cout << "Enter Card No." << endl;
            cin >> Dcard;
            cout << "Enter CVV" << endl;
            cin >> cvv;
            cout << "Enter card holder name (no spaces):" << endl; // Clarified no spaces for char array
            cin >> Cname;
            cout << "Enter Captcha" << endl;
            cout << "Enter Odd Digits Divisible By 7 (from the list below):" << endl;
            cout << "21 25 97" << endl;
            cout << "35 87 22" << endl;
            cout << "58 49 30" << endl;
            cout << "Your input (e.g., 21 35 49): ";
            cin >> o >> t >> p;
            if(o == 21 && t == 35 && p == 49)
            {
                cout << "Enter 0 To Proceed To Payment" << endl;
                cin >> P;
                if(P == 0) {
                    cout << "Total Price: " << fixed << setprecision(2) << price << endl;
                    cout << "Payment Successful" << endl;
                    cout << "Thanks for using Bros TICKETING!" << endl;
                } else { cout << "Payment not confirmed. Incorrect input." << endl;}
            } else { cout << "Captcha failed. Incorrect input." << endl; }
            break;
        case 3: // Credit Card
            cout << "Choose Bank" << endl;
            cout << "(1) - SBI" << endl;
            cout << "(2) - HDFC" << endl;
            cout << "(3) - ICICI" << endl;
            cout << "(4) - AXIS" << endl;
            cout << "Enter bank choice: ";
            cin >> b;
            cout << "Enter Card No." << endl;
            cin >> Ccard;
            cout << "Enter CVV" << endl;
            cin >> cvv;
            cout << "Enter card holder name (no spaces):" << endl;
            cin >> Cname;
            cout << "Enter Captcha" << endl;
            cout << "Enter Odd Digits Divisible By 7 (from the list below):" << endl;
            cout << "21 25 97" << endl;
            cout << "35 87 22" << endl;
            cout << "58 49 30" << endl;
            cout << "Your input (e.g., 21 35 49): ";
            cin >> o >> t >> p;
            if(o == 21 && t == 35 && p == 49)
            {
                cout << "Enter 0 To Proceed To Payment" << endl;
                cin >> P;
                if(P == 0) {
                    cout << "Total Price: " << fixed << setprecision(2) << price << endl;
                    cout << "Payment Successful" << endl;
                    cout << "Thanks for using Bros TICKETING!" << endl;
                } else { cout << "Payment not confirmed. Incorrect input." << endl;}
            } else { cout << "Captcha failed. Incorrect input." << endl; }
            break;
        default:
            cout << "Invalid payment mode selected." << endl;
        }
    };
}; // End of class booking definition

// ---
// Global Instance and Main Function
// ---

booking b_obj; // Global instance of booking class

// Function to save booking data to file
void saveBookingToFile(const booking& current_booking) {
    ofstream input_file("information.dat", ios::app); // Open in append mode
    if (input_file.is_open()) {
        input_file << current_booking.fname << '\n'
                   << current_booking.lname << '\n'
                   << current_booking.destination << '\n'
                   << current_booking.date << "/" << current_booking.month << "/20" << current_booking.year << '\n'
                   << current_booking.time << '\n'
                   << current_booking.trip << '\n'
                   << current_booking.classType << '\n'
                   << current_booking.seats << '\n'
                   << fixed << setprecision(2) << current_booking.price << '\n';
        input_file.close();
    } else {
        cerr << "Error: Could not open information.dat for writing." << endl;
    }
}

int main()
{
    char ch_file;
    int menu_choice = 0;
    char key_press;

    SetConsoleTitle("PLANET WAY ROUND");
    cout << "\n\n\n\n\n\n\n\n\n\n\t\t WELCOME TO PLANET WAY ROUND ";
    Sleep(1500);
    system ("cls");

    do {
        cout << "" << endl;
        cout << "* PLANET WAY ROUND *" << endl;
        cout << "* *" << endl;
        cout << "* (1) LOCAL FLIGHTS *" << endl;
        cout << "* (2) INTERNATIONAL FLIGHTS *" << endl;
        cout << "* (3) SHOW BOOKING DETAILS *" << endl;
        cout << "* *" << endl;
        cout << "* *PRESS 4 TO EXIT *" << endl;
        cout << "* #Designed by:-Ganesh Deodurg ,Sattvik Gurav & Adarsh *" << endl;
        cout << "*" << endl << endl << endl;
        cout << " ENTER YOUR CHOICE: ";
        cin >> menu_choice;

        // Clear the input buffer after reading menu_choice
        // Moved into a block to avoid "jump to case label" error.
        {
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Solves numeric_limits error
        }

        system("cls"); // Clear screen after menu choice

        switch(menu_choice)
        {
        case 1:
            b_obj.chooseAirlineLocal();
            b_obj.show();
            b_obj.payment();
            saveBookingToFile(b_obj);
            cout << "\nPress any key to return to the main menu...";
            cin.get();
            system("cls");
            break;
        case 2:
            b_obj.chooseAirlineInternational();
            b_obj.show();
            b_obj.payment();
            saveBookingToFile(b_obj);
            cout << "\nPress any key to return to the main menu...";
            cin.get();
            system("cls");
            break;
        case 3:
            // Declared output_file inside a block for case 3
            // This isolates its scope and prevents the "jump to case label" error.
            {
                cout << "Ticket Details:" << endl;
                ifstream output_file("information.dat", ios::in); // Changed to ifstream
                if (output_file.is_open()) {
                    string line;
                    int booking_counter = 0;
                    cout << "\n--- All Saved Bookings ---" << endl;
                    while (getline(output_file, line)) { // Read line by line
                        cout << "Booking " << ++booking_counter << ":" << endl;
                        cout << "  First Name: " << line << endl;
                        if (getline(output_file, line)) cout << "  Last Name: " << line << endl;
                        if (getline(output_file, line)) cout << "  Destination: " << line << endl;
                        if (getline(output_file, line)) cout << "  Date: " << line << endl;
                        if (getline(output_file, line)) cout << "  Time: " << line << endl;
                        if (getline(output_file, line)) cout << "  Trip Type: " << line << endl;
                        if (getline(output_file, line)) cout << "  Class Type: " << line << endl;
                        if (getline(output_file, line)) cout << "  Seats: " << line << endl;
                        if (getline(output_file, line)) cout << "  Price: " << line << endl;
                        cout << "--------------------------" << endl;
                    }
                    output_file.close();
                    if (booking_counter == 0) {
                        cout << "No bookings found in 'information.dat'." << endl;
                    }
                } else {
                    cerr << "Error: Could not open 'information.dat' for reading or it doesn't exist." << endl;
                }
            } // End of block for case 3
            cout << "\n\nLast interacted booking's Ticket number (approx): " << b_obj.date << b_obj.seats << b_obj.price << endl;
            cout << "Press any key...";
            cin.get();
            system("cls");
            break;
        case 4:
            cout << "Exiting program. Thank you!" << endl;
            Sleep(1000);
            exit (0);
        default:
            cout << "Invalid choice. Please try again." << endl;
            Sleep(1000);
            system("cls");
        }
    } while (menu_choice != 4);

    return 0;
}