#include<iostream>

void change_odd_even(int* arr, int size){
    for(int i = 0;i < size - 1;i += 2){
        int t = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = t;
    }
}



int main(){
    int z = 12;
    int* arr = new int[z];
    for(int i = 0; i < z;++i) std::cin >> arr[i];

    change_odd_even(arr, z);

    for(int i = 0; i < z;++i) std::cout << arr[i] << ' ';
    delete[] arr;

}
