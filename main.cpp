//Preprocessor Directive of Header Files
#include <iostream>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <windows.h> // Windows API header for sound beeps

using namespace std;

//Class definition for ticket
class ticket {
	public:
		char name[25];
	char cno[10];
}
t; //object definition for ticket

// Class definition for card
class card: public ticket { //inheritence for public ticket
	public: char address[1000];
	//char emailid[20];
}
v; //object definition for card

//Prototype Call for the functions definitions.
void pay(int);
void random();
void card();
void printTicket(int);
void printDrinksMenu();
void printTiming();

int valdtChoice(int type, int totChoice) {
	int choice = 99;
	bool validation = true;

	do {
		switch (type) {
			case 1:	// Menu
				cout << "\n\t\t\t\t Enter your action :\t";
				break;
			case 2:	// Movie
				cout << "\n\t\t\t\t Enter your movie choice :\t";
				break;
			case 3:	// Movie Timing
				cout << "\n\t\t\t\t Enter the timing choice :\t";
				break;
			case 4:	// Type of Seating
				cout << "\n\t\t\t\t Enter the seating type choice :\t";
				break;
			case 5:	// Type of Beverages
				cout << "\n\t\t\t\t Enter the drink choice :\t";
				break;
			default:
				cout << "[Debug] Invalid choice type";
		}

		cin >> choice;

		if (choice < 1 || choice > totChoice) {
			validation = false;
			cout << "\n\t\t\t [Invalid selection] Please input 1 to " << totChoice << " only.\n";
			for(int b; b < 3; b++) { Beep(700,200); }	//700 hertz beep for 200 milliseconds
		} else {
			validation = true;
		}
	} while (!validation);

	return choice;
}

int valdtCntc() {
	int tickets = 99;
	bool nameValdt = true, cntcValdt = true, ticketValdt = true;

	do {
		cout << "\n\t\t\t\t Enter your name:\t";
		cin >> ws;					// To prevent skipping getline() input prompt
		cin.getline(t.name, 25);	// To get whole line including whitespace

		if (strlen(t.name) < 3) {
			nameValdt = false;
			cout << "\n\t\t\t [Invalid input] Name must not be less than 3 characters.\n";
			for(int b; b < 3; b++) { Beep(700,200); }	//700 hertz beep for 200 milliseconds
		} else if(strlen(t.name) > 25) {
			nameValdt = false;
			cout << "\n\t\t\t [Invalid input] Name must not be more than 25 characters.\n";
			for(int b; b < 3; b++) { Beep(700,200); }	//700 hertz beep for 200 milliseconds
		} else {
			nameValdt = true;
		}
	} while (!nameValdt);

	do {
		cout << "\n\t\t\t\t Enter your contact number:\t";
		cin >> t.cno;

		if (strlen(t.cno) != 10) {
			cntcValdt = false;
			cout << "\n\t\t\t [Invalid input] Please enter a valid mobile number.\n";
			for(int b; b < 3; b++) { Beep(700,200); }	// 700 hertz beep for 500 milliseconds
		} else {
			cntcValdt = true;
		}
	} while (!cntcValdt);			

	do {
		cout << "\n\t\t\t\t Enter the number of tickets you want to purchase:\t";
		cin >> tickets;

		if (isdigit(tickets)) {
			ticketValdt = false;
			cout << "\n\t\t\t [Invalid input] Please enter a valid number.\n";
			for(int b; b < 3; b++) { Beep(700,200); }	// 700 hertz beep for 500 milliseconds
		} else {
			ticketValdt = true;
		}
	} while (!ticketValdt);
	
	return tickets;
}

char valdtAction() {
	char action;
	bool validation = true;

	do {
		cout << "\n\n\t\t\t\t Do you want to choose another option (y/n)";
		cin >> action;

		if (action == 'y' || action == 'Y') {
			validation = true;
		} else if(action == 'n' || action == 'N') {
			validation = true;
		} else {
			validation = false;
			cout << "\n\t\t\t [Invalid selection] Please input 'Y' or 'N' only.\n";
			Beep(700,200); // 523 hertz (C5) for 500 milliseconds
			Beep(700,200);
			Beep(700,200);
		}
	} while (!validation);
	
	system("CLS");

	return action;
}

int menu() {
	cout << "\n\t\t\t ----------------------------------";
	cout << "\n\t\t\t\t MOVIE TICKET SYSTEM";
	cout << "\n\t\t\t ----------------------------------";
	cout << "\n\t\t\t\t Welcome Customer!"; //Menu for the user
	cout << "\n\n\t\t\t\t <1> Movie Timings";
	cout << "\n\t\t\t\t <2> Contact Us";
	cout << "\n\t\t\t\t <3> Food and Beverages";
	cout << "\n\t\t\t\t <4> Exit \n";

	int choice = 99;
	choice = valdtChoice(1, 4);

	return choice;
}

