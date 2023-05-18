//Author: Juan Carlos del Pozo
//Program: It solves the Flavious Josephus legend problem from Beecrowd coding challenges.

//Libraries
#include <iostream>
#include <bitset>
#include <math.h>
#include <iomanip>
#include <iterator>

//Main
int main() {

    //Declaration of variables 
    int cases, number, step = 1;
    int j = 0;
    int alive = 0;
    int casesTemp = 0;

    //Input number of cases
    std::cin>>cases;

    while(casesTemp<cases){

        //Input number of persons and steps
        std::cin>>number>>step;

        //Declaration of dynamic arrays
        int* array1= new int[number];

        //Fill array1
        for (int i = 0; i < number; i++){
            array1[i] = i+1;
        }

        int i = -1;
        int numTotal = 0;

        //Each time someone is murder numTotal++
        //When number-1 stops-->Person alive
        while(numTotal != number-1){
            i++;
            //Reset loop
            if (i > number-1){
                i = 0;
            }
            //j does not count person murdered
            if (array1[i] != 0 && j != step){
                j++;
            }
            //Murder person
            if (j == step){
                array1[i]=0;
                j=0;
                numTotal++;
            }   
        }

        //show results
        for (int i = 0; i < number; i++){
            if (array1[i]!=0){
                std::cout<<"Case "<<casesTemp+1<<": ";
                std::cout<<array1[i]<<std::endl;;
            }
        }     
        
        //VERY IMPORTANT!!! delete array from heap memory
        delete array1;
        array1 = nullptr;
        
        casesTemp++;
    }

    return 0;
}