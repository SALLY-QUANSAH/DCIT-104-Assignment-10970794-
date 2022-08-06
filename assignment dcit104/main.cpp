#include <iostream>

// 10970794 SALLY AFRIYIE QUANSAH

using namespace std;

int main()
{
   int sally = 1, average = 0, sum =0;
   while (sally++  <=10000)  {
        if (sally%2==0) {
   sum += sally;
   average ++;
    }
}
cout << "sum of all even between 1 and 1000 is "<< sum << endl;
cout << "Average is "<<( sum / average ) << endl;
return 0;
}
