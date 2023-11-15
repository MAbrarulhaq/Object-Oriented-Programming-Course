#include<iostream>

using namespace std;

bool isPrime(int n)
{
    if (n == 1)
        return true;

    for (int i = 2; i < n; i = i + 1)
        {
            if (n % i == 0)
                return false;
        }
        return true;
}

void primes(int num)
{
    int count = 0;
    int n = 1;
    while (count < num)
    {
        if(isPrime(n))
        {
            cout << n << endl;
            count = count + 1;
        }
        n = n + 1;
    }
    
}

int main()
{
    primes(10);
}