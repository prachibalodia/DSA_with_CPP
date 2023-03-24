#include <iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;
class Car{
    public:
    string id;
    int x;
    int y;

    Car(string id, int x, int y){
        this->id= id;
        this->x=x;
        this->y=y;
    }

    int dist() const{
        return x*x +y*y;
    }
};

class carCompare{
    public:
    bool operator()(const Car A, const Car B){
        return A.dist() < B.dist(); //max heap, so descending
    }
};

//for reverse function if used
// bool distCompare(Car A, Car B){
//     return A.dist()< B.dist();
// }

void printNearestCars(vector<Car> cars, int k){

priority_queue<Car, vector<Car>, carCompare> q(cars.begin(), cars.begin()+k);

//for remaining cars
for(int i=k;i<cars.size();i++){
    auto car= cars[i];
    if(car.dist() < q.top().dist()){
        q.pop(); //popping the top element
        q.push(car);  //as we have created a max heap, the order will automatically be sorted with max element on the top
    }
}

//printing all the cars with min dist
vector<Car> result;
while(!q.empty()){
    result.push_back(q.top());
    q.pop();
}

//to order the output
//sort(result.begin(), result.end(), distCompare);

//we have the max dist out of three min dist on the top
//so we reverse the vector
reverse(result.begin(), result.end());

for(auto x: result){
    cout<<x.id<<endl;
}

return;

}


int main()
{
 int x,y,n,k;
 string id;
 cin>>n>>k;
 
 vector<Car> cars;

 for(int i=0;i<n;i++){
    cin>> id>>x>>y;
    Car car(id, x, y); //object of the class cars
    cars.push_back(car);
 }

 printNearestCars(cars, k);
return 0;
}