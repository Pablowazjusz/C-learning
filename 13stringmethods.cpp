#include <iostream>

int main(){

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);


/*if(name.empty()){
        std::cout << "u didn enetr ze name";
    }
    
    else if (name.length() > 12){
        std::cout << "Ur name is to long.";

    }
    else{
        std::cout << "Welcome " << name << std::endl;
    }
*/

    //name.clear();
    
    //name.append("@gmail.com");


    std::cout << name.at(0);
    
    return 0;
}