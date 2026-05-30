#include <iostream>
//create a simple calculator


using namespace std;

int add(int a,int b)
{
    return a + b;
}
int subtract(int a,int b)
{
    return a - b;
}
int multiplication(int a,int b)
{
    return a*b;
}
int divide(int a,int b)
{
    return a/b;
}

int main()
{
    int choice;
    cout <<"Choose the sort operation to be carried out\n 1.Addition\n 2.subtraction\n 3.multiplication\n 4.division\n";
    cin>>choice;
    if (choice >=1 && choice <=4 )
    {
        if(choice == 1)
    {
        int x;
        int y;
        cout<<"Enter the two numbers that you want to add.\n";
        cin>>x>>y;
        cout<<"result: "<< add(x,y);

    }
    else if(choice == 2)
    {
        int x;
        int y;
        cout<<"Enter the numbers you want to subtract\n NB: The second will be subtracted from the first";
        cin>>x>>y;
        cout<<"Result: "<<subtract(x,y);
    }
    else if (choice == 3)
    {
        int x;
        int y;
        cout<<"Enter the two numbers you want to multiply\n";
        cin>>x>>y;
        cout<<"Result: "<<multiplication(x,y);
    }
    else
    {
        int x;
        int y;
        cout<<"Enter the two numbers you want to divide\n";
        cin>>x>>y;
        if(divide(x,y) == 0 )
        {
            cout<<"Error.We do not them type of divisions.";
        }
        cout<<"Result: "<<divide(x,y);

    }
    }
    else
    {
        cout<<"Choose an option from 1 to 4";
    }
    //cout << "Hello world!" << endl;
    return 0;
}
