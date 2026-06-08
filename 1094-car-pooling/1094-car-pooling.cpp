class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> diff(1001, 0);
        for(auto& trip : trips){
     //         int pax = trip[0]; 
     int pax=trip[0] ;  // Kitne log
            int start = trip[1];  // Kahan se
            int end = trip[2];    // Kahan tak
            
            diff[start] += pax; // Log gaadi mein chadh gaye (Load badh gaya)
            diff[end] -= pax;   // Log utar gaye (Load kam ho gaya) -> Yahan +1 NAHI karna hai!
        }
        
        int current_passengers = 0; // Abhi gaadi mein kitne log hain
        
        // Step 2: Gaadi chalani shuru karo (Sweep Line / Prefix Sum)
        for(int i = 0; i < 1001; i++){
            current_passengers += diff[i]; // Har stop par log charhenge/utrenge
            
            // Agar limit cross hui, toh challan kat jayega (return false)
            if(current_passengers > capacity) {
                return false; 
            }
        }
        
        // Agar gaadi bina kisi dikkat ke end tak chali gayi, toh True!
        return true;
    }
};