/* Online C++ Compiler and Editor */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
 
   int n, m;
   cin >> n;
   string str, id, im;
   for(int i = 0; i < n; i++){
       getline(cin, str);
       id = str.substr(0, 12);
       cout << id << "\n";

   }

   cin >> m;

   for(int i = 0; i < m; i++){
       getline(cin, str);
       cout << str << endl;
   }


   return 0;
}
