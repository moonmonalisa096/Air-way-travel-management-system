#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void mainMenu();

class Management {
public:
    Management() {
        mainMenu();
    }
};

class Details {
public:
    static string name, gender;
    int phoneNo;
    int age;
    string add;
    static int cId;
    char arr[100];

    void information() {
        cout << "\nEnter the customer ID:";
        cin >> cId;
        cout << "\nEnter the name :";
        cin >> name;
        cout << "\nEnter the age :";
        cin >> age;
        cout << "\n Address :";
        cin >> add;
        cout << "\n Gender :";
        cin >> gender;
        cout << "Your details are saved with us\n" << endl;
    }
};

int Details::cId;
string Details::name;
string Details::gender;

class registration {
public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void flights() {
        string flightN[] = {"Dubai", "Canada", "UK", "USA", "Australia", "Europe"};

        for (int a = 0; a < 6; a++) {
            cout << (a + 1) << ".flight to" << flightN[a] << endl;
        }
        cout << "\nWelcome to the Airlines!" << endl;
        cout << "Press that number of the country of which you want to book the flight";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "__________Welcome to Dubai Emirets__________\n" << endl;

                cout << "Your comfort is our priority.Enjoy your journey!" << endl;

                cout << "Following are the flights \n" << endl;

                cout << "1. DUB - 498 " << endl;
                cout << "\t08-01-2024 8:00AM 10hrs TAKA. 14000" << endl;
                cout << "2. DUB - 658" << endl;
                cout << "\t09-01-2024 4.00AM 12hrs TAKA. 10000" << endl;
                cout << "3. DUB - 508" << endl;
                cout << "\t11-01-2024 11:00AM TAKA. 9000" << endl;

                cout << "\nSelect the flight you want to book :";
                cin >> choice1;

                if (choice1 == 1) {
                    charges = 14000;
                    cout << "\nYou have successfully booked the flight DUB - 498" << endl;
                    cout << "You can go back to menu and take the ticket" << endl;
                } else if (choice1 == 2) {
                    charges = 10000;
                    cout << "\nYou have successfully booked the flight DUB - 458" << endl;
                    cout << "You can go back to menu and take the ticket" << endl;
                } else if (choice1 == 3) {
                    charges = 9000;
                    cout << "\nYou have successfully booked the flight DUB - 508" << endl;
                    cout << "You can go back to menu and take the ticket" << endl;
                } else {
                    cout << "Invalid input,shifting to the previous menu" << endl;
                    flights();
                }
                cout << "Press any key to go back to main menu:" << endl;
                cin >> back;

                if (back == 1) {
                    mainMenu();
                } else {
                    mainMenu();
                }

            }
            case 2: {
                cout << "__________Welcome to Canadian Airlines__________\n" << endl;

                cout << "Your comfort is our priority.Enjoy your journey!" << endl;

                cout << "Following are the flights \n" << endl;

                cout << "1. CA - 198 " << endl;
                cout << "\t08-01-2024 2:00PM 20hrs TAKA. 34000" << endl;
                cout << "2. CA - 158" << endl;
                cout << "\t09-01-2024 6.00AM 23hrs TAKA. 29000" << endl;
                cout << "3. CA - 208" << endl;
                cout << "\t11-01-2024 11:00AM 21hrs TAKA. 40000" << endl;

                cout << "\nSelect the flight you want to book :";
                cin >> choice1;

                if (choice1 == 1) {
                    charges = 34000;
                    cout << "\nYou have successfully booked the flight CA - 198" << endl;
                    cout << "You can go back to menu and take the ticket" << endl;
                } else if (choice1 == 2) {
                    charges = 29000;
                    cout << "\nYou have successfully booked the flight CA - 158" << endl;
                    cout << "You can go back to menu and take the ticket" << endl;
                } else if (choice1 == 3) {
                    charges = 40000;
                    cout << "\nYou have successfully booked the flight CA - 208" << endl;
                    cout << "You can go back to menu and take the ticket" << endl;
                } else {
                    cout << "Invalid input,shifting to the previous menu" << endl;
                    flights();
                }
                cout << "Press any key to go back to main menu:" << endl;
                cin >> back;

                if (back == 1) {
                    mainMenu();
                } else {
                    mainMenu();
                }

            }
            case 3: {

                cout << "__________Welcome to UK Airways__________\n" << endl;

                cout << "Your comfort is our priority.Enjoy your journey!" << endl;

                cout << "Following are the flights \n" << endl;

                cout << "1. UK - 798 " << endl;
                cout << "\t12-01-2024 10:00AM 14hrs TAKA. 44000" << endl;
                // cout<<"1. CA - 158"<<endl;
                //cout<<"\t09-01-2024 6.00AM 23hrs TAKA. 29000"<<endl;
                //cout<<"1. CA - 208"<<endl;
                //cout<<"\t11-01-2024 11:00AM 21hrs TAKA. 40000"<<endl;

                cout << "\nSelect the flight you want to book :";
                cin >> choice1;

                if (choice1 == 1) {
                    charges = 44000;
                    cout << "\nYou have successfully booked the flight CA - 198" << endl;
                    cout << "You can go back to menu and take the ticket" << endl;
                }
                // else if(choice1==2){
                //  charges=29000;
                //  cout<<"\nYou have successfully booked the flight CA - 158"<<endl;
                //  cout<<"You can go back to menu and take the ticket"<<endl;
                //  }
                // else if(choice1==3){
                //  charges=40000;
                //  cout<<"\nYou have successfully booked the flight CA - 208"<<endl;
                //  cout<<"You can go back to menu and take the ticket"<<endl;
                else {
                    cout << "Invalid input,shifting to the previous menu" << endl;
                    flights();
                }
                cout << "Press any key to go back to main menu:" << endl;
                cin >> back;

                if (back == 1) {
                    mainMenu();
                } else {
                    mainMenu();
                }

            }
            case 4: {
                cout << "__________Welcome to US Airways__________\n" << endl;

                cout << "Your comfort is our priority.Enjoy your journey!" << endl;

                cout << "Following are the flights \n" << endl;

                cout << "1. US - 567 " << endl;
                cout << "\t10-01-2024 9:00AM 22hrs TAKA. 37000" << endl;
                cout << "2. US - 667" << endl;
                cout << "\t12-01-2024 8.00AM 23hrs TAKA. 67000" << endl;
                cout << "3. US - 775" << endl;
                cout << "\t13-01-2024 11:00AM 21hrs TAKA. 80000" << endl;

                cout << "\nSelect the flight you want to book :";
                cin >> choice1;

                if (choice1 == 1) {
                    charges = 37000;
                    cout << "\nYou have successfully booked the flight US - 567" << endl;
                    cout << "You can go back to menu and take the ticket" << endl;
                } else if (choice1 == 2) {
                    charges = 67000;
                    cout << "\nYou have successfully booked the flight US - 667" << endl;
                    cout << "You can go back to menu and take the ticket" << endl;
                } else if (choice1 == 3) {
                    charges = 80000;
                    cout << "\nYou have successfully booked the flight US - 775" << endl;
                    cout << "You can go back to menu and take the ticket" << endl;
                } else {
                    cout << "Invalid input,shifting to the previous menu" << endl;
                    flights();
                }
                cout << "Press any key to go back to main menu:" << endl;
                cin >> back;

                if (back == 1) {
                    mainMenu();
                } else {
                    mainMenu();
                }

            }
            case 5: {
                cout << "__________Welcome to Australian Airlines__________\n" << endl;

                cout << "Your comfort is our priority.Enjoy your journey!" << endl;

                cout << "Following are the flights \n" << endl;

                cout << "1. As - 698 " << endl;
                cout << "\t18-01-2024 9:00AM 22hrs TAKA. 44000" << endl;
                cout << "2. As - 158" << endl;
                cout << "\t19-01-2024 8.00AM 23hrs TAKA. 34000" << endl;
                cout << "3. As - 708" << endl;
                cout << "\t17-01-2024 11:00AM 21hrs TAKA. 42000" << endl;

                cout << "\nSelect the flight you want to book :";
                cin >> choice1;

                if (choice1 == 1) {
                    charges = 44000;
                    cout << "\nYou have successfully booked the flight As - 698" << endl;
                    cout << "You can go back to menu and take the ticket" << endl;
                } else if (choice1 == 2) {
                    charges = 34000;
                    cout << "\nYou have successfully booked the flight As - 158" << endl;
                    cout << "You can go back to menu and take the ticket" << endl;
                } else if (choice1 == 3) {
                    charges = 42000;
                    cout << "\nYou have successfully booked the flight As - 708" << endl;
                    cout << "You can go back to menu and take the ticket" << endl;
                } else {
                    cout << "Invalid input,shifting to the previous menu" << endl;
                    flights();
                }
                cout << "Press any key to go back to main menu:" << endl;
                cin >> back;

                if (back == 1) {
                    mainMenu();
                } else {
                    mainMenu();
                }
            }
            case 6: {
                cout << "__________Welcome to European Airlines__________\n" << endl;

                cout << "Your comfort is our priority.Enjoy your journey!" << endl;

                cout << "Following are the flights \n" << endl;

                cout << "1. EU - 898 " << endl;
                cout << "\t02-01-2024 9:00AM 18hrs TAKA. 36000" << endl;
                cout << "1. EU - 958" << endl;
                cout << "\t03-01-2024 6.00AM 19hrs TAKA. 37000" << endl;
                cout << "1. EU - 608" << endl;
                cout << "\t12-01-2024 10:00AM 20hrs TAKA. 31000" << endl;

                cout << "\nSelect the flight you want to book :";
                cin >> choice1;

                if (choice1 == 1) {
                    charges = 36000;
                    cout << "\nYou have successfully booked the flight EU - 898" << endl;
                    cout << "You can go back to menu and take the ticket" << endl;
                } else if (choice1 == 2) {
                    charges = 37000;
                    cout << "\nYou have successfully booked the flight EU - 958" << endl;
                    cout << "You can go back to menu and take the ticket" << endl;
                } else if (choice1 == 3) {
                    charges = 31000;
                    cout << "\nYou have successfully booked the flight EU - 608" << endl;
                    cout << "You can go back to menu and take the ticket" << endl;
                } else {
                    cout << "Invalid input,shifting to the previous menu" << endl;
                    flights();
                }
                cout << "Press any key to go back to main menu:" << endl;
                cin >> back;

                if (back == 1) {
                    mainMenu();
                } else {
                    mainMenu();
                }
            }
            default: {
                cout << "Invalid input , shifting to the main menu!" << endl;
                mainMenu();
                break;
            }
        }
    }
};

