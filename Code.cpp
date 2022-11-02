#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> arr;
    char or[103];
    cin >> or;
    
    for(int i=0;or[i]!='\0';i++) {
        if(or[i] == '+') {
            continue;
        }
        else if(or[i] == '1') {
            arr.push_back(1);
  
        }
        else if(or[i] == '2') {
            arr.push_back(2);
        }
        else {
            arr.push_back(3);
        }
    }
    sort(arr, arr + arr.size());
    
    for(int i = 0; i < arr.size()-1; i++) {
        cout << arr[i]
        cout << "+";
    }  
    cout << arr[arr.size()-1];
    return 0;
}
