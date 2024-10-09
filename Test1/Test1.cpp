#include <iostream>
#include <string>
using namespace std;

bool check_if_int(string s) {
    return (s.find_first_not_of("0123456789") == s.npos);
}


int main()
{
    string s, a1, b1, op1;
    int a, b, ans;
    char op;
    while (1)
    {
        cout << "Calculator v1.0." << endl;
        cout << "1. Solve a problem" << endl;
        cout << "2. Leave" << endl;
        cin >> ans;
        if (ans != 1) break;
        if (ans == 1) {

            do {
                cout << "Enter the first number" << endl;
                cin >> a1;
                if (check_if_int(a1) == 0) cerr << "Hey! It isn't a number!" << endl;
            } while (check_if_int(a1) == 0);

            a = stoi(a1);

            do {
                cout << "Enter the operation" << endl;
                cin >> op1;
                if (op1.length() != 1) cerr << "Hey! That's tooooooo long!" << endl;
            } while (op1.length() != 1);

            op = op1.c_str()[0];

            do {
                cout << "Enter the second number" << endl;
                cin >> b1;
                if (check_if_int(b1) == 0) cerr << "Hey! It isn't a number!" << endl;
                if (b1 == "0" and op == '/') cerr << "Yonk! Can't devide by zero!" << endl;
            } while ((check_if_int(b1) == 0) or (b1 == "0" and op == '/'));

            b = stoi(b1);

            switch (op)
            {
            case '+': cout << "Answer: " << a + b << endl; break;
            case '-': cout << "Answer: " << a - b << endl; break;
            case '*': cout << "Answer: " << a * b << endl; break;
            case '/': cout << "Answer: " << a / b << endl; break;
            default: cout << "Wrong operation sign" << endl;
            }
            ans = 0;
        }
    }
    cout << "Bye Bye!!!";
    return 0;
}