//Main function
int main() {
	system("CLS");

	//Integer Declaration
	int choice, movie, food, b, N, x, cardid;
	char ans;

	//An exit controlled loop (Do...While)
	do {
		choice = menu();
		cin.clear();

		switch (choice) {
			case 1:
				system("CLS");

				cout << "\n\n\t\t\t\t Movies :";
				cout << "\n\t\t\t\t <1> Munafik";
				cout << "\n\t\t\t\t\t  Malay";
				cout << "\n\t\t\t\t\t  Horror U/A";
				cout << "\n\t\t\t\t <2> Twilight";
				cout << "\n\t\t\t\t\t  English";
				cout << "\n\t\t\t\t\t  Drama,Horror,Romance,Fantasy A";
				cout << "\n\t\t\t\t <3> The Bad Guys";
				cout << "\n\t\t\t\t\t  English";
				cout << "\n\t\t\t\t\t  Adventure,Comedy,Family U";
				cout << "\n\t\t\t\t <4> Your Name";
				cout << "\n\t\t\t\t\t  Japanese";
				cout << "\n\t\t\t\t\t  Drama, Fantasy, Anime, Romance U";
				cout << "\n\t\t\t\t <5> High and Low";
				cout << "\n\t\t\t\t\t  Japanese";
				cout << "\n\t\t\t\t\t  Action, U/A\n";

				movie = valdtChoice(1, 5);

				switch (movie) {
					case 1:
						printTiming();
						b = valdtChoice(3, 4);
						x = valdtCntc();
						pay(x);
						printTicket(b);
						break;

					case 2:
						printTiming();
						b = valdtChoice(3, 4);
						x = valdtCntc();
						pay(x);printTicket(b);
						break;

					case 3:
						printTiming();
						b = valdtChoice(3, 4);
						x = valdtCntc();
						pay(x);printTicket(b);
						break;
						
					case 4:
						printTiming();
						b = valdtChoice(3, 4);
						x = valdtCntc();
						pay(x);printTicket(b);
						break;
						
					case 5:
						printTiming();
						b = valdtChoice(3, 4);
						x = valdtCntc();
						pay(x);printTicket(b);
						break;
						
					default:
						cout << "[Debug] Invalid movie choice";
				}
				break;

			case 2:
				system("CLS");
				cout << "For further information about movies you can download our Application (from the Google Play Store or from the iOS App Store) or contact us at 013468623"; //Finding out more about our cinemas
				break;
				
			case 3:
				system("CLS");
				cout << "\n\n\t\t\t\t Food and Beverages :";
				cout << "\n\t\t\t\t <1> Popcorn";
				cout << "\n\t\t\t\t\t  Medium.\t\t\"RM10\"" << endl;
				cout << "\n\t\t\t\t\t  Large.\t\t\"RM15\"";
				cout << "\n\t\t\t\t <2> Big Dipper";
				cout << "\n\t\t\t\t\t  Medium.\t\t\"RM10\"" << endl;
				cout << "\n\t\t\t\t\t  Large.\t\t\"RM15\"";
				cout << "\n\t\t\t\t <3> Golden Horn Chips";
				cout << "\n\t\t\t\t\t  Medium.\t\t\"RM10\"" << endl;
				cout << "\n\t\t\t\t\t  Large.\t\t\"RM15\"";
				cout << "\n\t\t\t\t <4> Hot Minnies";
				cout << "\n\t\t\t\t\t  Medium.\t\t\"RM10\"" << endl;
				cout << "\n\t\t\t\t\t  Large.\t\t\"RM15\"";
				cout << "\n\t\t\t\t <5> Chicken Samosa";
				cout << "\n\t\t\t\t\t  Medium.\t\t\"RM10\"" << endl;
				cout << "\n\t\t\t\t\t  Large.\t\t\"RM15\"";
				cout << "\n\t\t\t\t Enter Your Choice :" << "\t";
				cin >> food;
				cout << "\n\n\t\t\t\t Beverages for the selected food are:";
				switch (movie) {
				case 1:
					system("CLS");
					
					printDrinksMenu();
					b = valdtChoice(5, 4);
					valdtCntc();

					cout << "\n\t\t\t\t Enter the number of food you want to purchase:\t";
					cin >> x;
					pay(x);
					cout << "\n\n\n\t\t\t\t Your receipt is here: ";
					cout << "\n\t\t\t\t Name 		:" << t.name;
					cout << "\n\t\t\t\t Contact No	:" << t.cno;
					cout << "\n\t\t\t\t Food and Beverages 	:";
					switch (b) {
					case 1:
						cout << "Carbonated Drinks";
						break;
					case 2:
						cout << "Juice";
						break;
					case 3:
						cout << "Hot Drinks";
						break;
					case 4:
						cout << "Frappucino";
						break;

					default:
						cout << "invalid input";
					}
					break;
				case 2:
					system("CLS");
					
					printDrinksMenu();
					b = valdtChoice(5, 4);
					x = valdtCntc();
					pay(x);

					cout << "\n\n\t\t\t\t Your ticket is here:";
					cout << "\n\t\t\t\t Name 		:" << t.name;
					cout << "\n\t\t\t\t Contact No	:" << t.cno;
					cout << "\n\t\t\t\t Show timings 	:";
					switch (b) {
					case 1:
						cout << "Carbonated Drinks";
						break;
					case 2:
						cout << "Juice";
						break;
					case 3:
						cout << "Hot Drinks";
						break;
					case 4:
						cout << "Frappucino";
						break;

					}
					break;
				case 3:
					system("CLS");
					
					printDrinksMenu();
					b = valdtChoice(5, 4);
					x = valdtCntc();
					pay(x);
					
					cout << "\n\n\t\t\t\t Your ticket is here: ";
					cout << "\n\t\t\t\t Name 		:" << t.name;
					cout << "\n\t\t\t\t Contact No	:" << t.cno;
					cout << "\n\t\t\t\t Show timings 	:";
					switch (b) {
					case 1:
						cout << "Carbonated Drinks";
						break;
					case 2:
						cout << "Juice";
						break;
					case 3:
						cout << "Hot Drinks";
						break;
					case 4:
						cout << "Frappucino";
						break;

					}
					break;
				case 4:
					system("CLS");
					
					printDrinksMenu();
					b = valdtChoice(5, 4);
					x = valdtCntc();
					pay(x);
					
					cout << "\n\n\t\t\t\t Your ticket is here: ";
					cout << "\n\t\t\t\t Name 		:" << t.name;
					cout << "\n\t\t\t\t Contact No	:" << t.cno;
					cout << "\n\t\t\t\t Show timings 	:";
					switch (b) {
					case 1:
						cout << "1130";
						break;
					case 2:
						cout << "1500";
						break;
					case 3:
						cout << "2100";
						break;
					case 4:
						cout << "2300";
						break;
					default:
						cout << "invalid input";
					}
					break;
				case 5:
					system("CLS");
					
					printDrinksMenu();
					b = valdtChoice(5, 4);
					x = valdtCntc();
					pay(x);
					
					cout << "\n \n\t\t\t\t Your ticket is here: ";
					cout << "\n\t\t\t\t Name 		:" << t.name;
					cout << "\n\t\t\t\t Contact No	:" << t.cno;
					cout << "\n\t\t\t\t Show timings 	:";
					switch (b) {
					case 1:
						cout << "Carbonated Drinks";
						break;
					case 2:
						cout << "Juice";
						break;
					case 3:
						cout << "Hot Drinks";
						break;
					case 4:
						cout << "Frappucino";
						break;

					}
					break;
				default:
					cout << "[Debug] Invalid food choice";
				}
				break;

			case 4: {
				system("CLS");
				cout << "\n\t\t\t\tTHANK YOU AND VISIT AGAIN!\n\n\t\t\t\t";
				exit(0);
				break;
			}
		}
		
		cout << "\n\n\t\t\t\t Do you want to choose another option (y/n)";
		cin >> ans;
		system("CLS");
	} while (ans == 'y');
	
	cout << "\n\t\t\t\tTHANK YOU AND VISIT AGAIN!\n\n\t\t\t\t";
	
	getch();
	return 0;
}

