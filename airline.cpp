#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();

class Management{
    public:
        Management(){
            mainMenu();
        }
};

class Details{
    public:
        static string name, gender;
        int phoneNo;
        int age;
        string add;
        static int cId;
        char arr[100];

        void information() {
            cout<<"\n Enter the customer Id : ";
            cin>>cId;
            cout<<"\n Enter the name : ";
            cin>>name;
            cout<<"\n Enter the age : ";
            cin>> age;
            cout<<"\n Address : ";
            cin>>add;
            cout<<"\n Gender : ";
            cin>>gender;
            cout<<"Your details are save with us \n"<<endl;
        }
};

int Details::cId;
string Details::name;
string Details::gender;


class registration{
    public: 
        static int choice;
        int choice1;
        int back;
        static float charges;
        
        void flights(){
            string flightN[]={"Dubai","Canada","Uk","USA","Australia","Eurpose"};
            for(int a=0;a,6;a++){
                cout<<(a+1)<<".flight to"<<flightN[a]<<endl;
            }

            cout<<"\n Welcome to the Airlines!"<<endl;
            cout<<"Press ther number of the country fo which you want to book the flight:";
            cin>>choice;

            switch(choice)
            {
                case 1:
                    {
                        cout<<"----------------Welcometo Dubai Emirates -------------------------\n"<<endl;
                        
                        cout<<"Your confort is our priority. Enjoy the journey!"<<endl;
                        cout<<"Following are the flights \n"<<endl;

                        cout<<"1. DUB - 498"<<endl;
                        cout<<"\t 03-01-2022 08:00 AM 10 hrs  Rs. 14000"<<endl;

                        cout<<"2. DUB - 658"<<endl;
                        cout<<"\t 03-01-2022 12:00 AM 10 hrs  Rs. 10000"<<endl;

                        cout<<"1. DUB - 432"<<endl;
                        cout<<"\t 03-01-2022 08:00 PM 10 hrs  Rs. 8000"<<endl;

                        cout<<"\n Select the flight you want to book : ";
                        cin>>choice1;
                        if(choice1==1){
                            charges = 14000;
                            cout<<"\n You have successfully booked the flight DUB - 498"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;

                        }
                        else if (choice1==2){
                            charges = 10000;
                            cout<<"\n You have successfully booked the flight DUB - 658"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else if (choice1==3){
                            charges = 8000;
                            cout<<"\n You have successfully booked the flight DUB - 432"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else{
                            cout<<"Invaild input, shifting to the previous menu."<<endl;
                            flights();
                        }
                        cout<<"Press any key to go back to the main menu : "<<endl;
                        cin>>back;

                        if(back==1){
                            mainMenu();
                        }
                        else{
                            mainMenu();
                        }
                    }
                    case 2:
                    {
                        cout<<"----------------Welcometo Canadian Airlanes -------------------------\n"<<endl;
                        
                        cout<<"Your confort is our priority. Enjoy the journey!"<<endl;
                        cout<<"Following are the flights \n"<<endl;

                        cout<<"1. CA - 498"<<endl;
                        cout<<"\t 03-01-2022 08:00 AM 10 hrs  Rs. 34000"<<endl;

                        cout<<"2. CA - 658"<<endl;
                        cout<<"\t 03-01-2022 12:00 AM 10 hrs  Rs. 29000"<<endl;

                        cout<<"1. CA - 432"<<endl;
                        cout<<"\t 03-01-2022 08:00 PM 10 hrs  Rs. 40000"<<endl;

                        cout<<"\n Select the flight you want to book : ";
                        cin>>choice1;
                        if(choice1==1){
                            charges = 34000;
                            cout<<"\n You have successfully booked the flight CA - 498"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;

                        }
                        else if (choice1==2){
                            charges = 29000;
                            cout<<"\n You have successfully booked the flight CA - 658"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else if (choice1==3){
                            charges = 40000;
                            cout<<"\n You have successfully booked the flight CA - 432"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else{
                            cout<<"Invaild input, shifting to the previous menu."<<endl;
                            flights();
                        }
                        cout<<"Press any key to go back to the main menu : "<<endl;
                        cin>>back;

                        if(back==1){
                            mainMenu();
                        }
                        else{
                            mainMenu();
                        }
                    }
                    case 3:
                    {
                        cout<<"----------------Welcometo to UK Airlanes -------------------------\n"<<endl;
                        
                        cout<<"Your confort is our priority. Enjoy the journey!"<<endl;
                        cout<<"Following are the flights \n"<<endl;

                        cout<<"1. UK - 798"<<endl;
                        cout<<"\t 08-01-2022 11:00 AM 14 hrs  Rs. 44000"<<endl;

                        cout<<"\n Select the flight you want to book : ";
                        cin>>choice1;
                        if(choice1==1){
                            charges = 34000;
                            cout<<"\n You have successfully booked the flight UK - 798"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;

                        }
                        else{
                            cout<<"Invaild input, shifting to the previous menu."<<endl;
                            flights();
                        }
                        cout<<"Press any key to go back to the main menu : "<<endl;
                        cin>>back;

                        if(back==1){
                            mainMenu();
                        }
                        else{
                            mainMenu();
                        }
                    }
                    case 4:
                    {
                        cout<<"----------------Welcometo US Airways -------------------------\n"<<endl;
                        
                        cout<<"Your confort is our priority. Enjoy the journey!"<<endl;
                        cout<<"Following are the flights \n"<<endl;

                        cout<<"1. US - 897"<<endl;
                        cout<<"\t 04-01-2022 08:00 AM 22 hrs  Rs. 54000"<<endl;

                        cout<<"2. US - 874"<<endl;
                        cout<<"\t 09-01-2022 12:00 AM 18 hrs  Rs. 38907"<<endl;

                        cout<<"1. US - 801"<<endl;
                        cout<<"\t 06-01-2022 08:00 PM 17.20 hrs  Rs. 36999"<<endl;

                        cout<<"\n Select the flight you want to book : ";
                        cin>>choice1;
                        if(choice1==1){
                            charges = 54000;
                            cout<<"\n You have successfully booked the flight US - 897"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;

                        }
                        else if (choice1==2){
                            charges = 38907;
                            cout<<"\n You have successfully booked the flight US - 874"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else if (choice1==3){
                            charges = 36999;
                            cout<<"\n You have successfully booked the flight US - 801"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else{
                            cout<<"Invaild input, shifting to the previous menu."<<endl;
                            flights();
                        }
                        cout<<"Press any key to go back to the main menu : "<<endl;
                        cin>>back;

                        if(back==1){
                            mainMenu();
                        }
                        else{
                            mainMenu();
                        }
                    }
                    case 5:
                    {
                        cout<<"----------------Welcome to Australian Airways -------------------------\n"<<endl;
                        
                        cout<<"Your confort is our priority. Enjoy the journey!"<<endl;
                        cout<<"Following are the flights \n"<<endl;

                        cout<<"1. AS - 456"<<endl;
                        cout<<"\t 04-01-2022 08:00 AM 22 hrs  Rs. 54000"<<endl;

                        cout<<"2. AS - 876"<<endl;
                        cout<<"\t 09-01-2022 12:00 AM 18 hrs  Rs. 38907"<<endl;

                        cout<<"1. AS - 654"<<endl;
                        cout<<"\t 06-01-2022 08:00 PM 17.20 hrs  Rs. 36999"<<endl;

                        cout<<"\n Select the flight you want to book : ";
                        cin>>choice1;
                        if(choice1==1){
                            charges = 54000;
                            cout<<"\n You have successfully booked the flight AS - 456"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;

                        }
                        else if (choice1==2){
                            charges = 38907;
                            cout<<"\n You have successfully booked the flight AS - 876"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else if (choice1==3){
                            charges = 36999;
                            cout<<"\n You have successfully booked the flight AS - 654"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else{
                            cout<<"Invaild input, shifting to the previous menu."<<endl;
                            flights();
                        }
                        cout<<"Press any key to go back to the main menu : "<<endl;
                        cin>>back;

                        if(back==1){
                            mainMenu();
                        }
                        else{
                            mainMenu();
                        }
                    }
                    case 6:
                    {
                        cout<<"----------------Welcome to Europeon Airlines-------------------------\n"<<endl;
                        
                        cout<<"Your confort is our priority. Enjoy the journey!"<<endl;
                        cout<<"Following are the flights \n"<<endl;

                        cout<<"1. EU - 127"<<endl;
                        cout<<"\t 04-01-2022 08:00 AM 22 hrs  Rs. 54000"<<endl;

                        cout<<"2. EU - 453"<<endl;
                        cout<<"\t 09-01-2022 12:00 AM 18 hrs  Rs. 38907"<<endl;

                        cout<<"1. EU - 345"<<endl;
                        cout<<"\t 06-01-2022 08:00 PM 17.20 hrs  Rs. 36999"<<endl;

                        cout<<"\n Select the flight you want to book : ";
                        cin>>choice1;
                        if(choice1==1){
                            charges = 54000;
                            cout<<"\n You have successfully booked the flight EU - 127"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;

                        }
                        else if (choice1==2){
                            charges = 38907;
                            cout<<"\n You have successfully booked the flight EU - 453"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else if (choice1==3){
                            charges = 36999;
                            cout<<"\n You have successfully booked the flight EU - 345"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else{
                            cout<<"Invaild input, shifting to the previous menu."<<endl;
                            flights();
                        }
                        cout<<"Press any key to go back to the main menu : "<<endl;
                        cin>>back;

                        if(back==1){
                            mainMenu();
                        }
                        else{
                            mainMenu();
                        }
                    }
                    default:
                    {
                        cout<<"Invalid input, shifting you to the main menu!"<<endl;
                        mainMenu();
                        break;
                    }
            }
        }
};

float registration::charges;
int registration::choice;
class ticket : public registration, Details{
    public:
        void Bill(){
            string destination = "";
            ofstream outf("records.txt");
            {
                outf<<"---------------Delhi Airlines-------------"<<endl;
                outf<<"-------------------Ticket-----------------"<<endl;
                outf<<"------------------------------------------"<<endl;    
                
                outf<<"Customer Id : "<<Details::cId<<endl;
                outf<<"Customer Name : "<<Details::name<<endl;
                outf<<"Customer Gender : "<<Details::gender<<endl;
                outf<<"\tDescription "<<endl<<endl;

                if(registration::choice==1){
                    destination="Dubai";
                }
                else if(registration::choice==2){
                    destination="Canada";
                }
                else if(registration::choice==3){
                    destination="UK";
                }
                else if(registration::choice==4){
                    destination="USA";
                }
                else if(registration::choice==5){
                    destination="Australia";
                }
                else if(registration::choice==6){
                    destination="Europe";
                }

                outf<<"Destination : \t\t"<<destination<<endl;
                outf<<"Flight cost : \t\t"<<registration::charges<<endl;
            }
            outf.close();
        }
        void dispBill(){
            ifstream ifs("records.txt");
            {
                if(ifs){
                    cout<<"File error!"<<endl;
                }
                while(!ifs.eof()){
                    ifs.getline(arr,100);
                    cout<<arr<<endl;
                }
            }
            ifs.close();
        }
};

void mainMenu(){
    int lchoice;
    int schoice;
    int back;

    cout<<"\t             Delhi Airlines \n"<<endl;
    cout<<"\t-------------Main Menu -----------------"<<endl;

    cout<<"\t ........................................"<<endl;
    cout<<"\t|\t\t\t\t\t\t\t|"<<endl;

    cout<<"\t|\t Press 1 to add the Customer Details      \t|"<<endl;
    cout<<"\t|\t Press 2 for Flight Registration.      \t|"<<endl;
    cout<<"\t|\t Press 3 for Ticket and Charges.      \t|"<<endl;
    cout<<"\t|\t Press 4 to Exit.      \t|"<<endl;
    cout<<"\t|\t\t\t\t\t\t\t|"<<endl;
    cout<<"\t ........................................"<<endl;

    cout<<"Enter the choice :  ";
    cin>>lchoice;

    Details d;
    registration r;
    ticket t;
    
    switch(lchoice){
        case 1:{
            cout<<"------------Customers--------------\n"<<endl;
            d.information();
            cout<<"Press any key to go back to Main menu ";
            cin>>back;
            if(back==1){
                mainMenu();
            }
            else{
                mainMenu();
            }
            break;
        }
        case 2:
        {
            cout<<"-------Book a flight using this system ---------------\n"<<endl;
            r.flights();
            break;
        }
        case 3:
        {
            cout<<"---------Get Your Ticket --------\n"<<endl;
            t.Bill();

            cout<<"Your ticket is printed, you can collect it \n"<<endl;
            cout<<"Press 1 to display your ticket ";
            cin>>back;
            if(back==1){
            t.dispBill();
            cout<<"Press any key to go back to main menu : ";
            cin>>back;
                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            }
            else
            {
                mainMenu();
            }
            break;
        }
        case 4:
        {
            cout<<"\n\n\t______________Thank-You__________________"<<endl;
            break;
        }
        default :
        {
            cout<<"Invalid input, Please try again!\n"<<endl;
            mainMenu();
            break;
        }
    }
}

int main(){
    Management Mobj;
    return 0;
}
