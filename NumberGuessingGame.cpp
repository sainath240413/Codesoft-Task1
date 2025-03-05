#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    int randomnumber=rand()%100+1;
    int userGuess;
    cout<<"Guess the number(between 1 and 100):";
    while(true){
        cin>>userGuess;
        if(userGuess>randomnumber){
            cout<<"Too high! Try again:";
        }
        else if(userGuess<randomnumber){
            cout<<"Too low! Try again:";
        }
        else{
            cout<<"Congratulations! You guessed the correct number!";
            break;
        }
    }
    return 0;
}