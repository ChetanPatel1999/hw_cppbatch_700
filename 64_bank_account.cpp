#include <iostream>
using namespace std;
class bank
{
    string acname;
    string acnumber;
    float belance;
    static int totalbalence;

public:
    bank(string s1, string s2, float n)
    {
        acname = s1;
        acnumber = s2;
        belance = n;
        totalbalence = totalbalence + belance;
    }
    void display_account_detail()
    {
        cout << "account info : " << endl;
        cout << "account name : " << acname << endl;
        cout << "account number  : " << acnumber << endl;
        cout << "account belance : " << belance << endl
             << endl;
    }
    static void disply_totalbalence()
    {
        cout << "total bank balence : " << totalbalence << endl
             << endl;
    }
    void debit(int d) // 3000
    {
        if (belance > d)
        {
            belance = belance - d;
            totalbalence = totalbalence - d;
            cout << d << " amount debit succecfully from " << acname << endl
                 << endl;
        }
        else
        {
            cout << acname << " you have minimum belanace so you cant debit" << endl
                 << endl;
        }
    }
    void credit(int c) // 30000 +10000
    {
        belance = belance + c;
        if (belance > 50000)
        {
            cout << acname << " your account belence limite accessd you cant credit" << endl
                 << endl;
            belance = belance - c;
        }
        else
        {
            totalbalence = totalbalence + c;
            cout << c << " amount credit succefully in " << acname << " account " << endl
                 << endl;
        }
    }
};
int bank::totalbalence = 0;
int main()
{
    bank ac1("ram", "1234", 8000);
    bank ac2("syam", "1235", 1000);
    bank ac3("rohit", "1236", 5000);
    ac1.display_account_detail();
    ac2.display_account_detail();
    ac3.display_account_detail();
    bank::disply_totalbalence();

    ac1.debit(3000);
    ac2.debit(2000);
    ac3.debit(3000);

    ac1.display_account_detail();
    ac2.display_account_detail();
    ac3.display_account_detail();
    bank::disply_totalbalence();

    ac1.credit(50000);

    ac1.display_account_detail();
    ac2.display_account_detail();
    ac3.display_account_detail();
    bank::disply_totalbalence();

    return 0;
}