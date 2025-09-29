#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<string, string> phoneBook;
    string name, number;

    for (int i = 0; i < n; i++) {
        cin >> name >> number;
        phoneBook[name] = number;
    }

    while (cin >> name) {
        auto it = phoneBook.find(name);
        if (it != phoneBook.end())
            cout << it->first << "=" << it->second << "\n";
        else
            cout << "Not found\n";
    }

    return 0;
}