float registration::charges;
int registration::choice;

class ticket : public registration, Details {
public:


 void Bill() {
    string destination = "";
    ofstream outf("records.txt"); // Corrected filename
    if (outf.is_open()) { // Check if file is opened successfully
        outf << "__________Airstar Airlines__________" << endl;
        outf << "__________Ticket__________" << endl;
        outf << "__________________________" << endl;

        outf << "Customer ID:" << Details::cId << endl;
        outf << "Customer Name" << Details::name << endl;
        outf << "Customer Gender" << Details::gender << endl;
        outf << "\tDescription" << endl;

        if (registration::choice == 1) {
            destination = "Dubai";
        } else if (registration::choice == 2) {
            destination = "Canada";
        } else if (registration::choice == 3) {
            destination = "UK";
        } else if (registration::choice == 4) {
            destination = "USA";
        } else if (registration::choice == 5) {
            destination = "Australia";
        } else {
            destination = "Europe";
        }

        outf << "Destination\t\t" << destination << endl;
        outf << "Flight cost :\t\t" << registration::charges << endl;

        outf.close(); // Close the output file
    } else {
        cout << "Error: Unable to open file for writing!" << endl;
    }
}

void disBill() {
    ifstream ifs("records.txt"); // Corrected filename
    if (ifs.is_open()) { // Check if file is opened successfully
        while (!ifs.eof()) {
            ifs.getline(arr, 100);
            cout << arr << endl;
        }
        ifs.close(); // Close the input file
    } else {
        cout << "Error: Unable to open file for reading!" << endl;
    }
}


};

