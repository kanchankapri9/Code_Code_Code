class Solution {
public:
    int findClosest(int x, int y, int z) {
        // home -- collge
        // same position -- to_real_home
        // distance formula 
        // Compare the distances from Persons 1 and 2 to Person 3 to determine the answer.
        // ghar --> l1 - 4km  
        // same road --> 2l - 10 km
        // p1 - p2 
        int dist1 = abs(x-z);
        int dist2 = abs(y-z);

        if(dist1 < dist2) {
            return 1;
        } else if ( dist2 < dist1) {
            return 2;
        } 
            return 0;
    }
};