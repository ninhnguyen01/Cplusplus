// Learning C++ 
// Challenge 02_10
// Calculate an Average, by Eduardo Corpeño 

#include <iostream>

using namespace std;

int main(){
	int nums[5] = {1,23,32,24,337};
	float result; 
    // Write your code here
    nums[0] = 1;
    nums[1] = 23;
    nums[2] = 32;
    nums[3] = 24;
    nums[4] = 337;

    result = (float(nums[0]+nums[1]+nums[2]+nums[3]+nums[4]))/5;

	cout << "The average is " << result << endl;
	return (0);
}
