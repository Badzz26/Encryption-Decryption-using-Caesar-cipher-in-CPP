#include <iostream>
#include <string.h>
using namespace std;
struct encryption{
    char enc[200];
    char dec[200];
    char plaintext[200];
    char ciphertext[200];
    int key;
};
int main()
{
    struct encryption e;

    char username[20], password[20];
    char uname[10] = "p1", pass[10] = "p2", decision;
    int choice;
    cout << "\n--------------------------------\n";
    cout << "\n CEASER ENCRYPTION DECRYPTION\n";
    cout << "\n--------------------------------\n";
    cout << "\nEnter your username: ";
    cin >> username;
    cout << "\nEnter your passwrod: ";
    cin >> password;
    if (strcmp(username, uname) == 0 && strcmp(password, pass) == 0)
    {
        cout << "\n--------------------------------\n";
        cout << "\nWelcome to encryption world \n";
        cout << "\n--------------------------------\n";

        do
        {
            cout << "\n1.Encryption\t2.Decryption\t3.Exit\n";
            cout << "\nEnter your choice from above: ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "\nEnter the encryption key: ";
                cin >> e.key;

                fflush(stdin);
                cout << "\nEnter the plaintext: ";
                cin.getline(e.plaintext, 200);

                cout << "\nThe ciphertext is: ";
                for(int i = 0; i < strlen(e.plaintext); i++){
                    e.enc[i]=(int)e.plaintext[i] + e.key;
                    cout << e.enc[i];
                }
                cout << "\n";
                break;
            case 2:
                cout << "\nEnter the decryption key: ";
                cin >> e.key;

                fflush(stdin);
                cout << "\nEnter the ciphertext: ";
                cin.getline(e.ciphertext, 200);

                cout << "\nThe original plaintext is: ";
                for(int i = 0; i < strlen(e.ciphertext); i++){
                    e.dec[i] = (int)e.ciphertext[i] - e.key;
                    cout << e.dec[i];
                }
                cout << "\n";
                break;

            case 3:
                exit(0);
                break;
            default:
                cout << "Enter correct choice";
            }
            cout << "\nWould you like to continue?(Y/N): ";
            cin >> decision;
        } while (decision == 'Y' || decision == 'y');
    }
    else
    {
        cout << "\nTry again later, username or password is incorrect! \n";
    }
}