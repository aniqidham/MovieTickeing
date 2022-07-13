#include<iostream> 																			        		//Preprocessor Directive of Header Files
#include<string.h>
#include<iomanip>
#include<cctype>

using namespace std;

void Greeting(string & , string, int);
void End(); //function declaration for parameter pass by reference
int Selecttime(int);

int main() {

    char selection, response, ans, opt, action;
    int y = 1, choice, movieType, time, food[10], drinks[10], ticket, adult, kids, phoneN, foodIndex, drinkIndex;
    float tpp, Pdiscount, priceA, priceB, after, Fprice[10], Dprice[10], Tfoodprice = 0, payment;
    string name, email;
    bool validation = true;
    
	// Initialize arrays with zero value
	for(int i = 0; i < 10; i++) { Fprice[i] = 0; }
	for(int i = 0; i < 10; i++) { Dprice[i] = 0; }

    Greeting(name, email, phoneN);

    cout << "\n\t\t\t ----------------------------------";
    cout << "\n\t\t\t\t MOVIE TICKET SYSTEM";
    cout << "\n\t\t\t ----------------------------------";
    do //counter controlled loop
    {
        cout << "\n\tHello," << name << endl; //loop statement       
        y += 2; //updating
    }
    while (y <= 8); //evaluation
    cout << "\n\n\t\t\t\t <1> Movie Timings";
    cout << "\n\t\t\t\t <2> Food and Beverages";

    cout << "\n\tWelcome to our online movie booking system.";

    do {
        cout << "\n\tPlease Enter a Code to continue our service : ";
        cin >> choice;
        if (choice < 1 || choice > 2) {
            validation = false;
            cout << "\n\t\t\t [Invalid selection] Please input 1 or 2 only.\n";
        } else {
            validation = true;
        }
    } while (!validation);

    switch (choice) {
    case 1:
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

        do {
            cout << "\n\tPlease enter your movie code : ";
            cin >> movieType;
            if (movieType < 1 || movieType > 5) {
                validation = false;
                cout << "\n\t\t\t [Invalid selection] Please input 1 to 5 only.\n";
            } else {
                validation = true;
            }
        } while (!validation);

        system("CLS");
        Selecttime(time);

        if (choice == 1) {
            cout << "\n\tHow many ticket do you want to purchase : ";
            cin >> ticket;

            cout << "\n\tHow many adult : ";
            cin >> adult;
            priceA = 15 * adult;

            cout << "\n\tHow many kids : ";
            cin >> kids;
            priceB = 10 * kids;

            tpp = priceA + priceB;

        }

        cout << "\t\nARE YOU A STUDENT? (Y or N): ";
        cin >> ans;

        if (ans == 'Y' || ans == 'y') {
            Pdiscount = tpp * 0.1;
            after = tpp - Pdiscount;

        } else {
            Pdiscount = 0;
            after = tpp - Pdiscount;
        }

        cout << fixed << setprecision(2);
        cout << "\n\tYour Ticket Price will be RM" << after;
        
        foodIndex = 0;
        
        while (foodIndex < 10)
        {
        	cout << "\n\tDo you want to add food? (Y or N): ";
	        cin >> selection;
	
	        if (selection == 'Y' || selection == 'y') {
		        cout << "\n\t\t\t\t\t   FOOD   \t" << "\tCODE\t" << endl;
		        cout << "\t\t\t\t\t ***************************";
		        cout << "\n\t\t\t\t\tPopcorn \t" << "\t  1\t";
		        cout << "\n\t\t\t\t\tBig Dipper\t" << "\t  2\t";
		        cout << "\n\t\t\t\t\tHorn Chip\t" << "\t  3\t";
		        cout << "\n\t\t\t\t\tHot Minnies\t" << "\t  4\t";
		        cout << "\n\t\t\t\t\tChicke Samosa\t" << "\t  5\t";
		        cout << "\n\t\t\t\t\tPopcorn Chicken\t" << "\t  6\t";
		        cout << "\n\tPlease enter your food by code:";
		        cin >> food[foodIndex];
		
		        cout << "\n\tMedium or Large (M or L)?: ";
		        cin >> response;
		
		        if (response == 'M' || response == 'm') {
		            Fprice[foodIndex] = 10;
		            cout << "\n\tPrice for medium is RM " << Fprice[foodIndex] << endl;
		        } else if (response == 'L' || response == 'l') {
		            Fprice[foodIndex] = 15;
		            cout << "\n\tPrice for large is RM " << Fprice[foodIndex] << endl;
		        } else
		            cout << "INVALID";
		    } else {
                foodIndex = 99; // Exit the while loop prematurely
            }
	            
	        foodIndex++;
	    }
	    
	    drinkIndex = 0;
        
        while (drinkIndex < 10)
        {
	        cout << "\n\tDo you want to add drinks? (Y or N): ";
	        cin >> selection;
	
	        if (selection == 'Y' || selection == 'y') {
	            cout << "\n\t\t\t\t\t   DRINKS   \t" << "\t	CODE\t" << endl;
	            cout << "\t\t\t\t\t ************************************";
	            cout << "\n\t\t\t\t\tHot Drinks \t" << "\t  	1\t";
	            cout << "\n\t\t\t\t\tCarbonated Drinks\t" << "\t2\t";
	            cout << "\n\t\t\t\t\tFrappucino\t" << "\t 	3\t";
	            cout << "\n\t\t\t\t\tJuice\t" << "\t 		4\t";
	            cout << "\n\t\t\t\t\tTea\t" << "\t		5\t";
	
	            cout << "\n\tPlease enter your drinks by code: ";
	            cin >> drinks[foodIndex];
	
	            Dprice[drinkIndex] = 8;
	            cout << "\n\tPrice for drink is RM " << Dprice[drinkIndex] << endl;
	
	        } else {
				drinkIndex = 99;	// Exit the while loop prematurely
	        }
	        
	        drinkIndex++;
	    }
	    
	    for(int i = 0; i < 10; i++)
	    {
	    	Tfoodprice += Fprice[i] + Dprice[i];
		}

        cout << "\n\tThe total price of your tickets is RM " << tpp << endl;
        cout << "\n\tThe total price of your food and beverage is RM " << Tfoodprice << endl;

        payment = after + Tfoodprice;
        cout << "\n\tGrand total payment is RM " << payment << endl;
        End();
        break;

    case 2:
        system("CLS");
        
        foodIndex = 0;
        
        while (foodIndex < 10)
        {
        	cout << "\n\tDo you want to add food? (Y or N): ";
	        cin >> selection;
	
	        if (selection == 'Y' || selection == 'y') {
		        cout << "\n\t\t\t\t\t   FOOD   \t" << "\tCODE\t" << endl;
		        cout << "\t\t\t\t\t ***************************";
		        cout << "\n\t\t\t\t\tPopcorn \t" << "\t  1\t";
		        cout << "\n\t\t\t\t\tBig Dipper\t" << "\t  2\t";
		        cout << "\n\t\t\t\t\tHorn Chip\t" << "\t  3\t";
		        cout << "\n\t\t\t\t\tHot Minnies\t" << "\t  4\t";
		        cout << "\n\t\t\t\t\tChicke Samosa\t" << "\t  5\t";
		        cout << "\n\t\t\t\t\tPopcorn Chicken\t" << "\t  6\t";
		        cout << "\n\tPlease enter your food by code:";
		        cin >> food[foodIndex];
		
		        cout << "\n\tMedium or Large (M or L)?: ";
		        cin >> response;
		
		        if (response == 'M' || response == 'm') {
		            Fprice[foodIndex] = 10;
		            cout << "\n\tPrice for medium is RM " << Fprice[foodIndex] << endl;
		        } else if (response == 'L' || response == 'l') {
		            Fprice[foodIndex] = 15;
		            cout << "\n\tPrice for large is RM " << Fprice[foodIndex] << endl;
		        } else
		            cout << "INVALID";
		    } else {
                foodIndex = 99; // Exit the while loop prematurely
            }
	            
	        foodIndex++;
	    }
	    
	    drinkIndex = 0;
        
        while (drinkIndex < 10)
        {
	        cout << "\n\tDo you want to add drinks? (Y or N): ";
	        cin >> selection;
	
	        if (selection == 'Y' || selection == 'y') {
	            cout << "\n\t\t\t\t\t   DRINKS   \t" << "\t	CODE\t" << endl;
	            cout << "\t\t\t\t\t ************************************";
	            cout << "\n\t\t\t\t\tHot Drinks \t" << "\t  	1\t";
	            cout << "\n\t\t\t\t\tCarbonated Drinks\t" << "\t2\t";
	            cout << "\n\t\t\t\t\tFrappucino\t" << "\t 	3\t";
	            cout << "\n\t\t\t\t\tJuice\t" << "\t 		4\t";
	            cout << "\n\t\t\t\t\tTea\t" << "\t		5\t";
	
	            cout << "\n\tPlease enter your drinks by code: ";
	            cin >> drinks[foodIndex];
	
	            Dprice[drinkIndex] = 8;
	            cout << "\n\tPrice for drink is RM " << Dprice[drinkIndex] << endl;
	
	        } else {
				drinkIndex = 99;	// Exit the while loop prematurely
	        }
	        
	        drinkIndex++;
	    }
	    
	    cout << "THANK YOU !!" << endl;
	    
	    for(int i = 0; i < 10; i++)
	    {
	    	Tfoodprice += Fprice[i] + Dprice[i];
		}
	    
        cout << "\n\tThe total price of your food and beverage is RM " << Tfoodprice << endl;
        End();
	    
        break;

    default:
        cout << "\n\n\n\t\t\t\t\tINVALID CODE." << endl;
        break;
    }
    return 0;

}

