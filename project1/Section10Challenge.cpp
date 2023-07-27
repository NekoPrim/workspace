// Section 10
// Challenge - 
// Substitution Cipher

/*
A simple and very old method of sending secret messages is the substitution cipher.
You might have used this cipher with your friends when you were a kid.
Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
For example, every 'a' get replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.

Write a program thats ask a user to enter a secret message.

Encrypt this message using the substitution cipher and display the encrypted message.
Then decryped the encrypted message back to the original message.

You may use the 2 strings below for  your subsitition.
For example, to encrypt you can replace the character at position n in alphabet 
with the character at position n in key.

To decrypt you can replace the character at position n in key
with the character at position n in alphabet.

Have fun! And make the cipher stronger if you wish!
Currently the cipher only substitutes letters - you could easily add digits, puncuation, whitespace and so
forth. Also, currently the cipher always substitues a lowercase letter with an uppercase letter and vice-versa.
This could also be improved.

Remember, the less code you write the less code you have to test!
Reuse existing functionality in libraries and in the std::string class!
*/

#include <iostream>
# include <string>

using namespace std;

int main() {
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    cout << "\nEnter secret message: ";
    string message {};
    getline(cin, message);

    // cout << "Your message is: " << message << endl;

    bool message_encoded {false};
    for (size_t val1 {0}; val1 < message.size(); ++ val1) {
        for (size_t val2 {0}; val2 < alphabet.size(); ++ val2) {
            if (message[val1] == alphabet[val2]) {
                message[val1] = key[val2];
            }
        }
        message_encoded = true;
    }

    cout << "Message encoded: " << message << endl;

    // char selection {};
    // do {
    //     cout << "De-code message? (Y/N) : ";
    //     cin >> selection;
        
    //     if (selection == 'Y' || selection == 'y') {
    //         for (size_t val1 {0}; val1 < message.size(); ++ val1) {
    //             for (size_t val2 {0}; val2 < key.size(); ++ val2) {
    //                 if (message[val1] == key[val2]) {
    //                     message[val1] = alphabet[val2];
    //                 }
    //             }
    //             message_encoded = false;
    //         }
    //         cout << "message de-coded: " << message << endl;
    //     } else if (selection == 'N' || selection == 'n') {
    //         cout << "message will remain a secret" << endl;
    //     } else {
    //         cout << "unknown option, try again" << endl;
    //     }
    // } while (selection != 'N' && selection != 'n' && message_encoded);
    
    cout << endl;
    return 0;
}

