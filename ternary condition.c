/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int tcurr=30;
    int tset=25;
    int flag=(tcurr>tset) ? 1:0;
    if(flag)
    {
        printf("the motor is on");
    }
    else
    {
        printf("the motor is off");
    }
}
