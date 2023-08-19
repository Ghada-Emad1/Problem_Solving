class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
        vector<pair<int, double>> cars;
        int n=position.size();
        for (int i = 0; i < n; i++) {
            double time = (double) (target - position[i]) / speed[i];
            cars.push_back({position[i], time});
        }
        sort(cars.begin(), cars.end());
        
        double maxTime = 0.0;
        int res = 0;
        
        for (int i = n - 1; i >= 0; i--) {
            double time = cars[i].second;
            if (time > maxTime) {
                maxTime = time;
                res++;
            }
        }
        
        return res;
    }
};