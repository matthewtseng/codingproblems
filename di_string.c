/*
LeetCode - DI String Match
Given a string S that only contains "I" (increase) or "D" (decrease), let N = S.length.

Return any permutation A of [0, 1, ..., N] such that for all i = 0, ..., N-1:

If S[i] == "I", then A[i] < A[i+1]
If S[i] == "D", then A[i] > A[i+1]
*/ 

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* diStringMatch(char* S, int* returnSize) {
    int* final = malloc(sizeof(int) * (strlen(S) + 1));
    
    int length = strlen(S);
    int min = 0;
    int max = length;

    for (int i = 0; i < length; i++) {
        if (S[i] == 'I') {
            if (min > 0) {
                final[i] = min;
            }
            // Case when first increase is found
            if (min == 0) {
                final[i] = 0;
            }
            min++;
        } else {
            if (max < length) {
                final[i] = max;
            }
            // Case when first decrease is found
            if (max == length) {
                final[i] = length;
            }
            max--;
        } 
    }
    
    // Print last number, we know what it is
    final[length] = max;
    
    *returnSize = length + 1;
    return final;
}