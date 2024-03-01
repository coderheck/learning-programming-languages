#include"iostream"
#include"math.h"
void fastscan(int &number){
    // variable to indicate sign of input number
    bool negative = false;
    register int c;
    number = 0;
    // extract current character from buffer
    c = getchar();
    if (c=='-'){
        // number is negative
        negative = true;
        // extract the next character from the buffer
        c = getchar();
    }
    // Keep on extracting characters if they are integers
    // i.e ASCII Value lies from '0'(48) to '9' (57)
    for (; (c>47 && c<58); c=getchar()){number = number *10 + c - 48;}
    if (negative){number *= -1;}
}
void countSort(int array[], int size) {
  int output[10], count[10], max = array[0];
  // find max
  for (int i=1; i<size; i++) {
    if(array[i]>max){max=array[i];}
  }
  // init array with zeroes
  for (int i=0; i<=max; i++) {
    count[i]=0;
  }
  // count each element
  for (int i=0; i<size; i++) {
    count[array[i]]++;
  }
  // total count of each array
  for (int i=1; i<=max; i++) {
    count[i]+=count[i - 1];
  }
  for (int i=size-1; i>=0; i--) {
    output[count[array[i]]-1]=array[i];
    count[array[i]]--;
  }
  // replace given array
  for (int i = 0; i < size; i++) {
    array[i]=output[i];
  }
}
int main(){

}