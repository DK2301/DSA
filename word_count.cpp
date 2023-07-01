//Space dependent word count, if there are two consecutive spaces, it will count as two words
// #include<iostream>
// using namespace std;

// void word_count(string str){
//     //declare a variable to store the count
//     int count = 0;
//     //loop through the string
//     for(int i = 0; i < str.length(); i++){
//         //check if the current character is a space
//         if(str[i] == ' '){
//             //increment the count
//             count++;
//         }
//     }
//     //print the count
//     cout << "The number of words in the string is: " << count + 1; // input: hello world, output: 2 but input: hello  world, output: 3

// }

// int main() {
//     //declare a string variable
//     string str;
//     //get input from user
//     cout << "Enter a string: ";
//     getline(cin, str);
//     //call the function
//     word_count(str);
//     return 0;
// }

// first letter of each word based word count
#include<iostream>
using namespace std;
void word_count(string str){
    int count = 0;
    bool inword = false;
    for(char c: str){
        if(c == ' ')
            inword =false;
        else if(!inword){
            inword = true;
            count++;
        }
    }
    cout<<"The number of words in the string is: "<<count;
}
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    word_count(str);
    return 0;
}