#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED
#include<bits/stdc++.h>
#include "appointment.h"
using namespace std;

    pro::dashbord(){
        cout<<"\t\t\+++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
        cout<<"\t\t\|Hi "<<username<<" Welcome to Clinic Management System       "<<endl;
        cout<<"\t\t\+++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
        cout<<endl<<endl;
        cout<<"\t\t1 .Manage Appointment"<<endl<<endl;
        cout<<"\t\t2 .Manage Patients "<<endl<<endl;
        cout<<"\t\t3 .Manage Doctor "<<endl<<endl;
        cout<<"\t\t4 .Manage Tests & Lab "<<endl<<endl;
        cout<<"\t\t5 .Billing & Invoicing  "<<endl<<endl;
        cout<<"\t\t6 .Admin Area  "<<endl<<endl;
        cout<<endl<<endl;

        cout<<"\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
        cout<<"\t\t   Select you option like 1 for Appointment            "<<endl;
        cout<<"\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
        cout<<"\t\tEnter your Option : ";cin>>op;
            if(op==1){
                appoint();
            }
             else if(op==2){
                patients();
            }
            else if(op==3){
                appoint();
            }
             else if(op==4){
                appoint();
            }
             else if(op==5){

            }
               else if(op==6){
                AdminArea();
            }

    }
    //end dashbord here //......
pro::appoint(){
        system("cls");
        cout<<"\t\t\t\t++++++++++++++++++++++++++++++++++++++++++++"<<endl;
        cout<<"\t\t\t\t|      Welcome to  Appointment  Menu       |"<<endl;
        cout<<"\t\t\t\t++++++++++++++++++++++++++++++++++++++++++++"<<endl;
        cout<<endl<<endl;
        cout<<"\t\t\t\t1 . BOOK APPOINTMENT "<<endl;
        cout<<"\t\t\t\t2 . VIEW APPOINTMENT "<<endl;
        cout<<"\t\t\t\t3 . EDIT APPOINTMENT"<<endl;
        cout<<"\t\t\t\t4 . LIST ALL APPOINTMENT"<<endl;
        cout<<"\t\t\t\t0 . BACK "<<endl;
        cout<<endl<<endl;
        cout<<"\t\t\t\t++++++++++++++++++++++++++++++++++++++++++++"<<endl;
        cout<<"\t\t\t\t| Enter you choice like 1 for book appoint |"<<endl;
        cout<<"\t\t\t\t++++++++++++++++++++++++++++++++++++++++++++"<<endl;
        cout<<endl;
        cout<<"\t\t\t\tEnter your option here : ";cin>>op;
            if(op==0){
                system("cls");
                dashbord();
            }
            else if(op==1){
                book_appoint();

            }
            else if(op==2){
                view_appoint();

            }

}
pro::patients(){
            system("cls");
            cout<<"\t\t\t\t++++++++++++++++++++++++++++++++++++++++++++"<<endl;
            cout<<"\t\t\t\t|      Welcome to  Patients     Menu       |"<<endl;
            cout<<"\t\t\t\t++++++++++++++++++++++++++++++++++++++++++++"<<endl;
            cout<<endl<<endl;
            cout<<"\t\t\t\tEnter 0 for back : ";cin>>op;
                if(op==0){
                    system("cls");
                    dashbord();
            }

    }
  //Start  Admin  Area
pro::AdminArea(){
            system("cls");
            cout<<"\t\t\t\t++++++++++++++++++++++++++++++++++++++++++++"<<endl;
            cout<<"\t\t\t\t|      Welcome to  Admin   Area            |"<<endl;
            cout<<"\t\t\t\t++++++++++++++++++++++++++++++++++++++++++++"<<endl;
            cout<<endl<<endl;
            cout<<"\t\t\t\tEnter 0 for back : ";cin>>op;
                if(op==0){
                    system("cls");
                    dashbord();
                }
                else if(op==1){
                    system("cls");
                    reg();
                }

}
    //end dashbord..
    pro::reg(){
    ofstream reg;
    reg.open("user.txt",ios::app);
    cout<<"Enter your Username : ";cin>>username ;
    cout<<"Enter your password : ";cin>>password ;
    cout<<"Enter your code : ";cin>>code;
    cout<<"Enter your email : ";cin>>email ;
    reg<<username<<endl<<password<<endl<<code<<endl<<email<<endl;
    reg.close();
    }



#endif // FUNCTIONS_H_INCLUDED
