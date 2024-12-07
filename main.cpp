#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){

    string password;

    cout << "Please enter a password: ";
    cin >> password;

    int passwordStrength = 0;



    if(password.length() >= 8){
        passwordStrength++;
    }

    bool hasUpper = false, hasLower = false;
    bool hasNumber = false, hasSpecial = false;


    for(char c : password){
        if(islower(c)){
            hasLower = true;
        }else if (isupper(c)){
            hasUpper = true;
        }else if (isdigit(c)){
            hasNumber = true;
        }else if(!isalnum(c)){
            hasSpecial = true;
        }
    }

    if(hasLower == true){
        passwordStrength++;
    }
    if(hasUpper == true){
        passwordStrength++;
    }
    if(hasNumber == true){
        passwordStrength++;
    }
    if(hasSpecial == true){
        passwordStrength++;
    }

    if(passwordStrength <= 2){
        cout << "Password is weak";
    }else if (passwordStrength <= 4){
        cout << "Password is fair";
    }else if (passwordStrength <= 5){
        cout << "Password is strong";
    }

return 0;

}
