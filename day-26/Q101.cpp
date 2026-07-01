#include<iostream>
using namespace std;
int main(){
    int secret=7;
    int guess;
    cout<<"guess the secret number between 1 to 10:";
    cin>>guess;
    if(guess==secret)
{
    cout<<"congratulations! you guessed the secret number";
}
else if(guess<secret)
{
    cout<<"too low! try again";
}
else
{
    cout<<"too high! try again";
}
return 0;
}