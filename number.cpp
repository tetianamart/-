#include <iostream>
#include <cmath>


int main()
{
    int n, i;
    int suma=0;
    printf( "Number: ");
    std::cin >> n;
    while ( n > 0) {
        i = n % 10;
        suma+=pow(i,2);
        n /= 10;
    }
    std::cout << suma ;
    return 0;
}Таня ... .|.
    
*** вам а не с++
