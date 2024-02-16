#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class SortedStrings {
public:
  void AddString(const string& s) {
    vector_strings.push_back(s);
  }
  vector<string> GetSortedStrings() {
    sort(vector_strings.begin(), vector_strings.end());
    return vector_strings;
  }
private:
    vector<string> vector_strings;
};
void PrintSortedStrings(SortedStrings& strings) {
  for (const string& s : strings.GetSortedStrings()) {
    cout << s << " ";
  }
  cout << endl;
};

int main() {
  SortedStrings strings;

  strings.AddString("first");
  strings.AddString("third");
  strings.AddString("second");
  PrintSortedStrings(strings);
  
  strings.AddString("second");
  PrintSortedStrings(strings);
  
  return 0;
}