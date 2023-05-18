#include <iostream>
#include <bitset>
#include <math.h>
#include <iomanip>
#include <iterator>
/*
#include <string.h>


#include <algorithm>
*/

int main() {
 
    int cases, number, step = 1;
    int j = 0;
    int alive = 0;
    int casesTemp = 0;

    std::cin>>cases;

    while(casesTemp<cases){

        std::cin>>number>>step;

        int* array1= new int[number];
        int* array2 = new int[number];

        for (int i = 0; i < number; i++){
            array1[i] = i+1;
        }

        int i = -1;
        int numTotal = 0;

        while(numTotal != number-1){
            i++;
            if (i > number-1){
                i = 0;
            }
            if (array1[i] != 0 && j != step){
                j++;
            }
            //std::cout<<"antes"<<array1[i]<<std::endl;
            if (j == step){
                array1[i]=0;
                j=0;
                numTotal++;
            }
            //std::cout<<"despues"<<array1[i]<<std::endl;     
        }

        //std::cout<<"el array queda: "<<std::endl;
        for (int i = 0; i < number; i++){
            //std::cout<<array1[i]<<" ";
            if (array1[i]!=0){
                std::cout<<"Case "<<casesTemp+1<<": ";
                std::cout<<array1[i]<<std::endl;;
            }
        }

        //std::cout<<"The survivor is: "<<alive<<std::endl;
        
        

        delete array1;
        array1 = nullptr;
        delete array2;
        array2 = nullptr;

        casesTemp++;
    }



    /*
    std::cin>>cases;

    

    while (casesTemp<cases){
        std::cin>>number>>step;
        for (int i = 0; i < number; i++){
            
        }
        
    }

    */

    return 0;
}