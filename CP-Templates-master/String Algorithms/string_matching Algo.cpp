// prewritten template for kmp
void computeLPSArray(vector<int>& pattern, vector<int>& lps) {
    int patternLen = pattern.size();
    int len = 0; // Length of the previous longest prefix suffix
    lps[0] = 0; // lps[0] is always 0
    int i = 1;
    while (i < patternLen) {
        if (pattern[i] == pattern[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
}

// Function to perform pattern searching using the KMP algorithm
int KMPSearch(vector<int>& text, vector<int>& pattern) {
    int textLen = text.size();
    int patternLen = pattern.size();
    // Create lps array to store the longest prefix suffix values
    vector<int> lps(patternLen, 0);
    // Preprocess the pattern to build the lps array
    computeLPSArray(pattern, lps);
    int i = 0; // Index for text[]
    int j = 0; // Index for pattern[]
    int cnt = 0;
    while (i < textLen) {
        if (pattern[j] == text[i]) {
            i++;
            j++;
        }
        if (j == patternLen) {
            cnt++;
            j = lps[j - 1];
        } else if (i < textLen && pattern[j] != text[i]) {
            if (j != 0)
                j = lps[j - 1];
            else
                i++;
        }
    }
    return cnt;
}
