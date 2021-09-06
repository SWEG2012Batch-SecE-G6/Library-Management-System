#include <iostream>
#include <stdlib.h>
#include<string.h>

using namespace std;

#define capacity 1000
int menu;
struct book{
    char bookID[10];
	char bookName[60];
	char authorName[40];
	char bookCategory[30];
    int bookPubYear;
}bookInfo[capacity];
struct enterDate{
    int day,month;

    };
struct User{
    char fName[30];
    char lName[30];
    char email[50];
     char userId[10];
    char username[30];
    char password[30];
    book bor;
     enterDate date;
}userInfo[capacity],uInfo[capacity];


int i,count=0,z=0,n=0,l=0;




void admin();
void user();
void search_book();
void display_books();
void borrow_book();

void borrow_book(){
    cout<<"\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\\xcd\\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd"<<endl;
    cout<< "\t    WELCOMbE TO OUR LIBRARY \n";
    cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\\xcd\\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"<<endl;
    cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\\xcd\\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd MENU OPTIONS \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"<<endl;
    cout<<"\t \xcd\xcd\xcd\xcd\xcd\xcd\\xcd\\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\\xcd\\xcd\xcd\xcd \n";
    cout<<"\t Borrow A Book         --------- [1] \n";
    cout<<"\t Display Borrowed Book --------- [2] \n";
    cout<<"\t Return Borrowed Book  --------- [3] \n";
    cout<<"\t Main Menu             --------- [4] \n";
    cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\\xcd\\xcd\xcd \n";
    cout<<"\t Choice: ";
    cin>>menu;
    switch(menu){
        case 1:
            User borrow()
            system("cls");
            break;
        case 2:
            void borrowdis(User userInfo[], User uInfo[])
            system("cls");
            break;
        case 3:
            User returnBk(User userInfo[])
            system("cls");
            break;
        case 4:
            system("cls");
            main();
            break;
        default:
            cout<<"\nINVALID INPUT!\n";
            system("pause");
            system("cls");
            user();
    }
}

User borrow(){
    cout<<"enter your id: ";
    cin>>userInfo[z].userId;
    cout<<endl;
    cout<<"enter your First Name: ";
    cin>>userInfo[z].fName;
    cout<<endl;
    cout<<"enter your Last Name: ";
    cin>>userInfo[z].lName;
    cout<<endl;
    cout<<"enter borrowed date(day and month) respectively separeted by space: ";
    cin>>userInfo[z].date.day>>userInfo[z].date.month;

    cout<<endl;

    cout<<endl;

    z++;
    return userInfo[z];

}

void borrowdis(User userInfo[], User uInfo[]){



for(int i = 0;i<z;i++){
if(userInfo[i].date.day!=0 || userInfo[i].date.month!=0){


    cout<<"Borrowed student info ";
    cout<<"student id: ";
    cout<<userInfo[i].userId;
    cout<<endl;
    cout<<"student First Name: ";
    cout<<userInfo[i].fName;
    cout<<endl;
    cout<<"student Last Name: ";
    cout<<userInfo[i].lName;
    cout<<endl;
    cout<<"borrowed book Name: ";
    cout<<userInfo[i].bor.bookName;
    cout<<endl;
    cout<<"borrowed date(day and month): ";
    cout<<userInfo[i].date.day<<"-"<<userInfo[i].date.month;
    cout<<endl;

    cout<<endl;

      }

}


}


book borbook (){

int y=count;
  loop2:  cout<<"Enter the book Name: ";
  cin>>userInfo[z].bor.bookName;
 for(int i = 0;i<y;i++)
    {
   if(strcmp(bookInfo[i].bookName,userInfo[z].bor.bookName)==0)
   {




        cout<< "Record Found!"<<endl;

return bookInfo[i];
      }}

			cout<<"Record not Found"<<endl;
			cout<<" enter\"a\" to back to the main or enter \"b\" to try again"<<endl;
			char a;
			cin >>a;
			if (a=='a'||a=='A'){

			}
            else if (a=='b'||a=='B'){
          goto loop2;}



}
User returnBk(User userInfo[]){

lable1: cout<<"Enter your Id: ";
cin>> uInfo[n].userId;
cout<<endl;
    for(int i=0; i<z;i++){
    if(strcmp(uInfo[n].userId,userInfo[i].userId)==0){
      cout<<"Stud id matched."<<endl;
      l=i;}
    else if (i==(z-1)){
        goto lable1;
    }

}
    cout<<"Borrowed book Name: ";
    cin>>uInfo[n].bor.bookName ;
    cout<<endl;

    cout<<"Return date(day and month)";
    cin>>uInfo[n].date.day>>uInfo[n].date.month;

    if(strcmp(uInfo[n].bor.bookName,userInfo[l].bor.bookName)==0){

    cout<<"Borrowed book returned successfully."<<endl;



     if(uInfo[n].date.month==userInfo[l].date.month){
         int dif=uInfo[n].date.day-userInfo[l].date.day;
    if(dif==1){
    cout<<"returned on date hope you found it useful."<<endl;
        }
    if(dif>1){

        cout<<"Since you returned the book "<<dif<<" "<<" day after it supposed to be returned."<<endl;
        cout<<"You will be fined extra "<<dif*100<<" birr."<<endl;
        }
    }
    if ((uInfo[n].date.month-userInfo[l].date.month)==1){
           int d1=30-userInfo[l].date.day;
           int d2=uInfo[n].date.day;
            d1+d2;

    }
    }
for(int i=l;i<z;i++){
    userInfo[i]=userInfo[i+1];
    }
n++;
return userInfo[l];


}