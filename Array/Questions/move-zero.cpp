#include <iostream>
using namespace std;


void moveZeroes(int nums[], int n) {
    int left = 0; // slow pointer

    for (int right = 0; right < n; right++) {
        if (nums[right] != 0) {
            swap(nums[left], nums[right]);
            left++;
        }
    }
}


int main() {
    int nums[5] = {0, 1, 0, 3, 12};

    moveZeroes(nums,5);

    cout << "Output: ";
    for (int i=0; i<5; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

}
