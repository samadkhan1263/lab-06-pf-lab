#include <iostream>
using namespace std;

int main()
{
   for(int i = 1; i <= 5; i++)
   {
       cout << "ROW" << i << " : " ;
       
     for(int j = 1; j <= 10; j++)
     {
        cout << "S" << j << " " ;
     }
     
     cout << endl;
   }
return 0;
}