void printTicket(int b) {
	cout << "\n\n\t\t\t\t Your ticket is here: ";
	cout << "\n\t\t\t\t Name 		: " << t.name;
	cout << "\n\t\t\t\t Contact No	: " << t.cno;
	cout << "\n\t\t\t\t Show timings 	: ";

	switch (b) {
	case 1:
		cout << "1130";
		break;
	case 2:
		cout << "1500";
		break;
	case 3:
		cout << "2100";
		break;
	case 4:
		cout << "2300";
		break;

	default:
		cout << "[Debug] Invalid ticket timing choice";
	}
}

//Payment system for the interface
void pay(int a) {
	int normal, gold, amt[2], id;
	char newprice = 0.0;

	time_t t = time(NULL);
	tm * timePtr = localtime( & t);
	cout << "\n\n\t\t Thank you for selecting the show. Now please select your type of seatings:\n";
	cout << "\n\t\t\t\t <1> Single Seat \n";
	cout << "\t\t\t\t\t OR \n";
	cout << "\t\t\t\t <2> Couple Seat\n";

	int c = valdtChoice(4, 2);

	if (c == 1) {
		cout << "\n\t\t\t\t You've selected for a Single Seat\n\n\t\t\t\t ";
		system("PAUSE");
		system("CLS");
		amt[1] = a * 200;
		char final;
		cout << "\n\n\t\t\t\t Do you have Debit card(y/n): ";
		cin >> final;
		if (final == 'y') {
			amt[1] = amt[1] - (0.1 * amt[1]);

		}
		cout << "\n\t\t\t\t Want to pay by Card(y/n): ";
		char rep;
		cin >> rep;
		cout << "\n\t\t\t\t Paying :" << amt[1] << "\n";
		if (rep == 'y' || rep == 'Y') {
			cout << "\t\t\t\t Name of the card holder: ";
			char n[10];
			cin >> n;

			cout << "\n\t\t\t\t Enter the card number: ";
			char Card[16];
			gets(Card);
			cout << "\t\t\t\t Expiry(MM/YYYY): ";
			int expirymm, expiryyy;
			cin >> expirymm;
			cout << "\t\t\t\t/";
			cin >> expiryyy;
			while ((expirymm <= 0) || (expirymm > 12) || (expiryyy < (timePtr -> tm_year + 1900))) {
				if ((expirymm <= 0) || (expirymm > 12)) {
					cout << "\t\t\t\t Enter the month again: ";
					cin >> expirymm;
				}
				if (expiryyy < (timePtr -> tm_year + 1900)) {
					cout << "\t\t\t\t Please enter a valid year: ";
					cin >> expiryyy;
				}
			};
			cout << "\t\t\t\t Enter the CVV/CVV2 ";
			char password[3];
			int i = 0;
			while (i < 3) {
				password[i] = getch();
				cout << "*";
				++i;
			}
			password[i] = '\0';
		}

	} else {
		cout << "\n\t\t\t\t You've' selected Gold Class (couple) seat type\n\n\t\t\t\t ";
		system("PAUSE");
		system("CLS");
		amt[2] = a * 700;
		char final;
		cout << "\n\t\t\t\t Do you have Debit card(y/n): ";
		cin >> final;
		if (final == 'y') {
			amt[1] = amt[1] - (0.1 * amt[1]);

		}
		cout << "\n\t\t\t\t Want to pay by Card(y/n): ";
		char rep;
		cin >> rep;
		cout << "\n\t\t\t\t" << "Paying :" << amt[2] << "\n";
		if (rep == 'y' || rep == 'Y') {
			cout << "\t\t\t\t Name of the card holder: ";
			char n[10];
			cin >> n;

			cout << "\n\t\t\t\t Enter the card number: ";
			char Card[16];
			gets(Card);
			cout << "\n\t\t\t\t Expiry(MM/YY): ";
			int expirymm, expiryyy;
			cin >> expirymm;
			cout << "\t\t\t\t/";
			cin >> expiryyy;
			while (expirymm < (timePtr -> tm_mon) || expiryyy < (timePtr -> tm_year + 1900)) {
				if (expirymm <= (timePtr -> tm_mon)) {
					cout << "\n\t\t\t\t Enter the month again: ";
					cin >> expirymm;
				}
				if (expiryyy < (timePtr -> tm_year + 1900)) {
					cout << "\n\t\t\t\t Please enter a valid year: ";
					cin >> expiryyy;
				}
			};
			cout << "Enter the CVV/CVV2 ";
			char password[3];
			int i = 0;
			while (i < 3) {
				password[i] = getch();
				cout << "*";
				++i;
			}
			password[i] = '\0';
		}
		system("PAUSE");
	}
}

void printDrinksMenu() {
	cout << "\n\n\t\t\t\t Select type of beverages: ";
	cout << "\n\t\t\t\t <1> Carbonated Drinks";
	cout << "\n\t\t\t\t <2> Juice";
	cout << "\n\t\t\t\t <3> Hot Drinks";
	cout << "\n\t\t\t\t <4> Frappucino \n";
}

void printTiming() {
	system("CLS");
	cout << "\n\n\t\t\t\t Select the timing for the movie selected : ";
	cout << "\n\t\t\t\t <1> 1130";
	cout << "\n\t\t\t\t <2> 1500";
	cout << "\n\t\t\t\t <3> 2100";
	cout << "\n\t\t\t\t <4> 2300 \n";
}
