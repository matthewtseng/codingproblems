/*
LeetCode - Jewels and Stones
You're given strings J representing the types of stones that are jewels, and S representing the stones you have.    
Each character in S is a type of stone you have. You want to know how many stones you have are also jewels.
Example: 
Input: J = "aA", S = "aAAbbbb"
Output: 3
*/ 

int numJewelsInStones(char* J, char* S) {
    int num_jewels = 0;
    for (int i = 0; i < strlen(S); i++) {
        for (int j = 0; j < strlen(J); j++) {
            if (J[j] == S[i]) {
                num_jewels++;
            }
        }
    }
    return num_jewels;
}