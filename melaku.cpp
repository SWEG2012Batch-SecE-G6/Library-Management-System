#include<iostream>
#include<iomanip>
#include<string.h>
#include<cstring>
#include<algorithm>
using namespace std;
void add();                       //insert books
void display();                  //display book
void check_availability();      //check availabilty
void search1(char a);          //search any books on the shelf
void sorts();                 //sort function
void sortas();               //sort in ascending order
void sortds();              //sort in descending order
void sortasname();         //sort in ascending order by name
void sortasid();          //sort in ascending order by id
void sortascategory();   //sort in ascending order by category
void sortaspubyear();   //sort in ascending order by publication year
void sortasauthor();   //sort in ascending order by author
void sortdsname();    //sort in descending order by name
void sortdsid();     //sort in descending order by id
void sortdscategory();  //sort in descending order by category
void sortdspubcom();    //sort in descending order by publication company
void sortdspubyear();   //sort in descending order by publication year
void sortdsauthor();    //sort in descending order by author

int n;//the numbers of books you wanna access;
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

		cout << setw( 25 ) << "-------------" << endl

          << setw( 25 ) << "| MAIN MENU |" << endl

          << setw( 25 ) << "-------------" << endl << endl

          << setw( 52 )

          << "Please choose one of the options below: "

          << endl << setw( 71 )

          << "--------------------------------------------------------------"

           << endl << endl
           << setw( 34 ) << "( I ) insert all  Books" << endl << endl
           << setw( 33 ) << "( D ) Diplay all Books" << endl << endl
           << setw( 31 ) << "( O ) Sort all Books" << endl << endl
           << setw( 35 ) << "( c ) check avaliablity " << endl << endl
           << setw( 30 ) << "( s ) search books " << endl << endl
           << setw( 21 ) << "( Q ) Quit" << endl << endl
		   <<setw( 32 ) << "Enter Option      [ ]" << endl << endl;

		cin>>ch;

		switch(ch)
		{
            case 'i':
            case 'I': add();break;
            case 'o':
            case 'O': sorts();main();break;
			case 'd':
		 	case 'D': display(); main();break;
		 	case 's': char a;search1(a);break;
            case 'c':
            case 'C':check_availability();break;
            case 'q':
		 	case 'Q':exit(0);break;

		 	default:
			cout<<"\n\n \t\tSelect only from the given menu.....\n \t\tpress enter to to go to main menu......";

			goto lb;
       } //end switch
}       //end main
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
      cin.ignore();
      gets(books[i].bookname);
	  cout<<"enter the autorsname  of book"<<i+1<<":";
	  cin.ignore();
      gets(books[i].authorname);
      cout<<"the catagory of book "<<i+1<<":";
      cin.ignore();
      gets(books[i].bookcategory);
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

 system("pause");

}


void sorts()
{
	system("cls");
system("color 9");
	   cout <<setw( 27 )<< "In Sort Function"<<endl
          << setw( 52 )<< "Please choose one of the options below: "

          << endl << setw( 71 )

          << "--------------------------------------------------------------"

          << endl << endl

          << setw( 40 ) << "( A ) Sort in Ascending Order" << endl << endl

          << setw( 41 ) << "( D ) Sort in Descending Order" << endl << endl

          <<setw( 32 ) << "Enter Option      [ ]" << endl << endl;

		cin>>ch;




	   switch(ch)

       {
         case 'a':
		 case 'A':sortas();break;

		 case 'd':
		 case 'D': sortds();break;

         default:
		cout<<"\n\n \t\tSelect only from the given menu.....\n\t\tPress enter to select again.....";

		sorts();

       }

}

///////Sort in Ascending Order///////

void sortas()
{
	system("cls");
	system("color 1");
	   cout <<setw( 27 )<< "In Sort Function"<<endl
          << setw( 52 )<< "Please choose one of the options below: "

          << endl << setw( 71 )

          << "--------------------------------------------------------------"

          << endl << endl

          << setw( 29 ) << "( N ) Sort by name" << endl << endl

          << setw( 27 ) << "( I ) Sort by Id" << endl << endl

          << setw( 36 ) << "( T ) Sort by author name" << endl << endl

          << setw( 33 ) << "( C ) Sort by Category" << endl << endl

          << setw( 41 ) << "( Y ) Sort by Publication Year" << endl << endl

          <<setw( 32 ) << "Enter Option      [ ]" << endl << endl;

	cin>>ch;
 switch(ch)

       {
         case 'n':
		 case 'N':sortasname();break;

		 case 'i':
		 case 'I': sortasid();break;

		 case 't':
		 case 'T': sortasauthor();break;

		 case 'c':
		 case 'C':sortascategory();break;
         case 'y':
		 case 'Y':sortaspubyear();break;

         default:
		puts("\n\n \t\tSelect only from the given menu.....\n\t\tPress enter to select again.....");

		sortas();

       }
}

