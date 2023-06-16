#include <iostream>
#include <string>
using namespace std;

int main(){
    //declaring the word and palindrome variables
    string word;
    bool palindrome = true;
    
    cout << "Enter a string: ";
    cin >> word; //inputting the word
    
    int length= word.length(); //assingning the length of the word to length variable

    //declaring the first and last index 
    int firstIndex=0; 
    int lastIndex= length-1;
    
    //while loop to check if the word is a palindrome stops if palindrome is false or if we checked all the letters in the word
    while((firstIndex < lastIndex) && palindrome){
        if(word[firstIndex] != word[lastIndex]){
            palindrome = false; //if palindrome is false we print its value and exit the program
            cout << palindrome << endl;
        }
	//if palidrome true we increment the first index and decrement the last index
        else{
            firstIndex++;
            lastIndex--;
        }
    }
    //after the loop is finished we print the value of palindrome if it is true
    if(palindrome){
        cout << palindrome << endl;
    }
      
    return 0;
}
