#include<iostream>
#include<list>
using namespace std;


int main(void) {
   list<int> josephus;
   int n, k;
   cin >> n >> k;
   for (int i = 1; i < n + 1; i++) {
      josephus.push_back(i);
   }
   list<int>::iterator t;
   t = josephus.begin();

   cout << "<";
   while (josephus.size() != 0) {
      for (int i = 0; i < k-1; i++) {

         t++;
         if (t == josephus.end()) {
            t = josephus.begin();
         }
      }
      cout << *t;
      t = josephus.erase(t);
      if (josephus.size() == 0)
         cout << ">";
      else
         cout << ", ";
      if (t == josephus.end()) {
         t = josephus.begin();
      }
   }
   return 0;
}