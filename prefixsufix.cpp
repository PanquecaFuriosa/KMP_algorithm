#include <iostream>
#include <string>

using namespace std;

/* 
 Implementación del precondicionamiento de KMP con modificaciones.
 Fuente: https://www.geeksforgeeks.org/kmp-algorithm-for-pattern-searching/  
 */
string prefix_sufix(string my_str)
{
    int len = 0;
    int M = my_str.size();
    int lps[M];
    lps[0] = 0; 

    int i = 1;
    while (i < M) {
        if (my_str[i] == my_str[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else 
        {
            if (len != 0) 
                len = lps[len - 1];
            else 
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    return (lps[M-1] > 0 ? my_str.substr(0, lps[M-1]) : "");
}

int main()
{
    string samples[] = {"OLACAREBOLA", "ABRACADABRA", "AREPERA", "ALGORITMO"}; 

    for (string sample : samples)
        cout << prefix_sufix(sample) << endl;
        
    return 0;
}