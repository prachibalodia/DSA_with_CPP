class UndergroundSystem {
public:
    //id->{stationName,time}
    map<int,pair<string,int>>checkins;

    //route->{total time, count}
    map<string,pair<int,int>>checkouts;

    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        checkins[id]= {stationName,t};
    }
    
    void checkOut(int id, string stationName, int t) {
        auto x= checkins[id];
        checkins.erase(id);

        string route= x.first+"_"+stationName;
        checkouts[route].first+= t-x.second;
        checkouts[route].second+=1;
    }
    
    double getAverageTime(string startStation, string endStation) {
        string route= startStation+"_"+endStation;
        auto time= checkouts[route];
        return (double) time.first/time.second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */