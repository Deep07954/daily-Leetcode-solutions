class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
//         unordered_map<int,unordered_set<int>>mp;
//         for(auto & r:reservedSeats){
//             int row=r[0];
//             int seat=r[1];
//             mp[row].insert(seat);
//         }
//         int result= (n-mp.size())*2;//khali row ki booking 
//         for(auto & [row,bookseats]:mp){
//             auto isAvailable=[&](int seat){
//                 return bookseats.find(seat)==bookseats.end();
//             };
//             bool grpA=isAvailable(2)&&isAvailable(3)&&isAvailable(4)&&isAvailable(5);
//              bool grpB=isAvailable(4)&&isAvailable(5)&&isAvailable(6)&&isAvailable(7);
//               bool grpC=isAvailable(6)&&isAvailable(7)&&isAvailable(8)&&isAvailable(9);

//               if(grpA && grpC){
//                 result+=2;
//               }
//               else if(grpA||grpB||grpC){
//                 result+=1;
//               }
//         }

// return result;
//using bitmask
unordered_map<int,int>mask;
for(auto & r:reservedSeats){
    mask[r[0]]|=(1<<r[1]);
}
int result=(n-mask.size())*2;
for(auto & [row,masked]:mask){
    bool leftrow=(masked & 60)==0;
    bool middlerow=(masked & 240)==0;
    bool right=(masked & 960 )==0;
    if(leftrow && right){
        result+=2;
    }
    else if(leftrow||right||middlerow){
        result+=1;
    }
}
return result;
    }
};