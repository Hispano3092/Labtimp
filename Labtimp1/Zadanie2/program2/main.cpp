#include <stdio.h>
#include <iostream>
#include <string>
#include "/home/student/my_cplusplus_programs/Labtimp/Labtimp1/Zadanie2/program2/chifr.h"
using namespace std;

string encrypt(string in, const int kluch);
string decrypt(string in, const int kluch);

int main(int argc, char **argv)
{
    chifr enc;
    int COLS = 10;

    string public_message = "GERALTISRIVII";
    string privat_message = enc.encrypt(public_message, COLS);
    string decode_message = enc.decrypt(privat_message, COLS);

    cout << public_message << endl;
    cout << privat_message << endl;
    cout << decode_message << endl;

    return 0;
}
