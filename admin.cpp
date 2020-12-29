#include "admin.h"
#include<bits/stdc++.h>
using namespace std;
admin::admin()
{
    ofstream reg;
    reg.open("user.txt",ios::app);
    cout<<"Enter your Username : ";cin>>username ;
    cout<<"Enter your password : ";cin>>password ;
    cout<<"Enter your code : ";cin>>code;
    cout<<"Enter your email : ";cin>>email ;
    reg<<username<<endl<<password<<endl<<code<<endl<<email<<endl;

    reg.close();
}
