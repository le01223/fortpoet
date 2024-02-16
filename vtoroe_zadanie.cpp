#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class ReversibleString {
public:
    ReversibleString(string s) {
        stroka = s;
    }
    ReversibleString() {};
    void Reverse() {
        reverse(stroka.begin(), stroka.end());
    }
    string ToString() const {
        return stroka;
    }
private:
    string stroka;
};
int main() {
  ReversibleString s("live");
  s.Reverse();
  cout << s.ToString() << endl;
  
  s.Reverse();
  const ReversibleString& s_ref = s;
  string tmp = s_ref.ToString();
  cout << tmp << endl;
  
  ReversibleString empty;
  cout << '"' << empty.ToString() << '"' << endl;
  
  return 0;
}