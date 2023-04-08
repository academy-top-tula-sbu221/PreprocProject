#include <iostream>

#define PI 3.1416

#define SQR(A) (A) * (A)

#define X64

#ifdef X64
int a;
#endif

using namespace std;

const float pi = 3.1416;


void Action();

int main()
{
    std::cout << "Hello World!\n";

    cout << 10 * PI << "\n";
    cout << SQR(10 + 20) << "\n"; 
}
