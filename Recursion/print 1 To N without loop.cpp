vector<int> printNos(int x) {
    // Write Your Code Here
   if(x==0){
       return {};
   }
   vector<int> result = printNos(x - 1);
   result.push_back(x);
   return result;
    
    
    
}