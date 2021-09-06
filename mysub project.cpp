void sortDsPubYear(){
    system("cls");
    cout<<endl;
    for(int k=0; k<n; k++){
        for(int j=0; j<i-k-1; j++){
            if(book[j].pubYear<book[j+1].pubYear){
                temp = book[j];
                book[j]=book[j+1];
                book[j+1]=temp;
            }
        }
    }
    display();
    cout<<"\t";
    system("pause");
    system("cls");
    display_book_page();
}
void sortAsName(){
    system("cls");
    cout<<endl;
    for(int k=0; k<i; k++){
        for(int j=0; j<i-k-1; j++){
            if(strcmp(book[j].bookName,book[j+1].bookName)>0){
                temp = book[j];
                book[j]=book[j+1];
                book[j+1]=temp;
            }
        }
    }
    display();
    cout<<"\t";
    system("pause");
    system("cls");
    display_book_page();
}
void sortDsName(){
    system("cls");
    cout<<endl;
    for(int k=0; k<2; k++){
        for(int j=0; j<i-k-1; j++){
            if(strcmp(book[j].bookName,book[j+1].bookName)<0){
                temp = book[j];
                book[j]=book[j+1];
                book[j+1]=temp;
            }
        }
    }
    display();
    cout<<"\t";
    system("pause");
    system("cls");
    display_book_page();
}
void sortAsAuthor(){
    system("cls");
    cout<<endl;
    for(int k=0; k<i; k++){
        for(int j=0; j<i-k-1; j++){
            if(strcmp(book[j].authorName,book[j+1].authorName)>0){
                temp = book[j];
                book[j]=book[j+1];
                book[j+1]=temp;
            }
        }
    }
    display();
    cout<<"\t";
    system("pause");
    system("cls");
    display_book_page();
}
void sortDsAuthor(){
    system("cls");
    cout<<endl;
    for(int k=0; k<i; k++){
        for(int j=0; j<i-k-1; j++){
            if(strcmp(book[j].authorName,book[j+1].authorName)<0){
                temp = book[j];
                book[j]=book[j+1];
                book[j+1]=temp;
            }
        }
    }
    display();
    cout<<"\t";
    system("pause");
    system("cls");
    display_book_page();
}
void sortAsCategory(){
    system("cls");
    cout<<endl;
    for(int k=0; k<i; k++){
        for(int j=0; j<i-k-1; j++){
            if(strcmp(book[j].category,book[j+1].category)>0){
                temp = book[j];
                book[j]=book[j+1];
                book[j+1]=temp;
            }
        }
    }
    display();
    cout<<"\t";
    system("pause");
    system("cls");
    display_book_page();
}
void sortDsCategory(){
    system("cls");
    cout<<endl;
    for(int k=0; k<i; k++){
        for(int j=0;j<i-k-1;j++){
            if(strcmp(book[j].category,book[j+1].category)<0){
                temp = book[j];
                book[j]=book[j+1];
                book[j+1]=temp;
            }
        }
    }
    display();
    cout<<"\t";
    system("pause");
    system("cls");
    display_book_page();
}
void display(){
    system("cls");
    system("color 8");
    cout<<"\t\t\t     \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"<<endl;
    cout<<"\t\t\t     \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd BOOK LIST \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"<<endl;
    cout<<"\t======================================================================================================\n";
    cout<<"\tBook ID "<<"\t"<<"Book name"<<"\t"<<"Author name"<<"\t"<<"Category"<<"\t"<<"Pub.Year"<<"\t"<<"Volume"<<"\t\t"<<"Rating"<<"\t\t"<<"Mostly Read"<<endl;
    cout<<"\t______________________________________________________________________________________________________\n";
    for(int j=0;j<i;j++){
        cout<<"\t"<<book[j].ID.na<<book[j].ID.increment<<"\t\t"<<book[j].bookName<<"\t\t"<<book[j].authorName;
        cout<<"\t\t"<<book[j].category<<"\t\t"<<book[j].volume<<"\t\t"<<book[j].pubYear<<"\t\t"<<book[j].rating<<"\t\t"<<book[j].amount_of_rate<<endl;
        cout<<"\t______________________________________________________________________________________________________\n";
    }
    cout<<endl;
}
void display_user(){
    system("cls");
    system("color 8");
    cout<<"\t\t\t     \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"<<endl;
    cout<<"\t\t\t     \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd USER LIST \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"<<endl;
    cout<<"\t==================================================================================\n";
    cout<<"\tUSER NAME"<<"\t"<<"FIRST NAME"<<"\t"<<"LAST NAME"<<"\t"<<"PASSWORD"<<"\t"<<"EMAIL ADDRESS"<<endl;
    cout<<"\t__________________________________________________________________________________\n";
    for(int j=0;j<n;j++){
        cout<<"\t"<<user[j].userName<<"\t\t"<<user[j].fName<<"\t\t"<<user[j].lName<<"\t\t"<<user[j].password<<"\t\t"<<user[j].email<<endl;
        cout<<"\t___________________________________________________________________________________\n";
    }
    cout<<endl;
}

