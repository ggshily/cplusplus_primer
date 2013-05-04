#include <vector>

using namespace std;

void f(const vector<int>&) ;

int main() {
    vector<int> v2;
    f(v2);
    f(vector<int>(42));
    f(42);// error

    return 0;
}
