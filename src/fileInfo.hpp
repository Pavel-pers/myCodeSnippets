#include <vector>
#include <string>
#include <fstream>

using namespace std;

vector<char> readF(string file)
{
    ifstream in(file, ios_base::binary);
    vector<char> v;
    while (!in.eof())
    {
        v.push_back(0);
        in.read(&v.back(), 1);
    }
    return v;
}


