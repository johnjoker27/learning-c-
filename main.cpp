#include <iostream>
#include <cstdlib>
#include <ctime>



using namespace std;



int main()
{
    srand(time(0));

    char replay = 'y';


    while (replay == 'y' || replay == 'Y')
    {


        int choice;
    int maxNumb;
    int attempts;
    int guess;
    int randNumb;
    bool won;

    cout<<"Welcome to the number guessing game ." <<endl;
    cout<<"choose a difficulty:\n";
    cout<<"1.Simple\n";
    cout<<"2.Okay\n";
    cout<<"3.Quite difficult\n";

    cin>>choice;


    if ( choice >=1 && choice <= 3 )
    {


      switch(choice)
      {


      case 1:
        maxNumb = 50;
        attempts = 20;
        break;


      case 2:
        maxNumb = 100;
        attempts = 10;
        break;


      case 3:
        maxNumb = 200;
        attempts = 5;
        break;


      }


      randNumb = rand()% maxNumb +1;

      cout<<"The number to be guessed is between 1 and "<<maxNumb<<endl;

      while(attempts > 0)
      {

          cout<<"Enter your guess:\n";
          cin>>guess;

          if (guess == randNumb)
          {

              cout<<"Congrats you guessed correctly."<<endl;
              won = true;
              break;

          }

          else if (guess > randNumb )
          {

              cout<<"Ooouuu!! Sorry but you guessed a bit high.\n Try again."<<endl;

          }

          else
          {

              cout<<"Ooouuu!! Sorry but you guessed a bit Low.\n Try again."<<endl;

          }

          attempts--;
          if (attempts > 0)
          {

              cout<<"You have "<<attempts<<" attempts left.\n";

          }


      }

      if (won = false)
      {
          cout << "You have used up all your guess chances." << endl;
          cout<< "The number was " << randNumb << " ." << endl;
      }


    }


    else
    {


        cout<<"Invalid Input detected\n";
        cout<<"Enter a value between and including 1 and 3 \n";



    }

    cout << "Do you wanna play again?"<<endl;
    cin>>replay;

    }






    return 0;
}
