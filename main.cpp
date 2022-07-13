#include <iostream>

using namespace std;
/*Selection sort- In each iteration find index min of smallest
 * remaining entry. Swap a[i] and a[min]. It takes an array and number of elements*/
void Selection(int Arr[],int n)
{
    int i,j,small,temp;
    for (int i = 0; i < n-1 ; i++) {
        small = i;
        for(j = i+1; j < n; j++)
            if (Arr[j] < Arr[small])
                small = j;
            temp = Arr[small];
            Arr[small] = Arr[i];
            Arr[i] = temp;
    }
};

 int main() {
  int A[] = {2,8,3,6,1,5,4,9,13,17,18,19,25,21,15,17,29,30};
    Selection(A,18);
    for (int k = 0; k < 18; ++k) {
      cout << A[k] <<" ";
    };
    return 0;
}
