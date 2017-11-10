#include "Vdc/Vdc.h"
#include <iostream>

using namespace std;


    
int main (){  
    int test;
   // a porta 19997 sempre está aberta 
    Vdc vrep("127.0.0.1",19997);
    
    vrep.conectpiece("test",test);

  

   
 
   
}

