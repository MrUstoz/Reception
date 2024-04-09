#include <iostream>
#include<list>

using namespace std;

class User
{
public:
    string Fullname;
    string Address;
    string PhoneNumber;
    int Age;
    string Birthdate;
};

class UserService
{
public:
    list<User> Users;

    bool AddUser(User user)
    {
        if(user.Fullname != ""
           && user.PhoneNumber != "")
        {
            Users.push_back(user);
            return true;
        }
        else
        {
            return false;
        }
    }

    void GetUser()
    {
        for(auto& user : Users)
        {
            cout << "Fullname: " << user.Fullname << " Age :" << user.Age << " Phone number: " << user.PhoneNumber << " Address: " << user.Address << " Birthdate: " << user.Birthdate << endl;
        }
    }
};

int main()
{
    string fullname, phoneNumber, address, birthdate;
    int age;

    UserService service;
    User newUser;

    cin >> fullname;
    cin >> address;
    cin >> phoneNumber;
    cin >> age;
    cin >> birthdate;

    newUser.Fullname = fullname;
    newUser.PhoneNumber = phoneNumber;
    newUser.Birthdate = birthdate;
    newUser.Address = address;
    newUser.Age = age;

    bool res = service.AddUser(newUser);
    if(res == true)
    {
        cout << "Malumotlar muvaffaqiyatli qo'shildi!\n";
    }
    else
    {
        cout << "Malumotlar qo'shilmadi!\n";
    }

    service.GetUser();

    return 0;
}
