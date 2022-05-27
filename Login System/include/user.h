#include <string>
#include <iostream>

class user{

std::string username;
std::string password;
std::string secret;

public:

user();

std::string getsecret();
std::string getpassword();
std::string getusername();

void setsecret();
void setpassword();
void setusername();

};