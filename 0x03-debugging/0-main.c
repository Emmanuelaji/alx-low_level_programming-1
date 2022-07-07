#include "main.h"
/**
 * main - tests function that prints if integer is positive or negative
 * Return: 0
 */
positive_or_negative() 
{                                                                                                                                       
int n;                                                                                                                                  
srand(time(0));                                                                                                                         
n = rand() - RAND_MAX / 2;                                                                                                              
if (n > 0)                                                                                                                              
printf("%d is positive\n", n);                                                                                                          
else if (n == 0)                                                                                                                        
printf("%d is zero\n", n);                                                                                                              
else                                                                                                                                    
printf("%d is negative\n", n);                                                                                                          
return (0);                                                                                                                             
}     
