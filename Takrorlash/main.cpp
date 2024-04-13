#include <iostream>
#include <list>
#include <stdexcept>

using namespace std;

class User
{
public:
    int Id;
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
        if(user.Fullname != "" && user.PhoneNumber != "")
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

    void UpdateUser(User update)
    {
        for(auto& user : Users)
        {
            if(user.Id == update.Id)
            {
                user.Fullname = update.Fullname;
                user.Birthdate = update.Birthdate;
                user.PhoneNumber = update.PhoneNumber;
                user.Address = update.Address;
                user.Age = update.Age;

                cout << "Muvaffaqiyatli o'zgartirildi!\n";
                return;
            }
        }
        cout << "Bunday foydalanuvchi mavjud emas!\n";
    }

    bool DeleteUser(int id) {
        for(auto it = Users.begin(); it != Users.end(); ++it) {
            if(it->Id == id) {
                Users.erase(it);
                return true;
            }
        }
        return false;
    }

};

int Kvadrat(int n)
    {
        if(n < 0)
        {
            throw invalid_argument("0 dan kichik");
        }
        if(n == 0)
        {
            throw runtime_error("Devide by zero error");
        }
        else
        {
            return n * n;
        }
    }

int main()
{
    /*
    string fullname, phoneNumber, address, birthdate;
    int id, age;

    UserService service;
    User newUser;

    cout << "User ni kiriting:" << endl;
    cin >> id;
    cin.ignore(); // Ignore newline character in input buffer
    getline(cin, fullname);
    getline(cin, address);
    getline(cin, phoneNumber);
    cin >> age;
    cin.ignore(); // Ignore newline character in input buffer
    getline(cin, birthdate);

    newUser.Id = id;
    newUser.Fullname = fullname;
    newUser.PhoneNumber = phoneNumber;
    newUser.Birthdate = birthdate;
    newUser.Address = address;
    newUser.Age = age;

    bool res = service.AddUser(newUser);

    if(res)
    {
        cout << "Malumotlar muvaffaqiyatli qo'shildi!\n";
    }
    else
    {
        cout << "Malumotlar qo'shilmadi!\n";
    }

    service.GetUser();

    User user;
    cout << "Enter information to update user:" << endl;
    cin >> id;
    cin.ignore();
    getline(cin, fullname);
    getline(cin, phoneNumber);
    getline(cin, address);
    cin >> age;
    cin.ignore();
    getline(cin, birthdate);

    user.Id = id;
    user.Fullname = fullname;
    user.Address = address;
    user.PhoneNumber = phoneNumber;
    user.Age = age;
    user.Birthdate = birthdate;

    service.UpdateUser(user);

    service.GetUser();

    bool res1 = service.DeleteUser(id);

    if(res1)
    {
        cout << "Malumot o'chirildi!\n";
    }
    else
    {
        cout << "Malumot o'chirilmadi!\n";
    }*/

    try{
        int n = 0;

        int result = Kvadrat(n);
        cout << result << endl;


        int n2 = 10;
        int res2 = Kvadrat(n2);
        cout << res2 << endl;
    }
    catch(const exception& e)
    {
        cerr << "Exception: " << e.what() << endl;
    }
    return 0;
}
