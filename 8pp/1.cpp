#include <string>
using namespace std;
string replace(const string &s)
{
  string res = s;
    for(int i = 0;i<res.size();i++){
      char c = res[i];
      if(c == 'a' || c == 'e'  || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'O' || c == 'I' || c == 'U'){
        res[i] = '!';
      }
    }
  return res;
}
/*TEST_CASE("Sample_Test", "[Basic_Tests]") {
    REQUIRE(replace("Hi!") == "H!!");
    REQUIRE(replace("!Hi! Hi!") == "!H!! H!!");
    REQUIRE(replace("aeiou") == "!!!!!");
    REQUIRE(replace("ABCDE") == "!BCD!");
}
*/
