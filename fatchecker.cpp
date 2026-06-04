#include <iostream>

using namespace std;
//bmi calculator

int main()
{
    float height;
    float weight;
    char choice;
    float bmi;



    cout<<"Welcome to the body mass index calculator program, Where we tell if you are fat or severely stared "<< endl;
    cout<<"Enter your height in cm."<<endl;
    cin>>height;
    cout<<"Enter your weight in kilos"<<endl;
    cin>>weight;
    height = height / 100;

    cout<<"Are you ready to find out your body mass index?\n"<<"Choose y or n \n"<<endl;
    cin>>choice;

    if( choice == 'y'|| choice == 'Y')
    {
        cout<<"That's great bro."<<endl;
    }
    else{
        cout<<"Too bad. We are going to find out either ways."<<endl;
    }


    bmi = weight / ( height * height );


    cout<<"Your bmi index is " <<bmi<< " ."<<endl;

    if (bmi < 18.5){
        cout<<"You are underweight"<<endl;
    }
    else if (bmi >= 18.5 && bmi <= 24.9){
        cout<<"You are normal"<<endl;
    }
    else if ( bmi >= 25 && bmi  <= 29.9 ){
        cout << "You are slightly overweight"<<endl;
    }
    else if ( bmi <= 30 && bmi >= 39 ){
        cout << "You are obese "<<endl;
    }
    else if (bmi >= 40 ){
        cout << "You fat fuck. I am surprised you aint dead \n. I hope you check yourself into my 600lbs life and get some help cause you need it .\n You are morbidly overweight :).\n";
    }




    return 0;
}
