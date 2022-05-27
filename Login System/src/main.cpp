
#include "../include/usermanager.h"

int main()
{
usermanager manager;

while (true){
    system("cls");

    if (manager.checkpassword(manager.user1))
    {
        std::cout << manager.user1.getsecret();
    }

}
}