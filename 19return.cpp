#include <iostream>

double square(double length);
std::string name(std::string firstName, std::string lastName);


int main(){

    //return = return a value back to the spot 
    //      where you called the encompassing function

    double length = 5.0;
    double area = square(length);

    std::string firstName = "Pablo";
    std::string lastName = "Waza";
    std::string fullName = name(firstName,lastName);
    
    std::cout << fullName;
    
    std::cout << "Area:" << area << "cm^2\n";
    

    return 0;
}

double square(double length){
    return length * length;
}

std::string name(std::string firstName, std::string lastName){

    return firstName + " " + lastName;
}