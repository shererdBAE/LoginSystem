#include <../include/user.h>

user::user(){
    user::setusername();
    user::setpassword();
    user::setsecret();
}

void user::setusername(){
    std::cout << "Please enter your preferred username: \n";
    std::cin >> username;
}

void user::setpassword(){
    std::cout << "Please enter a password: \n";
    std::cin >> password;
}

void user::setsecret(){
    std::cout << "Please enter your naughty secret: \n";
    std::cin >> secret;
}


std::string user::getusername(){
    return username;
}

std::string user::getpassword(){
    return password;
}

std::string user::getsecret(){
    return secret;
}