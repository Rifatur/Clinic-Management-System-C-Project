#ifndef APPOINTMENT_H_INCLUDED
#define APPOINTMENT_H_INCLUDED
#include<bits/stdc++.h>
using namespace std;

    pro::book_appoint() {
            int p_id;
            string p_name;
            string p_age;
            string p_gender;
            string s_provider;
            string s_time;
            string reason;
            system("cls");
            cout<<"\t\t\t\t++++++++++++++++++++++++++++++++++++++++++++"<<endl;
            cout<<"\t\t\t\t|            Appointment  Form             |"<<endl;
            cout<<"\t\t\t\t++++++++++++++++++++++++++++++++++++++++++++"<<endl;
            cout<<endl<<endl;
            cout<<"\t\t\t\t Enter Patients ID        :";cin>>p_id;
            cout<<"\t\t\t\t Enter Patients Name      :";cin>>p_name;
            cout<<"\t\t\t\t Enter Patients Age       :";cin>>p_age;
            cout<<"\t\t\t\t Enter Patients Gender    :";cin>>p_gender;
            cout<<"\t\t\t\t Time Preference          :";cin>>s_time;
            cout<<"\t\t\t\t Reason for Appointment   :";cin>>reason;
            cout<<"\t\t\t\t"<<endl;

            ofstream bookap;
            bookap.open("appointlist.txt");
            bookap<<p_id<<endl<<p_name<<endl<<p_age<<endl<<p_gender<<endl<<s_time<<endl<<reason<<endl;
            bookap.close();
            //selection section...
            cout<<"\t\t\t\tSelect you option :";cin>>op;
            if(op==0){
                system("cls");
                dashbord();
            }
           if(op==1){
                system("cls");
                appoint();
            }
            else if(op==5){
                system("cls");
                book_appoint();
            }
}
//End Book Appointment Function..
pro::view_appoint(){
            string p_Id;
            string id;
            string p_name;
            string p_age;
            string p_gender;
            string s_provider;
            string s_time;
            string reason;
            system("cls");
            cout<<"\t\t\t\t++++++++++++++++++++++++++++++++++++++++++++"<<endl;
            cout<<"\t\t\t\t|            Appointment  Form             |"<<endl;
            cout<<"\t\t\t\t++++++++++++++++++++++++++++++++++++++++++++"<<endl;
            cout<<endl<<endl;
            cout<<"\t\t\t\tEnter Patients ID :";cin>>id;
            //start file..
            int f=0;
            ifstream fin;
            fin.open("appointlist.txt");
            while(!fin.eof()){
                getline(fin,p_Id);
                getline(fin,p_name);
                getline(fin,p_age);
                getline(fin,p_gender);
                getline(fin,s_time);
                getline(fin,reason);
                if(p_Id==id){
                cout<<endl<<endl;
                cout<<"\t\t\t\t++++++++++++++++++++++++++++++++++++++++++++"<<endl;
                cout<<"\t\t\t\t Name : "<<p_name<<"         Age :"<<p_age  <<endl;
                cout<<"\t\t\t\t++++++++++++++++++++++++++++++++++++++++++++"<<endl;
                cout<<endl<<endl;
                f=1;
                }
            }
                   if(f==0){
            cout<<"Wrong ID";
                }//
                fin.close();
            cout<<"\t\t\t\tSelect you option :";cin>>op;
            if(op==0){
                system("cls");
                dashbord();
            }

           if(op==1){
                system("cls");
                appoint();
            }

}
//End View Appointment Function..


#endif // APPOINTMENT_H_INCLUDED
