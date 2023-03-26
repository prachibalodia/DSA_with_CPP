class Solution {
public:
    bool isIsomorphic(string s, string t) {

        //approach 1
    //    map<char, char> m;
    //    set<char> x;
    //    if(s.size() != t.size()){
    //        return false;
    //    }    
    //    for(int i=0;i<s.size();i++){
    //        //when the characters are not mapped to each other and also not present in   the set
    //        //count() is used to check if key is present in the map or set or not
    //        //count() can be said as a replacement to containsKey() in java
    //        if(m.count(s[i])==0 && x.count(t[i])==0){ 
    //            m[s[i]]= t[i];
    //            x.insert(t[i]);
    //        }

    //        if(m.count(s[i])==0 && x.count(t[i])){
    //            return false;
    //        }

    //        if(m[s[i]] != t[i]){
    //            return false;
    //        }
           
    //    }
    //    return true;



    //approach 2

    map<char, char> m1,m2;
     if(s.size() != t.size()){
           return false;
       }
    for(int i=0;i<s.size();i++){
        if(m1[s[i]] != m2[t[i]])
        return false;

        m1[s[i]]= i+1; //here, we are mapping to index i+1 as 0 will already be there for the first above case to pass
        m2[t[i]]= i+1;
    }
    return true;
    }
};