#include<iostream>
using namespace std;
#define capacity 100


struct User
{
    string fName;
    string lName;
    string email;
    string username;
    string password;
};
char option, choice;
int n = 0, m = 0;
string get_user();
string get_user_email();
string User_reg();
//void add_book();
void fill_user();
User usersInfoArray[capacity];

int main()
{
    fill_user();

    cout<<"\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd"<<endl;
    cout << "\t    WELCOME TO OUR LIBRARY \n";
    cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"<<endl;
    cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd MENU OPTIONS \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"<<endl;
    cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
    cout <<"\t User Registeration              ------ [1] \n";
    cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
    cin>>option;
    if (option == '1')
    {
        User_reg();
    }
}
void fill_user()
{
    for(int i=0; i<capacity; i++)
    {
        usersInfoArray[i] = {};
        usersInfoArray[i].username = "Somebody";
    }
}
string User_reg()
{
 comback:
    cout<<"Please fill the informations below to register in our library system."<<endl;
    cout<<"Enter you first name: ";
    cin>>usersInfoArray[n].fName;
    cout<<"\nEnter your last name: ";
    cin>>usersInfoArray[n].lName;
    get_user_email();
    get_user();
    cout<<"\nEnter your password.";
    cin>>usersInfoArray[n].password;
    cout<<"Thank you for your cooperation.";
    n++;
    cout<<"\nPress 'a' to return to register another user or 'b' to terminate the program.";
    cin>>choice;
    if(choice == 'a')
    {
        goto comback;
    }
}
string get_user()
{
 comehere:
    cout<<"\nEnter a user name: ";
    cin>>usersInfoArray[n].username;
    for(int i = 0; i < n; i++)
    {
        int Eq = (usersInfoArray[n].username).compare(usersInfoArray[i].username);

        if(Eq == 0)
        {
            cout << "This user name is taken";
            cout<<"\nPlease choose a different user name.";
            goto comehere;
        }
    }
    return usersInfoArray[n].username;
}
string get_user_email()
{
 comehere:
    cout<<"\nEnter your email address: ";
    cin>>usersInfoArray[n].email;
    string str = usersInfoArray[n].email;
    size_t foundAt = str.find("@");
    if (foundAt == string::npos){
        cout << "Your Email Should include @\n";
        goto comehere;
    }
    size_t foundDot = str.find(".com");
    if (foundDot == string::npos){
        cout << "Your Email Should include .com\n";
        goto comehere;
    }


    return usersInfoArray[n].email;
}
