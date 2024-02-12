#include "../binary_lifting.hpp"

const path currPath = current_path();
void testBinaryLifting() {

}

int main() {
    fastio();
    vector<pair<string, string>> testFiles = fetchTestFiles(currPath);
    
    for (auto test: testFiles){
        // const char* inputFile = test.ff.c_str();
        // const char* tempFile = tempOutputFile.c_str();
        // const char* outputFile = test.ss.c_str();
        // freopen(inputFile, "r", stdin);
        // freopen(tempFile, "w", stdout);
        // remove(tempFile);
    }
    auto start1 = high_resolution_clock::now();
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
    cout << "Time: " << duration . count() / 1000 << endl;
}