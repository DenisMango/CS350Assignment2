#include <iostream>
#include <stdio.h>
//#include <algorithm>
using namespace std;

int main();
void makedata(int size, int *data);
void printdata(int size, int *data);
void sortarray(int size, int *data);
void selectionsort(int size, int *data);
//void bogosort(int size, int *data);

int main() {
  int amount_n = 0;
  cout << "Enter the amount of data you want" << endl;
  cin >> amount_n;
  cin.ignore(100, '\n');
  int datarr[amount_n];
  system("clear");
  makedata(amount_n, datarr);
  cout << "unsorted array" << endl;
  printdata(amount_n, datarr);
  selectionsort(amount_n, datarr);
  //bogosort(amount_n, datarr);
  cout << "sorted array" << endl;
  printdata(amount_n, datarr);
}

void makedata(int size, int *data) {
  for (int i = 0; i < size; ++i) {
    data[i] = rand() % size;
  }
}

void printdata(int size, int *data) {
  for (int i = 0; i < size; ++i) {
    cout << data[i] << endl;
  }
}

void sortarray(int size, int *data) {
  
  return;
}

void mergesort()
/*
void bogosort(int size, int *data) {
  bool condition = false;
  while (condition != true)
    {
      for (int i = 0; i < size; ++i)
        swap(data[i], data[rand() % size]);
      while (--size > 0)
        {
          if (data[size] < data[size-1])
            condition = false;
          else
            condition = true;
        }
        //cout << i << endl;
    } 
}
*/
void selectionsort(int size, int* data) {
  for (int i = 0; i < size; ++i) {
    for (int o = i+1; o < size; ++o) {
      if (data[i] > data[o])
      {
        int temp = data[o];
        data[o] = data[i];
        data[i] = temp;
      }
    }
  }
}