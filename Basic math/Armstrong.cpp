#include <bits/stdc++.h> 
bool isArmstrong(int num) {
    // Write your code here
    int ans = 0;
    int count = 0;
    int temp = num;
    int original = num;
    while(num>0){
        int digit = num%10;
        count++;
        num/=10;
    }

    while(temp>0){
        int digit = temp%10;
        ans += pow(digit,count);
        temp /= 10;
    }
    return ans == original;
    
}