// #include "libraries/genlib.h"
#include <iostream>
using namespace std; 
// #include "libraries/simpio.h"

// need to figure out how to add libraries

/* 
Default argument used - (-1)
*/
double GetScoresAndAverage(int numScores = -1);

int main(){
    cout << "Welcome" << endl;
    double average = GetScoresAndAverage();
    cout << "Average: " << average << endl;
    return 0;
}

double GetScoresAndAverage(int sentinel){
    int sum = 0;
    int value;
    int numScores = 0;

    while(true){
        sum += value;
        cout << "next? " << "(" << sentinel << " if done):";
        if (value == sentinel){
            break;
        }
        sum += value;
        numScores++;
    }
    return double(sum)/numScores;
}