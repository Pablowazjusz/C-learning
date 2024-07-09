#include <iostream>
#include <vector>
 //zazwyczaj kończą się na dsas_t
//typedef std::string text_t; 
//typedef int number_t;


//using = rekomendowany zamienning typedef

using text_t = std::string;
using number_t = int;

int main(){

   //typedef-kinda like a nickname
  

    text_t firstName = "yo";
    std::cout << firstName << '\n';
    number_t age = 20;
    
    std::cout << age;
    
    
    
    
    
    return 0;


}