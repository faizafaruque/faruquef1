#include <iostream>

#include <fstream>

#include <algorithm>

#include <vector>

int binarySearch (std::vector <int> V, int & value, int & left, int & right);

int main ()

{

  using namespace std;

  vector <int> myvector;



  ifstream a;

  int x;

  int t;

  int y;

  int z;



  a.open ("hw4.txt");

  //opens stream

  while (a>>x)

  {

    myvector.push_back(x);



  }



  a.close();





  sort (myvector.begin(), myvector.end());

  //already sorted

  for (int i=0 ; i< myvector.size(); i++)

  {

  cout<< myvector[i] << endl;


  }



  cin>> t;

  y = 0;

  z = myvector.size() - 1;



  int n = binarySearch(myvector, t, y, z);




  if  (n < 0)

  cout << "NOT FOUND" <<endl;



  if (n > 0)

  cout << n << endl;



  return 0;

}



int binarySearch (std::vector <int> V, int & value, int & left, int & right){

using namespace std;

  while (left<= right){

    int middle = (left+right)/2;

    if (V[middle] == value)

    return middle;

    else if (V[middle] > value)

    right = middle - 1;

      else left = middle + 1;



cout << "Left =" << left << endl;

cout << "Right =" << right << endl;

cout << "Middle = " << middle << endl;





  }

  return -1;

}
