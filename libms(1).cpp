void search_book(){
    loop:
    system("cls");
    cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"<<endl;
    cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd SEARCH PAGE \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"<<endl;
    cout<<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
    cout<<"\t Search By Book Name   --------- [1] \n";
    cout<<"\t Search By Author Name --------- [2] \n";
    cout<<"\t Search By Category    --------- [3] \n";
    cout<<"\t Main Menu             --------- [4] \n";
    cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
    cout<<"\t Choice: ";
    cin>>menu;
    switch(menu){
        case 1:
            system("cls");
            searchbook();
            system("pause");
            system("cls");
            goto loop;
            break;
        case 2:
            system("cls");
            searchbookAuth();
            goto loop;
            break;
        case 3:
            system("cls");
            searchbookcat();
            goto loop;
            break;
        case 4:
            system("cls");
            main();
            break;
        default:
            cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
            cout<<"\tINVALID INPUT!\n\n";
            system("pause");
            system("cls");
            search_book();
    }
}
void searchbook(){
    bool found = false;
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
    if(!found){
        system("cls");
        cout<<"\t======================================================================================================\n";
        cout << "\t\t\tNO BOOK RECORD BY THE NAME: "<<temp.bookName<<endl;
        cout<<"\t======================================================================================================\n";
    }
}
void searchbookcat(){
    bool found = false;
    cout <<"\n\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
    cout<<"\t  Enter Catagory Of The Book: ";
    cin.ignore();
    cin.get(temp.category, 100);
    cout<<"\t======================================================================================================\n";
    cout<<"\tBook ID "<<"\t"<<"Book name"<<"\t"<<"Author name"<<"\t"<<"Category"<<"\t"<<"Pub.Year"<<"\t"<<"Volume"<<"\t\t"<<"Rating"<<endl;
    cout<<"\t______________________________________________________________________________________________________\n";
    for(int j = 0; j< i; j++){
        if(strcmp(book[j].category,temp.category) == 0){
            found = true;
            cout<<"\t"<<book[j].ID.na<<book[j].ID.increment<<"\t\t"<<book[j].bookName<<"\t\t"<<book[j].authorName;
            cout<<"\t\t"<<book[j].category<<"\t\t"<<book[j].volume<<"\t\t"<<book[j].pubYear<<"\t\t"<<book[j].rating<<endl;
            cout<<"\t______________________________________________________________________________________________________\n";
        }
    }
    if(!found){
        system("cls");
        cout<<"\t======================================================================================================\n";
        cout << "\t\t\tNO BOOK RECORD BY IN THE CATAGORY: "<<temp.category<<endl;
        cout<<"\t======================================================================================================\n\n\t";
    }
    system("pause");
    system("cls");
}
void searchbookAuth(){
    bool found = false;
    cout <<"\n\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
    cout<<"\t  Enter Name Of The Book: ";
    cin.ignore();
    cin.get(temp.authorName, 100);
    cout<<"\t======================================================================================================\n";
    cout<<"\tBook ID "<<"\t"<<"Book name"<<"\t"<<"Author name"<<"\t"<<"Category"<<"\t"<<"Pub.Year"<<"\t"<<"Volume"<<"\t\t"<<"Rating"<<endl;
    cout<<"\t______________________________________________________________________________________________________\n";
    for(int j = 0; j< i; j++){
        if(strcmp(book[j].authorName,temp.authorName) == 0){
            found = true;
            cout<<"\t"<<book[j].ID.na<<book[j].ID.increment<<"\t\t"<<book[j].bookName<<"\t\t"<<book[j].authorName;
            cout<<"\t\t"<<book[j].category<<"\t\t"<<book[j].volume<<"\t\t"<<book[j].pubYear<<"\t\t"<<book[j].rating<<endl;
            cout<<"\t______________________________________________________________________________________________________\n";
        }
    }
    if(!found){
        system("cls");
        cout<<"\t======================================================================================================\n";
        cout << "\t\t\tNO BOOK RECORD BY THE AUTHOR: "<<temp.authorName<<endl;
        cout<<"\t======================================================================================================\n\n\t";
    }
    system("pause");
    system("cls");
}
void display_book_page(){
    system("cls");
    cout<<"\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"<<endl;
    cout<<"\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd BOOK DISPLAY PAGE \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"<<endl;
    cout<<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
    cout<<"\t Sort In Ascending Order Of Book Name         --------- [1] \n";
    cout<<"\t Sort In Descending Order Of Book Name        --------- [2] \n";
    cout<<"\t Sort In Ascending Order Of Book ID           --------- [3] \n";
    cout<<"\t Sort In Descending Order Of Book ID          --------- [4] \n";
    cout<<"\t Sort In Ascending Order Of Author Name       --------- [5] \n";
    cout<<"\t Sort In Descending Order Of Author Name      --------- [6] \n";
    cout<<"\t Sort In Ascending Order Of Category          --------- [7] \n";
    cout<<"\t Sort In Descending Order Of Category         --------- [8] \n";
    cout<<"\t Sort In Ascending Order Of Publication Year  --------- [9] \n";
    cout<<"\t Sort In Descending Order Of Publication Year --------- [10] \n";
    cout<<"\t Main Menu          ----------------------              [11] \n";
    cout<<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
    cout<<"\t Choice: ";
    cin>>menu;
    switch(menu){
        case 1:
            system("cls");
            sortAsName();
            break;
        case 2:
            system("cls");
            sortDsName();
            break;
        case 3:
            system("cls");
            sortAsID();
            break;
        case 4:
            system("cls");
            sortDsID();
            break;
        case 5:
            system("cls");
            sortAsAuthor();
            break;
        case 6:
            system("cls");
            sortDsAuthor();
            break;
        case 7:
            system("cls");
            sortAsCategory();
            break;
        case 8:
            system("cls");
            sortDsCategory();
            break;
        case 9:
            system("cls");
            sortAsPubYear();
            break;
        case 10:
            system("cls");
            sortDsPubYear();
            break;
        case 11:
            system("cls");
            main();
            break;
        default:
            cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
            cout<<"\tINVALID INPUT!\n\n";
            system("pause");
            system("cls");
            display_book_page();
    }
}
void admin_login_page(){
    system("cls");
    rethere:
    cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"<<endl;
    cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd ADMIN LOGIN PAGE \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"<<endl;
    cout<<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
    cout<<"\t Enter User Name: ";
    cin.ignore();
    cin.get(tempAdmin.adminUname, 50);
    cout<<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
    cout<<"\t Enter Password: ";
    cin.ignore();
    cin.get(tempAdmin.adminPass, 50);
    cout<<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
    if(strcmp(tempAdmin.adminUname, admin.adminUname) != 0 || strcmp(tempAdmin.adminPass, admin.adminPass)!=0){
        cout<<"\t INCORRECT USER NAME OR PASSWORD!"<<endl;
        cout<<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
        cout<<"\nPress '1' To Try Again Or Any Other Key To Return To The Main Menu...";
        cin>>cont;
        if(cont == '1'){
            system("cls");
            goto rethere;
        }
        else{
            system("cls");
            main();
        }
    }
    else{
        admin_page();
    }
}
void sortAsID(){
    system("cls");
    cout<<endl;
    for(int k=0; k<i; k++){
        for(int j=0;j<i-k-1;j++){
            if(book[j].ID.increment>book[j+1].ID.increment){
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
void sortDsID(){
    system("cls");
    cout<<endl;
    for(int k=0; k<n; k++){
        for(int j=0; j<i-k-1; j++){
            if(book[j].ID.increment<book[j+1].ID.increment){
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
void sortAsPubYear(){
    system("cls");
    cout<<endl;
    for(int k=0; k<i; k++){
        for(int j=0; j<i-k-1; j++){
            if(book[j].pubYear>book[j+1].pubYear){
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