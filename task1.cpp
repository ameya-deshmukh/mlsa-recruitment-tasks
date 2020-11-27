// MLSA Recruitment Tasks 1
#include <iostream>

int main() {
    int x, y, z, a; //declaring required variables
    std::cout<<"Enter the frequency of gas stations occuring"<<std::endl; //asking user input for x, the frequency at which gas stations are there
    std::cin>>x; //storing the user given input in x
    std::cout<<"Enter the distance at which the car starts to run out of fuel"<<std::endl; //asking user input for y, the distance at which car begins to run out of fuel
    std::cin>>y; //  storing the user given input in y
    std::cout<<"Enter the maximum distance car can travel without breaking down"<<std::endl; //asking user input for z, the maximum distance car can travel without breaking down
    std::cin>>z; // storing the user given input in z
    a=x-(y%x); // a, which is the distance the car has to cover for the next gas station, will be given by the subtraction of the remainder of the division y/x from x
    if (a-z>0){
        std::cout<<"NO"<<std::endl; // if a is greater than z, then the car cannot travel to the next gas station as the distance is greater than the max distance which it can travel
    }
    else {
    std::cout<<"YES"<<std::endl; //if otherwise (less than or equal to), then it can travel
    }
    return 0;
}