///////Sort in Desending Order///////

void sortds()
{
	system("cls");
system("color 7");
	   cout <<setw( 27 )<< "In Sort Function"<<endl
          << setw( 52 )<< "Please choose one of the options below: "

          << endl << setw( 71 )

          << "--------------------------------------------------------------"

          << endl << endl

          << setw( 29 ) << "( N ) Sort by name" << endl << endl

          << setw( 27 ) << "( I ) Sort by Id" << endl << endl

          << setw( 36 ) << "( T ) Sort by author name" << endl << endl

          << setw( 33 ) << "( C ) Sort by Category" << endl << endl
            << setw( 41 ) << "( Y ) Sort by Publication Year" << endl << endl

		  <<setw( 32 ) << "Enter Option      [ ]" << endl << endl;

		cin>>ch;
switch(ch)

       {
         case 'n':
		 case 'N':
		     sortdsname();break;

		 case 'i':
		 case 'I': sortdsid();break;

		 case 't':
		 case 'T': sortdsauthor();break;

		 case 'c':
		 case 'C':sortdscategory();break;
         case 'y':
		 case 'Y':sortdspubyear();break;

         default:
		puts("\n\n \t\tSelect only from the given menu.....\n\t\tPress enter to select again.....");

		sortds();

       }
}

///////Sort in Ascending order by id///////

void sortasid()
	{
		int i,j;
		book temp;
		system("cls");
		cout<<endl;
		cout<< "Sorting in Ascending Order by Id\n";
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(books[j].bookid>books[j+1].bookid)
				{
					temp = books[j];
					books[j]=books[j+1];
					books[j+1]=temp;
				}
			}
		}
		display();
		 system("pause");
	}

///////Sort in Descending order by id///////

void sortdsid()
	{
		int i,j;
		book temp;
		system("cls");
		cout<<endl;
		cout<< "Sorting in Descending Order by Id\n";
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(books[j].bookid<books[j+1].bookid)
				{
					temp = books[j];
					books[j]=books[j+1];
					books[j+1]=temp;
				}
			}
		}
		display();
		 system("pause");
	}

///////Sort in Ascending order by year///////

void sortaspubyear()
	{
		int i,j;
		book temp;
		system("cls");
		cout<<endl;
		cout<< "Sorting in Ascending Order by Publishing Year\n";
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(books[j].bookpubyear>books[j+1].bookpubyear)
				{
					temp = books[j];
					books[j]=books[j+1];
					books[j+1]=temp;
				}
			}
		}
		display();
		 system("pause");
	}

///////Sort in Descending order by year///////

void sortdspubyear()
	{
		int i,j;
		book temp;
		system("cls");
		cout<<endl;
		cout<< "Sorting in Descending Order by Publishing Year\n";
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(books[j].bookpubyear<books[j+1].bookpubyear)
				{
					temp = books[j];
					books[j]=books[j+1];
					books[j+1]=temp;
				}
			}
		}
		display();
		 system("pause");
	}

///////Sort in Ascending order by name///////

void sortasname()
	{
		int i,j;
		book temp;
		system("cls");
		cout<<endl;
		cout<< "Sorting in Ascending Order by Name\n";
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(strcmp(books[j].bookname,books[j+1].bookname)>0)
				{
					temp = books[j];
					books[j]=books[j+1];
					books[j+1]=temp;
				}
			}
		}
		display();
		 system("pause");
	}

///////Sort in Descending order by name///////

void sortdsname()
	{
		int i,j;
		book temp;
		system("cls");
		cout<<endl;
		cout<< "Sorting in Descending Order by Name\n";
		for(i=0;i<2;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(strcmp(books[j].bookname,books[j+1].bookname)<0)
				{
					temp = books[j];
					books[j]=books[j+1];
					books[j+1]=temp;
				}
			}
		}
		display();
		 system("pause");
	}

///////Sort in Ascending order by author///////

void sortasauthor()
	{
		int i,j;
		book temp;
		system("cls");
		cout<<endl;
		cout<< "Sorting in Ascending Order by Author\n";
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(strcmp(books[j].authorname,books[j+1].authorname)>0)
				{
					temp = books[j];
					books[j]=books[j+1];
					books[j+1]=temp;
				}
			}
		}
		display();
		 system("pause");
	}

