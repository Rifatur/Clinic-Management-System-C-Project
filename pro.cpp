#include "pro.h"
#include "functions.h"
#include<bits/stdc++.h>
using namespace std;
pro::pro()
{
        cout<<"\t\t\t\t_   ___   ___   _"<<endl;
        cout<<"\t\t\t\t|| |___| |___| || "<<endl;
        cout<<"\t\t\t\t||   +-|||-+   ||  "<<endl;
        cout<<"\t\t\t\t||  B  |||  A  ||   "<<endl;
        cout<<"\t\t\t\t||____ |||____ ||   "<<endl;
        cout<<"\t\t\t\t - ____| |____ -     "<<endl;
        cout<<"\t\t\t\t   |___| |___|     "<<endl;
        cout<<"\t\t\t\t "<<endl;
        cout<<endl<<endl;
        cout<<"\t\t++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
        cout<<"\t\t+    Welcome Redoc Clinic Management System      +"<<endl;
        cout<<"\t\t++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
        cout<<endl<<endl;
        cout<<"\t\tPlease Enter your UserName : ";cin>>un;
        cout<<"\t\tPlease Enter your PassWord : ";cin>>pass;
        int f=0;

        ifstream login;
        login.open("user.txt");
         while(!login.eof()){
           getline(login,username);
           getline(login,password);
           if(username==un&&password==pass){
                system("cls");
                f=1;
                dashbord();
           }
        }
        if(f==0){
            cout<<"\t\tWrong Password"<<endl;
            cout<<"\t\tPlease Try again enter 1 : ";cin>>op;
            if(op==1){
                system("cls");
                pro();
            }

        }//
        login.close();

}
