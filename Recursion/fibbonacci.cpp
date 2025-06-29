//Brute Force
class Solution {
public:
    int fib(int n) {
        int a = 0;
        int b = 1;
        if(n == 0 ){
            return 0; 
        }

        if(n == 1){
            return 1;
        }

        return fib(n-1) + fib(n-2);
    }
};


//by Sposób matematyczny - formuła Bineta
//T.C. O(log n)
//S.C. O(1)
class Solution {
public:
    int fib(int n) {
        double val = (1 + sqrt(5)) / 2;
        return round(pow(val,n)/sqrt(5));
    }
};

