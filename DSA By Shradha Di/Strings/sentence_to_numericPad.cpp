#include<iostream>
using namespace std;

string printSequence(string arr[], string input)
{
    string output = "";
    for(int i=0;i<input.size();i++)
    {
        if(input[i] == ' '){
            output+="0";
        }else{
            int pos = input[i] - 'A';
            output += arr[pos];
        }
    }
    return output;
}

int main()
{
    // storing the sequence in array
    string str[] = {"2","22","222",
                    "3","33","333",
                    "4","44","444",
                    "5","55","555",
                    "6","66","666",
                    "7","77","777","7777",
                    "8","88","888",
                    "9","99","999","9999"
                   };
  
    string input = "ABCD";
    cout << printSequence(str, input);
    return 0;
}