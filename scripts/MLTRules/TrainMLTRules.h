#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <set>
#include <map>
#include <fstream>
#include <sstream>
#include <utility>
#include <ctime>
#include "TreeNode.h"

using namespace std;

class MLTReorderingExtractor {
private:
    map<pair<string, string>, int> rules;
    map<string, int> lefthand;
    map<pair<string, string>, double> score;
    map<int, int> left;
    map<int, int> right;

    void markrange(string, map<int, int>&, map<int, int>&);

public:
    MLTReorderingExtractor();
    ~MLTReorderingExtractor();
    void extractFromSentences(char*, char*, char*, int);
    void pruneRules(int);
    void normalizeRules(char*, char*, char*);
    void outputRules(ostream &);
};