///////Sort in Descending order by author///////

void sortdsauthor()
	{
		int i,j;
		book temp;
		system("cls");
		cout<<endl;
		cout<< "Sorting in Descending Order by Author\n";
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(strcmp(books[j].authorname,books[j+1].authorname)<0)
				{
					temp = books[j];
					books[j]=books[j+1];
					books[j+1]=temp;
				}
			}
		}
		display();
		 system("pause");
	}

///////Sort in Ascending order by category///////

void sortascategory()
	{
		int i,j;
		book temp;
		system("cls");
		cout<<endl;
		cout<< "Sorting in Ascending Order by Category\n";
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(strcmp(books[j].bookcategory,books[j+1].bookcategory)>0)
				{
					temp = books[j];
					books[j]=books[j+1];
					books[j+1]=temp;
				}
			}
		}
		display();
		 system("pause");
	}

///////Sort in Descending order by category///////

void sortdscategory()
	{
		int i,j;
		book temp;
		system("cls");
		cout<<endl;
		cout<< "Sorting in Descending Order by Category\n";
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(strcmp(books[j].bookcategory,books[j+1].bookcategory)<0)
				{
					temp = books[j];
					books[j]=books[j+1];
					books[j+1]=temp;
				}
			}
		}
		display();
		 system("pause");
	}
	void check_availability()
{
    	system("cls");
        int id;
cout<<"\n\n\tPlease Enter The book id : ";
cin>>id;

                             system("color D");


          for(int i=0;i<n;i++)
          {

              if(books[i].bookid==id)

          {
             cout<<"the book is availavle !\n";
             system("pause");
             cout<<"inter any key to go to main menu\n";
             main();
          }
          else
          {
              cout<<"there is no available book with this book id \n";

          }
          }
          system("pause");
             cout<<"inter any key to go to main menu\n";
              main();

}


void search1 (char a){
    	system("cls");
     system("color 5");
char name[40];
int id;
cout<<"               please enter the key that given below \n";
cout<<" (n). to search  by name\n"<< " (i). to search by id number of book\n"<<" (q).back to main menu" <<endl;
cin>>a;
switch(a)
{

case 'n':
case 'N':
   system ("cls");
cout<<"\n\n\n"<<"           "<<"Please insert the name of the book"<<endl;
cin>>name;
for(int i=0;i<n;i++)
{
   if(strcmp(name,books[i].bookname)==0)
   {

     cout<<"the detail of the book is "<<endl;
    system("cls");
		system("color 8");

        cout<<"\n\n\t\tBook LIST\n\n";
         cout<<"========================================================================================================================\n";
          cout<<"Book ID "<<"\t\t"<<"Book name"<<"\t\t"<<"Author name"<<"\t\t"<<"Category"<<"\t\t"<<"Year of Publication"<<endl;
         cout<<"________________________________________________________________________________________________________________________\n";

    cout<<"  "<<books[i].bookid<<"\t\t|\t"<<books[i].bookname<<"\t\t|\t"<<books[i].authorname<<"\t\t|\t"<<books[i].bookcategory<<"\t\t|\t"<<books[i].bookpubyear;
      cout<<endl;

         cout<<"========================================================================================================================\n";
   system("pause");
   cout<<"enter any key to continue searching \n";
   cin>>a;


   search1 (a);
   }
}
break;
case 'i':
case 'I':
    system ("cls");
cout<<"\n\n\n"<<"           "<<"Please insert the id of the book"<<endl;
cin>>id;
for(int i=0;i<n;i++)
{
   if(id==books[i].bookid)
   {

     cout<<"the detail of the book is "<<endl;
    system("cls");
		system("color C");

        cout<<"\n\n\t\tBook LIST\n\n";
         cout<<"========================================================================================================================\n";
          cout<<"Book ID "<<"\t\t"<<"Book name"<<"\t\t"<<"Author name"<<"\t\t"<<"Category"<<"\t\t"<<"Year of Publication"<<endl;
         cout<<"________________________________________________________________________________________________________________________\n";

    cout<<"  "<<books[i].bookid<<"\t\t|\t"<<books[i].bookname<<"\t\t|\t"<<books[i].authorname<<"\t\t|\t"<<books[i].bookcategory<<"\t\t|\t"<<books[i].bookpubyear;
      cout<<endl;

         cout<<"========================================================================================================================\n";
   system("pause");
   cout<<"enter any key to continue searching \n";
   search1 (a);
   }



}
case 'q':
    main();
    break;
default:
cout<<"please enter the correct character \n";
search1 (a);



}



}




