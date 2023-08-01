#include <iostream>
using namespace std;
int INF = 1e9;
int Kadanes(int Array[], int Size){
    int MaxSum = Array[0];
    int CurrentSum = Array[0];
    for(int CurrentIndex = 1; CurrentIndex<Size; CurrentIndex++){
        CurrentSum = max(CurrentSum, CurrentSum + Array[CurrentIndex]);
        MaxSum = max(MaxSum, CurrentSum);
    }
    return MaxSum;
}
int main(){
    int Size;
    cin>>Size;
    int Array[Size];
    for(int i = 0;i<Size;i++) cin>>Array[i];
    int MaxSum = Kadanes(Array, Size);
}
