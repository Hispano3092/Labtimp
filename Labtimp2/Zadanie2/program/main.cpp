#include <stdio.h>

#include <iostream>
#include <string>

#include "Shifr.h"

using namespace std;

string encrypt(string in, const int key);
string decrypt(string in, const int key);

int main(int argc, char **argv)
{
    shifr enc;
    int COLS = 20;
    try {
        string public_message = "ASJDBWJKRBEWBRKJDSFKHSEBRFHKDSFKHEBHESFKHQBHKQBDHQDQSDFFLKNASFNAWNIWUQGRYIQWBFIYWE";
        string privat_message = enc.encrypt(public_message, COLS);
        string decode_message = enc.decrypt(privat_message, COLS);
        cout << public_message << endl;
        cout << privat_message << endl;
        cout << decode_message << endl;
    } catch (const encryptException & e) {
        cerr << "Error: " << e.what() <<endl;
    }
    return 0;
}