void mainMenu() {
    int lchoice;
    int schoice;
    int back;
    cout << "\t           AirStar Airlines    \n" << endl;
    cout << "______________Main Menu__________" << endl;
    cout << "\t______________________________" << endl;
    cout << "\t\t\t\t\t\t\t\t" << endl;

    cout << "\t|\t Press 1 to add the Customer Details   \t|" << endl;
    cout << "\t|\t Press 2 for Flight Registration       \t|" << endl;
    cout << "\t|\t Press 3 for Ticket and Charges        \t|" << endl;
    cout << "\t|\t press 4 to Exit                       \t|" << endl;
    cout << "\t|\t\t\t\t\t\t|" << endl;
    cout << "\t____________________________________________________" << endl;

    cout << "Enter The Choice : ";
    cin >> lchoice;

    Details d;
    registration r;
    ticket t;

    switch (lchoice) {
        case 1: {
            cout << "________Customers________\n" << endl;
            d.information();
            cout << "Press 1 to go back to Main menu";
            cin >> back;

            if (back == 1) {
                mainMenu();
            }
            break;
        }
        case 2: {
            cout << "_____Book a flight using this system________\n" << endl;
            r.flights();
            break;
        }
        case 3: {
            cout << "____GET YOUR TICKET_____\n" << endl;
            t.Bill();

            cout << "Your ticket is printed,you can collect it\n" << endl;
            cout << "Press 1 to display your ticket";

            cin >> back;

            if (back == 1) {
                t.disBill();
                cout << "Press any key to go back to main menu:";
                cin >> back;
                if (back == 1) {
                    mainMenu();
                } else {
                    mainMenu();
                }
            } else {
                mainMenu();
            }
            break;
        }
        case 4: {
            cout << "\n\n\t_______THANK YOU_______" << endl;
            break;
        }
        default: {
            cout << "Invalid input,Please try again!" << endl;
            mainMenu();
            break;
        }
    }
}

int main() {
    Management m;
    return 0;
}
