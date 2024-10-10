#include <iostream>
#include <math.h>

using namespace std;
int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
int main()
{
    int N = 10000 ,temp=0, count=0;
    int A[N];
    double Pi;
    //assigning random values using rand()
    for(int i = 0; i<N; i++)
        A[i] = rand() % 100;
    for(int i = 0; i<N; i++)
        cout << A[i] << '\t';
    cout << endl;

    //Given two randomly chosen integers, x and y,finding gcd(x,y)
    for(int i = 0; i<N; i+= 2)
    {
        temp = gcd(A[i], A[i+1]);
        //counting when gcd(x,y)=1
        if (temp == 1)
            count++;
    }
    //Proving that probability that gcd(x, y) = 1 is 6/pi^2
    Pi = (6*(N/2))/count;
    //using inbuilt function of squareroot provided by <math.h>
    Pi = sqrt(Pi);
    cout<<"Estimation of PI vlaue is "<< Pi <<endl;

    return 0;
}
//SAMPLE OUTPUT : Estimation of PI vlaue is 3.16228
