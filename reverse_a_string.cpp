string reverseWord(string str){
    
  //Your code here
  int l= str.size();
  string st="";
  for(int i= l-1;i>=0;i--){
      st= st+str[i];
  }
  return st;
  
}
