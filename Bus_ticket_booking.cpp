#include<iostream>
using namespace std;
int main()
{
int route;
string destinantion;
int seats = 1;
long long Mob;
string name;
int amount;


string route1 = "Delhi to Sitamarhi";
string route2 = "Sitamarhi to Delhi";
string route3 = "Sitamarhi to Silliguri";
string route4 = "Silliguri to Sitamarhi";
cout << "********************* WELCOME TO RAZZ TRAVELS *********************" << endl;
cout << "Select a route :- " <<endl << "1) Delhi to Sitamarhi" << endl << "2) Sitamarhi to Delhi"<< endl << "3) Sitamarhi to Silliguri" << endl << "4) Silliguri to Sitamarhi"<< endl;
cout << "Route number - ";
cin >> route;
cout << endl;

if (route == 1)
{
    amount = 1245;
    destinantion = "# Delhi --> Sitamarhi";
    cout << "# Delhi --> Sitamarhi" << endl;
}
else if (route == 2)
{
    amount = 1455;
    destinantion = "# Sitamarhi --> Delhi";
    cout << "# Sitamarhi --> Delhi" << endl;
}
else if (route == 3)
{
    amount = 1650;
    destinantion = "# Sitamarhi --> Silliguri";
    cout << "# Sitamarhi --> Silliguri" << endl;
}
else
{
    amount = 1455;
    destinantion = "# Silliguri --> Sitamarhi";
    cout << "# Silliguri --> Sitamarhi" << endl;
}
for(seats =1; seats <= 50; seats++){
    if (seats <= 50)
    {
        cout << "Seats are available for this route" << endl;
        cin.ignore();
        cout << "Enter your name - ";
        getline(cin ,name);
        cout << endl;
        cout << "Contact Number - ";
        cin >> Mob;
        

        cout << endl;
        cout << "********************* TICKET *********************" << endl;
        cout << destinantion << endl;
        cout << "  Ticket number - " << seats << endl;
        cout << "  Name - " << name << endl;
        cout << "  Contact Number - " << Mob;
        cout << endl;
        cout << "  Amount is Rs " << amount << endl;
        cout << "  Thanks! Happy Journey " << endl;
        cout << "--------------------------------------------------" << endl;
        cout << endl;          
    }
    else
    {
        cout << "SORRY! WE HAVE NO MORE SEATS";
    }
  
}
return 0;

}