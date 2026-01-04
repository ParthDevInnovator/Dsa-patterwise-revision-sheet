class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>less;
        vector<int>equal;
        vector<int>greater;
        for(int num:nums){
            if(num<pivot){
               less.push_back(num);
            }
            else if(num>pivot){
                greater.push_back(num);
            }
            else{
                equal.push_back(num);
            }
        }
        less.insert(less.end(),equal.begin(),equal.end());
        less.insert(less.end(),greater.begin(),greater.end());
        return less;
    }
};

// //*Input recap
// nums  = [9,12,5,10,14,3,10]
// pivot = 10


// After the for loop finishes, the three vectors are:

// less    = [9, 5, 3]
// equal   = [10, 10]
// greater = [12, 14]


// Now comes the important part you asked about.

// Line 1 dry run
// less.insert(less.end(), equal.begin(), equal.end());

// What this means in plain English

// “Append all elements of equal at the end of less.”

// Before execution
// less  = [9, 5, 3]
// equal = [10, 10]


// less.end() → points after 3

// equal.begin() → points to first 10

// equal.end() → points after last 10

// Insertion step-by-step

// Insert 10

// Insert next 10

// After execution
// less = [9, 5, 3, 10, 10]


// ✅ Order is preserved.

// Line 2 dry run
// less.insert(less.end(), greater.begin(), greater.end());

// What this means

// “Append all elements of greater at the end of less.”

// Before execution
// less    = [9, 5, 3, 10, 10]
// greater = [12, 14]


// less.end() → points after last 10

// greater.begin() → 12

// greater.end() → after 14

// Insertion step-by-step

// Insert 12

// Insert 14

// After execution
// less = [9, 5, 3, 10, 10, 12, 14]

// Final returned array
// [9, 5, 3, 10, 10, 12, 14]

// Key intuition (why this works)

// insert(end, begin, end) = append entire vector

// No reordering happens inside equal or greater

// Stability is preserved automatically

// Think of it as:

// less = less + equal + greater*//