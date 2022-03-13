#include <iostream>
#include <vector>
using namespace std;
int main(){
    int cases;
    vector <int> result;
    cin >> cases;
    for(int i = 0;i < cases;i++){
        int litres,filled,remaining;
    cin >> litres >> filled;
    remaining = litres - filled;
    result.push_back(remaining);
    }

    for(int i = 0; i < cases;i++){
        cout << result[i] << endl;
    }
    return 0;
}