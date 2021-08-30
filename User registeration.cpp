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
struct addBook
{
    string Title;
    string bookNo;
    string Author;
    unsigned int YOP;
};
char option;
int n = 0, m = 0;
string get_user(User);
string User_reg(User);
//void add_book();
void fill_user(User);

int main()
{
    User U[n];
    fill_user(U[n]);
    cout<<"\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd"<<endl;
    cout << "\t    WELCOME TO OUR LIBRARY \n";
    cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"<<endl;
    cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd MENU OPTIONS \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"<<endl;
    cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";

    cout <<"\t User Registeration              ------ [1] \n";
    cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";

    cout <<"\t Add new book                    ------ [2] \n ";
    cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
    cin>>option;
    if (option == '1')
    {
        User_reg(U[n]);
    }
    else if (option == '2')
    {
        return 0;
    }
}
void fill_user(User U[])
{
    for(int i=0; i<capacity; i++)
    {
        U[capacity].username = "Somebody";
    }
}
string User_reg(User U[])
{

    cout<<"Please fill the informations below to register in our library system."<<endl;
    cout<<"Enter you first name: ";
    cin>>U[n].fName;
    cout<<"\nEnter your last name: ";
    cin>>U[n].lName;
    cout<<"\nEnter your email address: ";
    cin>>U[n].email;
    get_user(U[n]);
    cout<<"\nEnter your password.";
    cin>>U[n].password;
    cout<<"Thank you for your cooperation.";
    n++;

}
void add_book()
{


}
string get_user(User U[])
{
comehere:
    bool taken = false;
    cout<<"\nEnter a user name: ";
    cin>>U[n].username;
    for(int i = 0; i < capacity; i++)
    {
        int Eq = (U[n].username).compare(U[i].username);
        if(Eq == 0)
        {
            cout << "This user name is taken";
            cout<<"\nPlease choose a different user name.";
            goto comehere;
        }
    }

    return U[n].username;
}
