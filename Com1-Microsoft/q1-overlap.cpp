// we use pythagoras theorm for finding d1 and d2 .....
class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int near_x= max(x1, min(x2, xCenter));
        int near_y=max(y1, min(y2, yCenter));
        int dis_1=  near_x - xCenter;
        int dis_2= near_y - yCenter;
        return  pow(dis_1 ,2) + pow(dis_2 ,2) <= pow(radius,2);
    }
};