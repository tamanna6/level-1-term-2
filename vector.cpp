#include <bits/stdc++.h>
using namespace std;


int main() {

  // vector<int> v;
  // int students[4];

  list<int> myList;
  list<int> :: iterator it;

  myList.push_back(111);
 /* myList.push_back(100);
  myList.push_front(500);
  myList.pop_front();
  myList.pop_back();
  */
  myList.push_back(12);
  myList.push_back(15);
  myList.push_back(100);
  myList.push_back(40);
  myList.push_back(55);

  // 111, 12, 15, 100, 40, 44

  it = myList.begin();
  advance(it, 3);

  myList.erase(it);

  it= myList.begin();
  advance(it, 2);
  myList.insert(it, 200);

  myList.sort();



  for( auto it= myList.begin(); it!= myList.end(); it++){
      cout<< *it<< " ";
  }
  cout<< endl;



    return 0;
}


