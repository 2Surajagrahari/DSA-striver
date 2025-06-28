#include <bits/stdc++.h> 
int findGcd(int x, int y)
{
    int mini = min(x,y);
    for(int i=mini;i>0;i--){
        if((x%i == 0) && (y%i == 0)){
            return i;
        }
    }
    return 1;
}
