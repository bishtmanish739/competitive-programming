#include <iostream>
using namespace std;
int main() {

    int arr[] = { 12, 11, 13, 5, 6 };

    for(int i=1;i<5;i++){
        int t=arr[i];
        int j=i-1;

            while (j >= 0 && arr[j] > t)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = t;



    }
     for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";//sorted arrray
    }

}