void Greeting(string & name, string email, int phoneN) {
    cout << "\n\t\t\t ----------------------------------";
    cout << "\n\t\t\t\t MOVIE TICKET SYSTEM";
    cout << "\n\t\t\t ----------------------------------";

    bool validation = true;

    do {
        validation = true; // Reset flag to true

        cout << "\n\tTo login this service, please enter your name: ";
        getline(cin, name);

        for (int i = 0; i < name.length(); i++) // aniq1 idham
        {
            if (!(isalpha(name[i]) || isblank(name[i]))) {
                validation = false;
            }
        }

        if (!validation) {
            cout << "Your name must be in alphabet";
        }
    } while (!validation);

    cout << "\n\tEnter your email: ";
    cin >> email;

    //	do
    //	{																									
    cout << "\n\tEnter your phone number: ";
    cin >> phoneN;

    //		if (!isdigit(phoneN)){
    //			validation = false;
    //			cout << "\n\t\t\t [Invalid input] Please numeric only.\n";
    //		} else {
    //			validation = true;
    //		}
    //	}while (!validation);
}

void End() {
    cout << "\n\n\t\t===CONGRATULATIONS.ALL YOUR TRANSACTION IS SUCCESS===";
    cout << "\n\tWE WILL SEND THE FILE AND PAYMENT RECEIPT IN YOUR EMAIL WITHIN 10 MINUTES." << endl;
    cout << "\n\tPLEASE CHECK YOUR EMAIL AFTER THAT." << endl;
}

int Selecttime(int time) {
    cout << "\n\n\t\t\t\t Select the the timings for Movie: ";

    cout << "\n\t\t\t\t <1> 1130";
    cout << "\n\t\t\t\t <2> 1500";
    cout << "\n\t\t\t\t <3> 2100";
    cout << "\n\t\t\t\t <4> 2300 \n";

    bool validation = true;

    do {

        cout << "\n\tPlease enter your time by code: ";
        cin >> time;
        if (time < 1 || time > 4) {
            validation = false;
            cout << "\n\t\t\t [Invalid selection] Please input 1 to 4 only.\n";
        } else {
            validation = true;
        }

    } while (!validation);

}
