#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;
    int height;
    string gender;

public:
    Person(int a, int h, string g, string n)
    {
        age = a;
        height = h;
        gender = g;
        name = n;
        cout << "Constructed!!" << endl;
    }

    ~Person()
    {
        cout << "This joint's about to blow up......" << endl;
    }

    string getName()
    {
        return name;
    }

    void setName(string n)
    {
        name = n;
    }

    int getAge()
    {
        return age;
    }

    void setAge(int a)
    {
        age = a;
    }

    string getGender()
    {
        return gender;
    }

    void setGender(string g)
    {
        gender = g;
    }

    int getHeight()
    {
        return height;
    }

    void setHeight(int h)
    {
        height = h;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "Height: " << height << " cm" << endl;
    }
};

int main()
{
    Person p1(23, 185, "Male", "Josh Johnson");

    p1.display();

    return 0;
}
