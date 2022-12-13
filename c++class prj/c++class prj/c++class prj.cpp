#include <iostream>
#include <string>

using namespace std;

class Login {
private:
    string username;
    string password;
public:
    Login(string username, string password) {
        this->username = username;
        this->password = password;
    }

    bool checkLogin() {
        if (username == "admin" && password == "1234") {
            return true;
        }
        return false;
    }
};

int main() {
    string username, password;

    cout << "Kullanici adinizi giriniz: ";
    cin >> username;

    cout << "Sifrenizi giriniz: ";
    cin >> password;

    Login login(username, password);

    if (login.checkLogin()) {
        cout << "Giris basarili!" << endl;
    }
    else {
        cout << "Kullanici adi veya sifre hatali!" << endl;
    }

    return 0;
}



