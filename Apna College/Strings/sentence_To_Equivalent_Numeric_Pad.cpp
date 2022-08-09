#include<iostream>
#include<string.h>
using namespace std;

string ENP(string str[], string input)
{
    string outPut = "";
    int n = input.length();
    for(int i=0;i<n;i++)
    {
        if(input[i] == ' ')
            outPut+="0";
        else{
            int pos = input[i] - 'A';
            outPut+=str[pos];
        }
    }

    return outPut;
}

int main()
{
    string str[] = {"2","22","222",
                    "3","33","333",
                    "4","44","444",
                    "5","55","555",
                    "6","66","666",
                    "7","77","777","7777",
                    "8","88","888",
                    "9","99","999","9999"
                   };
    string input = "GEEKFORGEEKS";
    cout<<ENP(str, input);
}