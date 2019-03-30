#include <iostream>
#include <cmath>
#include <string>
#include <stdbool.h>
using namespace std;
int main()

{ 
	int N=0;
    
   While(N <1 || N>10)
   {
printf("Enter a number:");
  cin >> N ;
   }
   
	if (N % 2 == 0)
	{
	    printf("Bob Wins");
	}
    else 
    {
        printf("Alice wins");
    }
    
}
return 0;	
}