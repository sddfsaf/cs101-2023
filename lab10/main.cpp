
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class myString
{
    private:
        string m_str;
    public:
        myString(string s){
            m_str = s;
        }
};

class ReadClass
{
    
    public:
        string a;
        string save;
        int i =0;
        ifstream in;
        
        void showClass (){
            in.open("main.cpp");
            while (getline (in, a)){
            while (a.find("class")){
                i++;
            }
        }
        cout << i <<"class in main.cpp";
        while (getline (in, a)){
            while (a.find("class")){
                cout << a << endl;
            }
        }
        in.close();    
        }
        
};

int main()
{
    ReadClass rfile;
    rfile.showClass();

    return 0;
}
