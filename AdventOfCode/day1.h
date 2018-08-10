#include "common.h"
//Sums each digit to a sum, if the next digit is the same as the one being evaluated (circular next, length->0)
extern int FindSumOfEquals();
/*Sums each digit to a sum, if the digit half-way forward is the same. So if the input
4 digits, the first must be equal to the third. Only even number of elements*/
extern int FindSumOfEqualsHalf();