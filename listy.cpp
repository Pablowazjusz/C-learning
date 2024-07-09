#include <iostream>
#include <chrono>
using namespace std::chrono;




int main(){

auto start = high_resolution_clock::now(); 

int i = 0;
i ++;
while (i < 10000){
  std::cout << i << std::endl;

  
}
auto stop = high_resolution_clock::now(); // record stop time
    auto duration = duration_cast<seconds>(stop - start); // calculate time difference

    std::cout << "Time taken by while loop: " << duration.count() << " seconds" << std::endl;

    return 0;
}