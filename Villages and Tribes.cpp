//Author@Junth Basnet
#include <iostream>
#include<cstring>
 
using namespace std;
 
void findvillage(string s) 
{
    char lastsymbol = 'X';
    int dots = 0;
    
    int answera = 0, answerb = 0;
    
    for (char c: s) {
        if (c == '.') {
            dots++;
        }
        else {
            if (c == 'A')
                answera++;
            else
                answerb++;
            
            if (c == lastsymbol) {
                if (c == 'A')
                    answera += dots;
                else
                    answerb += dots;
            }
            
            dots = 0;
            lastsymbol = c;
        }
    }
    
    cout << answera << " " << answerb << "\n";
}

//Function main begins program execution 
int main() {
    int villages;
    cin >> villages;
    
    for (int i= 0; i< villages;i++) {
        string s;
        cin >> s;
        findvillage(s);
    }
    
    return 0;
} 