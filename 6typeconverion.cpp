#include <iostream>

int main(){

double x = (int) 3.14;
std::cout <<x;

std::cout << (char) 100;



int correct = 8;
int questions = 10;

double score = correct / (double)questions * 100;
std::cout << score << "%";

//bez konwersjji int na (double) wynik bedze 0 dlatego ze int nie trzyma ułamków 


    return 0;
}