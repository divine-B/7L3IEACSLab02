#include <iostream>

#include "problem1.h"
#include "problem2.h"


int main()
{
    std::cout << "Good luck for this second lab" << std::endl;









//std::cout<<"please enter your text to encrypt in  "<<std::endl;
    std::string text;
    std::cin>> text ;
    int s = 4;
    std::cout << "Text : " << text;
    std::cout << "\nCipher: " << encrypt(text, s);
    std::cout<<"\nPlease enter your the text to decrypt"<<std::endl;
    std::string text1;
    std::cin>> text1 ;
    std::cout <<"\nDecrption: "<<decencrypt (text1,s);
    std::cout <<"\n "<<decencrypt (text1,s);






    return 0;
}
