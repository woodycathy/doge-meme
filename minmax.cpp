/*******************************************************************************
 ** Author:       Yue Qin Liao
 ** Date:         Oct. 10, 2018
 ** Description:  Ask user how many integers they would like to enter, then
                  prompt user to enter that many integer. Lastly, the program
                  display the largest and smallest of those numbers entered.
 *******************************************************************************/


#include <iostream>

int main()
{
    int totalNum, n, maxNum, minNum;
    std::cout << "How many integers would you like to enter?" <<std::endl;
    std::cin >> totalNum;
    std::cout << "Please enter " << totalNum << " integers." <<std::endl;
    
    //initialize variables so that they can be compared with the first integer entered later
    maxNum = 32768;
    minNum = 0;
    
    for(int i = 1; i <= totalNum; i++)
    {
        std::cin >> n;     //user enter an integer
        if (n < maxNum)    //entered integer comparing with the maxNum, the first round maxNum = 32768
            maxNum = n;
        if (n > minNum)    //entered integer comparing with the minNum, the first round = 0
            minNum = n;
    }
    std::cout << "min: " << maxNum << std::endl;
    std::cout << "max: " << minNum << std::endl;
    
    return 0;
    
   
}

