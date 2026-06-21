#include <iostream>
using namespace std;

class smallobj
{
private:
    int somedata;

protected:
    void somefunc()
    {
        cout << "Hello Parent" << endl;
    }

public:
    void setdata(int d)
    {
        somedata = d;
    }

    void showdata()
    {
        cout << "Data is " << somedata << endl;
    }
};

class smallobjA : public smallobj
{
private:
    int somedataA;

public:
    void setdataA(int d)
    {
        somedataA = d;
    }

    void showdataA()
    {
        somefunc();   // Call protected function from parent
        cout << "Data is " << somedataA << endl;
    }
};

int main()
{
    smallobjA obj;

    obj.setdata(10);
    obj.setdataA(20);

    obj.showdata();
    obj.showdataA();

    return 0;
}
