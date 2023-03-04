class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {

       queue<int> q;
       for(auto i: students){
           q.push(i);
       }
        int j=0;
        int n= students.size();
        int i= 0;
       while(!q.empty() && i< n*n){
           if(sandwiches[j] == q.front()){
               q.pop();
               j++;
           }
           else{
               int choice= q.front();
               q.pop();
               q.push(choice);
           }
           i++;
       }
        if(q.empty()) return 0;
        else
        return q.size();
    }
};