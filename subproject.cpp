#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
void add();          //insert books
void display();
int n;             //the numbers of books you wanna access;
struct book       //structure of name book
{
	int bookid;                ///////////////////////////
	char bookname[60];         ///////////////////////////
	char authorname[40];       ///////////////////////////
	char bookcategory[20];     ///Members of structure////
	int bookpubyear;           ///////////////////////////
}books[100000];
 char ch;

int main()
{
	lb:
system("color B");
system("cls");

		cout << setw( 40 ) << "-------------" << endl

          << setw( 40 ) << "| MAIN MENU |" << endl

          << setw( 40 ) << "-------------" << endl << endl

          << setw( 52 )

          << "Please choose one of the options below: "

          << endl << setw( 71 )

          << "--------------------------------------------------------------"

           << endl << endl
           << setw( 34 ) << "( I ) insert all  Books" << endl << endl
           << setw( 33 ) << "( D ) Diplay all Books" << endl << endl
           << setw( 31 ) << "( O ) Sort all Books" << endl << endl
           << setw( 35 ) << "( c ) check avaliablity " << endl << endl
           << setw( 21 ) << "( Q ) Quit" << endl << endl
		   <<setw( 32 ) << "Enter Option      [ ]" << endl << endl;

		cin>>ch;

		switch(ch)
		{
            case 'i':
            case 'I': add();break;
            case 'o':
            case 'D': display();break;
            case 'q':
		 	case 'Q':exit(0);break;
            default:
			puts("\n\n \t\tSelect only from the given menu.....\n \t\tpress enter to to go to main menu......");
            goto lb;
       }
}
void add()
	{
	 cout<<" INSERT  THE NUMBER OF BOOKS YOU WANT TO ADD  :";
     cin>>n;

for(int i= 0;i<n;i++)
  {
      cout<<"\n";
      cout<<"enter the id of book"<<i+1<<":";
      cin>>books[i].bookid;
      cout<<"enter the name of book "<<i+1<<":";
      cin>>books[i].bookname;
	  cout<<"enter the autorsname  of book"<<i+1<<":";
      cin>>books[i].authorname;
      cout<<"the catagory of book "<<i+1<<":";
      cin>>books[i].bookcategory;
      cout<<"enter the publish year of book "<<":";
      cin>>books[i].bookpubyear;

}
main();

	}

void display()
	{
		system("cls");
		system("color 8");

        cout<<"\n\n\t\tBook LIST\n\n";
         cout<<"========================================================================================================================\n";
          cout<<"Book ID "<<"\t\t"<<"Book name"<<"\t\t"<<"Author name"<<"\t\t"<<"Category"<<"\t\t"<<"Year of Publication"<<endl;
         cout<<"________________________________________________________________________________________________________________________\n";

  for(int i=0;i<n;i++)
  {
    cout<<"  "<<books[i].bookid<<"\t\t|\t"<<books[i].bookname<<"\t\t|\t"<<books[i].authorname<<"\t\t|\t"<<books[i].bookcategory<<"\t\t|\t"<<books[i].bookpubyear;
      cout<<endl;
    }
         cout<<"========================================================================================================================\n";
 cout<<"Press enter to goto main manu.....";


}
