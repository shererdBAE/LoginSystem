#include <../include/usermanager.h>

usermanager::usermanager(){}

bool usermanager::checkpassword(user){
    std::string password;    
    std::cout << "Please enter your password: ";
    std::cin >> password;
    if (password == user1.getpassword())
    {
        return true;
    }
    else return false;
}