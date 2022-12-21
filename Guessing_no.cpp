#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
using namespace std ;
int main()
{
int number , guess , nguess=1;
srand(time(0));
number = rand()%100 + 1;
do{
        cout<<"Guess the number between 1 to 100\n";
        cin>>guess;
        if(guess>number){
            cout<<"Lower number please!\n";
        }
        else if(guess<number){
            cout<<"Higher number please!\n";
        }
        else{
            cout<<"You guessed it in "<<nguess<<" attempts\n";
        }
        nguess++;
    }while(guess!=number);
   getch(); 
    return 0;
}