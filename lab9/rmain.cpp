#include <string>
#include <fstream>
#include <iostream>

using namespace std;

class ReplaceMyString{
    public:
    ifstream in;
    ofstream out;
    char s[200];
    void replaceString (string a, string b){
        in.open("main.cpp");
        out.open("rmain.cpp");
        while (!in.eof()){
            in.getline (s, 200);
            if (in.peek()){
                if (s == a){
                    out << b;
                }out << s ;
            }out << "\n";
        }
        in.close();
        out.close();
    }
};
int main()
{
    ReplaceMyString my;
    my.replaceString("IU", "IU is best");

    return 0;
}