void update_book(){
    bool found=false,found1=false;
    cout <<"\n\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
    cout<<"\t  Enter Name Of The Book: ";
    cin.ignore();
    cin.get(temp.bookName, 100);
    cout<<"\t======================================================================================================\n";
    cout<<"\tBook ID "<<"\t"<<"Book name"<<"\t"<<"Author name"<<"\t"<<"Category"<<"\t"<<"Pub.Year"<<"\t"<<"Volume"<<"\t\t"<<"Rating"<<endl;
    cout<<"\t______________________________________________________________________________________________________\n";
    for(int j = 0; j< i; j++){
        if(strcmp(book[j].bookName,temp.bookName) == 0){
            found = true;
            cout<<"\t"<<book[j].ID.na<<book[j].ID.increment<<"\t\t"<<book[j].bookName<<"\t\t"<<book[j].authorName;
            cout<<"\t\t"<<book[j].category<<"\t\t"<<book[j].volume<<"\t\t"<<book[j].pubYear<<"\t\t"<<book[j].rating<<endl;
            cout<<"\t______________________________________________________________________________________________________\n";
        }
    }
    if(found==false){
        system("cls");
        cout<<"\t======================================================================================================\n";
        cout << "\t\t\tNO BOOK RECORD BY THE NAME: "<<temp.bookName<<endl;
        cout<<"\t======================================================================================================\n\n\t";
        system("pause");
        system("cls");
        admin_page();
    }
    if(found==true){
        cout<<"Enter The Numerical Part Of The ID Of The Book You Want To Update From The List Above."<<endl<<"\t  lms: ";
        cin>>temp.ID.increment;
        system("cls");
        for(int j=0; j<i; j++){
            if(temp.ID.increment==book[j].ID.increment){
                found1 = true;
                cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"<<endl;
                cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd UPDATE PAGE \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"<<endl;
                cout<<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
                cout<<"\t  Choose The One you Want To Edit\n";
                cout<<"\t  Book Name             --------- [1] \n";
                cout<<"\t  Book Author Name      --------- [2] \n";
                cout<<"\t  Book Category         --------- [3] \n";
                cout<<"\t  Book publication year --------- [4] \n";
                cout<<"\t  Book Volume           --------- [5] \n";
                cout<<"\t  Book Amount           --------- [6] \n";
                cout<<"\t  Main Menu             --------- [7] \n";
                cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
                cout<<"\t Choice: ";
                cin>>menu;
                switch(menu){
                    case 1:
                        system("cls");
                        cout<<"Enter The New Book Name: ";
                        cin.ignore();
                        cin.get(book[temp.ID.increment-1].bookName,100);
                        break;
                    case 2:
                         cout<<"Enter The New Book Author Name: ";
                        cin.ignore();
                        cin.get(book[temp.ID.increment-1].authorName,100);
                        break;
                    case 3:
                        cout<<"Enter The New Book Category: ";
                        cin.ignore();
                        cin.get(book[temp.ID.increment-1].category,100);
                        break;
                    case 4:
                        cout<<"Enter The New Book Publication Year: ";
                        cin>>book[temp.ID.increment-1].pubYear;
                        break;
                    case 5:
                        cout<<"Enter The New Book Volume: ";
                        cin>>book[temp.ID.increment-1].volume;
                        break;
                    case 6:
                        cout<<"Enter The New Book Amount: ";
                        cin>>book[temp.ID.increment-1].amount;
                        break;
                    case 7:
                        system("cls");
                        main();
                        break;
                    default:
                        cout<<"\nINVALID INPUT!\n";
                        system("pause");
                        system("cls");
                        admin_page();
                }
                if(menu!=7){
                    cout<<"\n\n\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
                    cout<<"\t    UPDATED SUCCESSFULLY \n";
                    cout<<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
                }
                system("pause");
                system("cls");
                admin_page();
                break;
            }
        }
    }
    if(found1==false){
            cout<<"\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd"<<endl;
            cout<< "\t    BOOK ID NOT FOUND PLEASE TRY AGAIN  \n";
            cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"<<endl;
            system("pause");
            system("cls");
            admin_page();
        }
}
void do_delete_book(int a){
    bool found;
    for(int j=0; j<i; j++){
        if(a = book[j].ID.increment){
            found = true;
            for(int l=a; l<i; ++l){
                book[l-1]=book[l];
            }
            i--;
            system("cls");
            cout<<"\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd"<<endl;
            cout<< "\t    BOOK DELETED SUCCESSFULLY  \n";
            cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"<<endl;

            system("pause");
            system("cls");
            admin_page();
            break;
        }
    }
    if(!found){
        cout << "ID not found please try again! :/"<<endl;
        delete_book();
    }
}
