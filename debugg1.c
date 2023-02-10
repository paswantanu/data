#include <math.h>
#include <stdio.h>
#include<boolean.h>

bool is_smart_number(int num) {
    int val = (int) sqrt(num);
    if(num / val == 1)
        return true;
    return false;
}

int main() {

    int test_cases;
    cin >> test_cases;
    int num;
    for(int i = 0; i < test_cases; i++) {
        cin >> num;
        bool ans = is_smart_number(num);
        if(ans) {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}



