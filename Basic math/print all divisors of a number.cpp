int* printDivisors(int n, int &size){
// Write your code here
    vector<int> divisors;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            divisors.push_back(i);
            if(i != n/i){
            divisors.push_back(n/i);
        }
        }

        

    }
    sort(divisors.begin(),divisors.end());

    size = divisors.size();
    int* ans = new int[size];
    for(int i=0;i<size;i++){
        ans[i] = divisors[i];
    }

    return ans;
}
