#ifndef PRO_H
#define PRO_H
#include<bits/stdc++.h>
using namespace std;
class pro
{
    public:
        pro();
        reg();
        dashbord();
        //All patients function
        patients();
        //All Appointment function
        appoint();
        book_appoint();
        view_appoint();
        edit_appoint();
        list_appoint();
        AdminArea();
    protected:
    private:
        string username;
        string password;
        string un;
        string pass;
        string email;
        string code;
        int op;
};

#endif // PRO_H
