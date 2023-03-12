#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// HW-1

// void reverse_queue(queue<int> &q){

//     stack<int> st;

//     while(!q.empty()){
//         st.push(q.front());
//         q.pop();
//     }    

//     while(!st.empty()){
//         q.push(st.top());
//         st.pop();
//     }

// }

// int main(){

//     queue<int> q;

//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);

//     reverse_queue(q);

//     while(!q.empty()){
//         cout << q.front() << " ";
//         q.pop();
//     }

//     return 0;
// }





// HW - 2

// struct outStack{
//     queue<int> q;

//     void push(int val){
//         int s = q.size();
//         q.push(val);

//         while(s--){
//             q.push(q.front());
//             q.pop();
//         }

//     }

//     void pop(){
//         if(!q.empty()){
//             q.pop();
//         }
//     }

//     int top(){
//         return q.front();
//     }

//     bool empty(){
//         return q.empty();   
//     }

// };


// int main(){
    
//     outStack s;
//     s.push(1);
//     s.push(2);
//     s.push(3);

//     while(!s.empty()){
//         cout << s.top() << " ", s.pop();
//     }

//     return 0;
// }






//  HW - 3

// int reverse_num(int num){

//     int res;

//     stack<int> s;

//     while(num){
//         s.push(num%10);
//         num /= 10;
//     }

//     int tens = 1;
//     while(!s.empty()){
//         num = s.top()*tens + num;
//         tens *= 10;
//         s.pop();
//     }

//     return num;

// }

// int main(){

//     int num = 1234;

//     cout << reverse_num(num);

//     return 0;
// }



// HW - 4


// int main(){

//     map<string, vector<string>> mp;

//     int n;
//     cin >> n;

//     while(n--){
//         string str;
//         cin >> str;

//         string substr = "";

//         for(auto c : str){
//             substr += c;
//             mp[substr].push_back(str);
//         }
//     }

//     cin >> n;

//     while(n--){
//         string str;
//         cin >> str;

//         for(auto c : mp[str]){
//             cout << c << " ";
//         }

//         cout << "\n";
//     }

//     return 0;
// }




// HW - 5

// int main(){

//     map<string, vector<string>> mp;

//     int n;
//     cin >> n;

//     while(n--){
//         string str;
//         cin >> str;


//         string substr = "";
//         for(auto c : str){
//             substr += c;
//             mp[substr].push_back(str);
//         }
//     }

//     cin >> n;

//     while(n--){
//         string str;
//         cin >> str;

//         for(auto c : mp[str]){
             
//             if((int)mp.val(str)){
//                 cout << c << " ";
//                 break;
//             }
            
//         }
//         cout << "\n";
//     }

//     return 0;
// }





// Hard Questions 

// HW - 7

int val = 0;

int counting(char x, char y){

    if((x == '(' && y == ')') || (x == '{' && y == '}') || (x == '[' && y == ']')){
        val += 1;
    }

    

}

int is_valid(string str){

    map<char, char> mp;
    mp[')'] = '(';
    mp['}'] = '{';
    mp[']'] = '[';

    
    stack<char> x;

    for(auto ch : str){

        if(mp.count(ch)){

            if(x.empty()){
                return 0;
            }

            char open = mp[ch];
            char cur_open = x.top();

            if(open != cur_open){
                return val;
            }   
            counting(cur_open, ch);
            x.pop();

        }else{
            x.push(ch);
        }

    }

    return val;

}

int main(){

    cout << is_valid("()()()()()()");

    return 0;
}