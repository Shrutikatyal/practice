#include <iostream>

using namespace std;

class Solution {
    //Write your code here
        char stack[20];
        int top=0,first=0,last=0;
        char queue[20];
    public:
        void pushCharacter(char ch)
        {
            if(top==20)
                cout<<"\nOverflow";
            else
            {
                stack[top++]=ch;
            }
        }
    
        void enqueueCharacter(char ch)
        {
            if(last==20)
                cout<<"\nOverflow";
            else
                queue[last++]=ch;
            
        }
    
        char popCharacter()
        {
            return stack[--top];
        }
    
        char dequeueCharacter()
        {
            return queue[first++];
        }
};
int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}
