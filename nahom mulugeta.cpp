void sortAsuserName(){
    system("cls");
    cout<<endl;
    for(int k=0; k<n; k++){
        for(int j=0; j<n-k-1; j++){
            if(strcmp(user[j].userName,user[j+1].userName)>0){
                tempUser = user[j];
                user[j]=user[j+1];
                user[j+1]=tempUser;
            }
        }
    }
    display_user();
    system("pause");
    system("cls");
    display_user_page();
}
void sortDsuserName(){
    system("cls");
    cout<<endl;
    for(int k=0; k<n; k++){
        for(int j=0; j<n-k-1; j++){
            if(strcmp(user[j].userName,user[j+1].userName)<0){
                tempUser = user[j];
                user[j]=user[j+1];
                user[j+1]=tempUser;
            }
        }
    }
    display_user();
    system("pause");
    system("cls");
    display_user_page();
}
void delete_user(){
    tryuserdel:
    system("cls");
    bool found;
    cout<<"Enter The User Name: ";
    cin.ignore();
    cin.get(tempUser.userName, 100);
    cout<<"\t==================================================================================\n";
    cout<<"\tUSER NAME"<<"\t"<<"FIRST NAME"<<"\t"<<"LAST NAME"<<"\t"<<"PASSWORD"<<"\t"<<"EMAIL ADDRESS"<<endl;
    cout<<"\t__________________________________________________________________________________\n";
    for(int j=0; j<n; j++){
        if(strcmp(tempUser.userName, user[j].userName) == 0){
            found = true;
            cout<<"\t"<<user[j].userName<<"\t\t"<<user[j].fName<<"\t\t"<<user[j].lName<<"\t\t"<<user[j].password<<"\t\t"<<user[j].email<<endl;
            cout<<"\t===================================================================================\n\n";
            cout<<"\t Are you sure you want to remove this user from the system?"<<endl;
            cout<<"\t===================================================================================\n\n";
            cout<<"Enter '1' To Confirmation Or Any Other Key To Cancel And Return To The Admin Page...";
            cin>>cont;
            if(cont == '1'){
                for(int p=j; p<n; ++p){
                    user[p]=user[p+1];
                }
                n--;
                system("cls");
                cout<<"\t==========================================================\n";
                cout<<"\t           USER REMOVED SUCCESSFULLY!"<<endl;
                cout<<"\t==========================================================\n\t";
                system("pause");
                system("cls");
                admin_page();
                break;
            }
        }
    }

    if(found==false){
        system("cls");
        cout<<"\t======================================================================================================\n";
        cout << "\t\t\tNO USER RECORD BY THE NAME: "<<tempUser.userName<<endl;
        cout<<"\t======================================================================================================\n";
        cout<<"Press '1' To Try Again Or Any Other Key To Return To The Admin Page: ";
        cin>>cont;
        if(cont == '1'){
            goto tryuserdel;
        }
        else{
            system("cls");
            admin_page();
        }
    }
}
void search_user(){
    bool found = false;
    tryuser:
    system("cls");
    cout<<"\n\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
    cout<<"\t Enter The User Name: "<<endl;
    cin.ignore();
    cin.get(tempUser.userName, 100);
    cout<<"\t==================================================================================\n";
    cout<<"\tUSER NAME"<<"\t"<<"FIRST NAME"<<"\t"<<"LAST NAME"<<"\t"<<"PASSWORD"<<"\t"<<"EMAIL ADDRESS"<<endl;
    cout<<"\t__________________________________________________________________________________\n";
    for(int j = 0; j< i; j++){
        if(strcmp(tempUser.userName, user[j].userName) == 0){
            found = true;
            cout<<"\t"<<user[j].userName<<"\t\t"<<user[j].fName<<"\t\t"<<user[j].lName<<"\t\t"<<user[j].password<<"\t\t"<<user[j].email<<endl;
            cout<<"\t___________________________________________________________________________________\n";
        }
    }
    if(!found){
        system("cls");
        cout<<"\t======================================================================================================\n";
        cout << "\t\t\tNO USER RECORD BY THE NAME: "<<tempUser.userName<<endl;
        cout<<"\t======================================================================================================\n";
        cout<<"Press '1' To Try Again Or Any Other Key To Return To The Admin Page: ";
        cin>>cont;
        if(cont == '1'){
            goto tryuser;
        }
        else{
            system("cls");
            admin_page();
        }
    }
}
void display_user_page(){
    cout<<"\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"<<endl;
    cout<<"\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd USER DISPLAY PAGE \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"<<endl;
    cout<<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
    cout<<"\t Sort In Ascending Order Of First Name   --------- [1] \n";
    cout<<"\t Sort In Descending Order Of First Name  --------- [2] \n";
    cout<<"\t Sort In Ascending Order Of Last Name    --------- [3] \n";
    cout<<"\t Sort In Descending Order Of Last Name   --------- [4] \n";
    cout<<"\t Sort In Ascending Order Of User Name    --------- [5] \n";
    cout<<"\t Sort In Descending Order Of User Name   --------- [6] \n";
    cout<<"\t Admin Page         ----------------------         [7] \n";
    cout<<"\t Main Menu          ----------------------         [8] \n";
   cout<<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
    cout<<"\t Choice: ";
    cin>>menu;
    switch(menu){
        case 1:
            system("cls");
            sortAsfName();
            break;
        case 2:
            system("cls");
            sortDsfName();
            break;
        case 3:
            system("cls");
            sortAslName();
            break;
        case 4:
            system("cls");
            sortDslName();
            break;
        case 5:
            system("cls");
            sortAsuserName();
            break;
        case 6:
            system("cls");
            sortDsuserName();
            break;
        case 7:
            system("cls");
            admin_page();
            break;
        case 8:
            system("cls");
            main();
            break;
        default:
            cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
            cout<<"\tINVALID INPUT!\n\n";
            system("pause");
            system("cls");
            display_book_page();
    }
}
void sortAsRate(){
    system("cls");
    cout<<endl;
    for(int k=0; k<i; k++){
        for(int j=0;j<i-k-1;j++){
            if(book[j].rating>book[j+1].rating){
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
void sortDsRate(){
    system("cls");
    cout<<endl;
    for(int k=0; k<n; k++){
        for(int j=0; j<i-k-1; j++){
            if(book[j].rating<book[j+1].rating){
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

void sortAsFreq(){
    system("cls");
    cout<<endl;
    for(int k=0; k<i; k++){
        for(int j=0;j<i-k-1;j++){
            if(book[j].amount_of_rate>book[j+1].amount_of_rate){
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
void sortDsFreq(){
    system("cls");
    cout<<endl;
    for(int k=0; k<n; k++){
        for(int j=0; j<i-k-1; j++){
            if(book[j].amount_of_rate<book[j+1].amount_of_rate){
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
