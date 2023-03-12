#include<iostream>
// #include<queue>
// #include<deque>
// #include<stack>
// #include<tuple>
// #include<algorithm>
#include<unordered_set>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

// int main(){

//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);

//     cout << "Last element in queue is " << q.back() << ".\n";

//     cout << "Queue elements: ";

//     while(!q.empty()){

//         cout << q.front() << " ";

//         q.pop();
//     }

//     cout << "\n";

//     queue<string> q_str;

//     q_str.push("mostafa");

//     string name = q_str.front();

//     cout << name << "\n";

//     return 0;
// }


// Priority queue

// void print(priority_queue<int> &pq){

//     cout << "Priority Queue elements: ";
//     while(!pq.empty()){
//         cout << pq.top() << " ";
//         pq.pop();
//     }
//     cout << "\n";

// }

// int main(){

//     priority_queue<int> pq;

//     pq.push(3);
//     pq.push(5);
//     pq.push(1);
//     pq.push(7);
//     pq.push(0);

//     print(pq);

//     cout << pq.size();

//     return 0;
// }



// Deque

// void print_back(deque<int> q){

//     cout << "Print queue elements back: ";

//     while(!q.empty()){
//         cout << q.back() << " ";
//         q.pop_back();
//     }

//     cout << "\n";

// }

// void print_front(deque<int> &q){

//     cout << "Print queue elements front: ";

//     while(!q.empty()){
//         cout << q.front() << " ";
//         q.pop_front();
//     }
//     cout << "\n";
// }

// int main(){

//     deque<int> q;

//     q.push_back(20);
//     q.push_back(30);
//     q.push_back(40);
//     q.push_front(10);
//     q.push_back(50);
//     q.push_front(0);

//     deque<int> copy = q;

//     print_back(q);
//     print_front(q);
//     print_front(q);

//     cout << copy.size() << "\n";
//     cout << copy[1] << "\n";
//     cout << copy.at(1) << "\n";

//     copy.clear();
//     cout << copy.size() << "\n";

//     return 0;
// }



// Is palindrome

// bool is_palindrome(string str = "abba"){

//     deque<char> dq;

//     for(char c : str){
//         dq.push_back(c);
//     }

//     while(dq.size() > 1){

//         char f = dq.back();
//         dq.pop_back();

//         char b = dq.front();
//         dq.pop_front();

//         if(f != b){
//             return false;
//         }

//     }

//     return true;

// }


// int main(){

//     cout << boolalpha;
//     cout << is_palindrome() << "\n";
//     cout << is_palindrome("bhavesh") << "\n";
//     cout << is_palindrome("abbccccbba") << "\n";    

//     return 0;
// }






// Stack

// void print(stack<string> &st){
//     while(!st.empty()){
//         cout << st.top() << " ";
//         st.pop();
//     }
//     cout << "\n";
// }

// int main(){

//     stack<string> st;

//     st.push("yadav");
//     st.push("singh");
//     st.push("Bhavesh");

//     print(st);

//     return 0;
// }


//  Sum of last K numbers

// int sum;
// queue<int> q;

// struct last_k_numbers_sum_stream{

//     int k;

//     last_k_numbers_sum_stream(int _k){
//         k = _k;
//     }

//     int next(int new_num){

//         q.push(new_num);
//         sum += new_num;

//         if(q.size() > k){
//             sum -= q.front();
//             q.pop();
//         }

//         return sum;

//     }

// };

// int main(){

//     last_k_numbers_sum_stream processor(4);

//     int num;

//     while(cin >> num){
//         cout << processor.next(num) << "\n";
//     }
    
//     return 0;
// }





// Pair

// int main(){

//     pair<int, string> p = make_pair(10, "Bhavesh");
//     pair<int, string> q = make_pair(20, "Ayush");

//     cout << p.first << " " << p.second << "\n";

//     stack<pair<int, string>> s;

//     s.push(p);
//     s.push(q);

    

//     pair<int, pair<int, string>> my_p = make_pair<30, make_pair<40, "Sia">>;

//     // my_p = make_pair<50, p>;

//     return 0;
// }




// Tuple

// int main(){

//     tuple<char, int, string> t1;
//     t1 = make_tuple('A', 1, "Bhavesh");

//     cout << get <0> (t1) << " " << get <1> (t1) << " " << get <2> (t1) << "\n"; 

//     get<0> (t1) = 'B';

//     cout << get <0> (t1) << "\n";

//     cout << boolalpha;
//     cout << (t1 <= t1) << "\n";

//     return 0;
// }





// Iterators

// void print_front(deque<int> &q){

//     cout << "Queue elements (front) : ";

//     deque<int>::iterator it = q.begin();

//     while(it != q.end()){

//         cout << *it << " ";
//         it++;
//     }

//     cout << "\n";

// }

// Using reverse iterator

// void print_back(auto &q){

//     cout << "Queue elements (back) : ";

//     deque<int>::reverse_iterator it = q.rbegin();

//     while(it != q.rend()){
//         cout << *it << " ";
//         it++;
//     }
    
//     cout << "\n";

// }

// void print_back_2(deque<int> &q){

//     cout << "Queue elements (back) : ";
    
//     for(auto it = q.rbegin(); it != q.rend(); it++){
//         cout << *it << " ";
//     }

//     cout << "\n";
// }

// void print_front_const(auto &q){

//     cout << "Queue elements(front) : ";   

//     deque<int>::const_iterator it = q.cbegin();

//     while(it != q.cend()){
//         cout << *it << " ";
//         it++;
//     }

//     cout << "\n";
// }

// int count_lowers(const string &str){

//     int count = 0;

//     //  string::iterator it
//     for(auto it = str.begin(); it != str.end(); it++){
//         char ch = *it;
//         count += (islower(ch) > 0);
//     }

//     return count;
// }

// int main(){

//     deque<int> q = {1,2,3,4,5};

//     print_front(q);

//     print_back(q);

//     print_back_2(q);

//     print_front_const(q);

//     cout << count_lowers("Bhavesh") << "\n";

//     return 0;
// }



// C++ iterating style

// int main(){

//     int arr[] = {1,2,3,4,5};

//     for(auto val : arr){
//         cout << val << " ";
//     }
//     cout << "\n";

//     deque<int> q = {5,21,3,4,5};

//     for(auto &val : q){
//         cout << val << " ";
//     }
//     cout << "\n";

//     for(auto val : {5,6,2,1,2}){
//         cout << val << " ";
//     }
//     cout << "\n";

//     for(auto val : "hello"){
//         cout << val << " ";
//     }
//     cout << "\n";

//     return 0;
// }





// Vector

// void test1(){

//     vector<int> v1;

//     v1.push_back(30);
//     v1.push_back(10);
//     v1.push_back(20);

//     for(int i = 0; i < (int)v1.size(); i++){
//         cout << v1[i] << " ";
//     }
//     cout << "\n";


//     vector<int> v2(5,7);

//     v2.push_back(13);

//     for(auto val : v2){
//         cout << val << " ";
//     }
//     cout << "\n";

// }

// void test2(){

//     vector<int> v {-1,1,2,34,-1,21,321,-31, 313,32131, -21};

//     for(auto it = v.begin(); it != v.end(); ){
//         if(*it < 0){
//             it = v.erase(it);
//         }else{
//             it++;
//         }
//     }

//     for(auto val : v){
//         cout << val << " ";
//     }
//     cout << "\n";

// }

// void test3(){

//     vector<int> v {1,2,3,4,5,6,7,8,9,10};

//     auto it = find(v.begin(), v.end(), 6);

//     if(it != v.end()){
//         vector<int> v2 {11,12,13};
//         v.insert(it, v2.begin(), v2.end());
//     }

//     for(auto &val : v){
//         cout << val << " ";
//     }
//     cout << "\n";

// }

// int main(){

//     test1();
//     test2();
//     test3();

//     return 0;
// }



// 2D Vector

// void test1(){

//     vector<string> v1 {"Bhavesh", "singh", "yadav"};

//     cout << v1.size() << "\n";

//     for(int i = 0; i < (int)v1.size(); i++){
//         cout << v1[i].size() << " ";
//     }
//     cout << "\n";
// }

// void print(vector<vector <int>> &v2d){
    
//     for(auto &rows: v2d){
//         for(auto &cols : rows){
//             cout << cols << " ";
//         }
//         cout << "\n";
//     }
//     cout << "\n\n";
// }

// void test2(){

//     vector<int> rows(5,1);

//     vector<vector<int>> v2d(3,rows);

//     print(v2d);

//     v2d[0][0] = 9;
//     v2d[1].push_back(5);
//     v2d[1].push_back(6);
//     v2d[2].erase(v2d[2].begin());

//     print(v2d);
// }

// void print(vector<vector<vector<int>>> &v3d){

//     for(auto &rows : v3d){
//         for(auto &cols : rows){
//             for(auto &depth : cols){
//                 cout << depth << " ";
//             }
//             cout << "\n";
//         }
//     }

// }

// void test3(){

//     vector<vector<vector<int>>> v3d(5, vector<vector<int>>(6, vector<int>(7)));

//     cout << v3d.size() << " " << v3d[0].size() << " " << v3d[0][0].size() << "\n"; 

//     for(int i = 0; i < v3d.size(); i++){
//         print(v3d[i]);
//     }

// }

// int main(){

//     test1();
//     test2();
//     test3();

//     return 0;
// }





// String

// int main(){

//     string test = "hi abc abc abc abc";

//     cout << test.substr(5) << "\n";
//     cout << test.substr(5,7) << "\n";


//     cout << test.find("abc") << "\n";


//     cout << test.find("abc", 8);


//     cout << test.find("bhavesh") << "\n";
//     cout << (int)test.find("bhavesh") << "\n";


//     cout << test.find_last_of("cab") << "\n";
//     cout << test.find_first_of("aic") << "\n";
//     cout << test.find_first_of("aic", 4) << "\n";
//     cout << test.find_first_not_of("aic") << "\n";


//     test.replace(4,3, "x");
//     cout << test << "\n";

//     return 0;
// }





// Max sum

// int max_3_stack_sum(vector<int> &A, vector<int> &B, vector<int> &C){

//     int sum_A = 0;
//     int sum_B = 0;
//     int sum_C = 0;

//     for(auto x : A){
//         sum_A += x;
//     }

//     for(auto x : B){
//         sum_B += x;
//     }

//     for(auto x : C){
//         sum_C += x;
//     }

//     while(!A.empty() && !B.empty() && !C.empty()){
//         if(sum_A == sum_B && sum_B == sum_C){
//             return sum_A;
//         }

//         if(sum_A >= sum_B && sum_A >= sum_C){
//             sum_A -= A.back();
//             A.pop_back();
//         }else if(sum_B >= sum_A && sum_B >= sum_C){
//             sum_B -= B.back();
//             B.pop_back();
//         }else{
//             sum_C -= C.back();
//             C.pop_back();
//         }
//     }

//     return 0;
// }

// int main(){

//     vector<int> A = {1,2,3,4};
//     vector<int> B = {2,2,2,4,0};
//     vector<int> C = {0,3,3,5};

//     cout << max_3_stack_sum(A, B, C) << "\n";

//     return 0;
// }





// Algorithms: Sort

// void print(vector<int> v){

//     for(auto x : v){
//         cout << x << " ";
//     }

//     cout << "\n";
// }

// int main(){

//     vector<int> v(5);

//     for(int i = 0; i < (int)v.size(); i++){
//         v[i] = 10 - i;
//     }

//     print(v);

//     sort(v.begin() + 1, v.end());
//     print(v);


//     sort(v.begin(), v.end());
//     print(v);


//     sort(v.rbegin()+2, v.rend());
//     print(v);


//     sort(v.begin(), v.end());
//     print(v);


//     reverse(v.begin(), v.end());
//     print(v);
    
//     return 0;
// }





// // Set

// void print st<string> &strSet){

//     for(string x : strSet){
//         cout << x << " ";
//     }

//     cout << "\n";
// }

// int main(){

//     st<string> strSet;

//     strSet.insert("ziad");
//     strSet.insert("mostafa");
//     strSet.insert("mostafa");
//     strSet.insert("mostafa");
//     strSet.insert("ali");

//     print(strSet);

//     // Slow way
//     if(strSet.count("mostafa")){
//         cout << "Yes\n";
//     }

//     // Faster way
//     st<string>::iterator it = strSet.find("mostafa");

//     if(it != strSet.end()){
//         strSet.erase(it);
//     }

//     print(strSet);

//     return 0;
// }



// Multiset (Same as st but it allows duplicacy)

// void print(multiset<string> &str){

//     for(string x : str){
//         cout << x << " ";
//     }
//     cout << "\n";
// }

// int main(){

//     multiset<string> str;

//     str.insert("ziad");
//     str.insert("mostafa");
//     str.insert("mostafa");
//     str.insert("mostafa");
//     str.insert("ali");

//     print(str);

//     // Slow way
//     if(str.count("mostafa")){
//         cout << "Yes\n";
//         // Removes all mostafa
//         str.erase("mostafa"); 
//     }

//     print(str);

//     str.insert("mostafa");

//     // Faster way
//     st<string>::iterator it = str.find("mostafa");

//     if(it != str.end()){
//         // removes only 1 mostafa
//         str.erase(it);
//     }

//     print(str);

//     return 0;
// }




// Struct that is ready for comparision

// struct employee{

//     int num1, num2;
//     string str;

//     employee(int a, int b, string name){
//         num1 = a;
//         num2 = b;
//         str  = name;
//     }

//     bool operator < (const employee &rhs) const{

//         if(false){
//             if(num1 != rhs.num1){
//                 return num1 < rhs.num1;
//             }

//             if(str != rhs.str){
//                 return str < rhs.str;
//             }

//             return num2 < rhs.num2;
//         }

//         if(false){
//             return make_pair(num1, make_pair(str, num2)) < make_pair(rhs.num1, make_pair(rhs.str, rhs.num2));
//         }

//         return std :: tie(num1, str, num2) < std :: tie(rhs.num1, rhs.str, rhs.num2);

//     }     

// };

// int main(){

//     st<employee> s;

//     s.insert(employee(10,35, "Mostafa"));
//     s.insert(employee(7,15, "Ali"));
//     s.insert(employee(10,17, "Ziad"));
//     s.insert(employee(10,20, "Mostafa"));

//     for(employee x : s){
//         cout << x.num1 << " " << x.str << " " << x.num2 << "\n";
//     }

//     return 0;
// }




// Unordered Set

// int main(){

//     unordered_set<int> s1 = {10,19,1,3,12,3,311};

//     s1.insert(21);
//     s1.insert(7);

//     for(auto x : s1){
//         cout << x << " ";
//     }
//     cout << "\n";


//     auto it1 = find(s1.begin(), s1.end(),21); // Slow
//     cout << *it1 << "\n";


//     auto it2 = s1.find(1); // Fast
//     cout << *it2 << "\n";


//     cout << s1.size() << "\n";
//     s1.erase(12);

//     for(auto x : s1){
//         cout << x << " ";
//     }
//     cout << "\n";

//     cout << s1.size() << "\n";

//     return 0;
// }








// Map

// void print(const map<int, string> &mp){

//     for(const pair<int, string> &x : mp){
//         cout << x.first << " : " << x.second << "  |  ";
//     }

//     cout << "\n";
// }

// int main(){

//     map<int, string> mp;

//     mp[11003] = "Sia";
//     mp[11159] = "Bhavesh";
//     mp[11165] = "Ayush";
//     mp[11005] = "Daksh";

//     print(mp);


//     auto it = mp.find(11005);

//     if(it != mp.end()){
//         mp.erase(it);
//     }

//     print(mp);

//     cout << mp.count(11165) << " \n";

//     return 0;
// }



// int main(){

//     map<string, vector<string>> mp1;

//     string key1 = "Bhavesh";
//     vector<string> value1 = {"Sia", "Ayush"};
//     mp1[key1] = value1;

//     string key2 = "Sia";
//     vector<string> value2 = {"Bhavesh", "Ayush"};
//     mp1[key2] = value2;

//     for(const pair<string, vector<string>> &x : mp1){
        
//         const string &key = x.first;
//         const vector<string> &value = x.second;

//         cout << key << "\n";

//     }

//     return 0;
// }






// Practice - 3

// bool is_valid(string str){

//     map<char, char> mp;
//     mp[')'] = '(';
//     mp['}'] = '{';
//     mp[']'] = '[';

//     stack<char> x;

//     for(char ch : str){

//         if(mp.count(ch)){

//             if(x.empty()){
//                 return false;
//             }

//             char open = mp[ch];
//             char cur_open = x.top();

//             if(open != cur_open){
//                 return false;
//             }
//             x.pop();

//         }else{
//             x.push(ch);
//         }

//     }
//     return true;
// }

// int main(){

//     cout << boolalpha;
//     cout << is_valid("((({{{{}}}})))");

//     return 0;
// }






// Practice - 4

// int main(){

//     int n;

//     map<string, vector<string>> mp; 

//     cin >> n;

//     for(int i = 0; i < n; i++){
//         int len;
//         cin >> len;

//         string str;
//         string full_name = "";
//         vector<string> names;

//         for(int j = 0; j < len; j++){

//             cin >> str;

//             if(j){
//                 full_name += " ";
//             }

//             full_name += str;

//             names.push_back(full_name);
//         }

//         for(auto str : names){
//             mp[str].push_back(full_name);
//         }

//     }


//     int q;
//     cin >> q;

//     while(q--){
//         int len;
//         cin >> len;

//         string full_name = "";
//         string str;

//         for(int i = 0; i < len; i++){
//             cin >> str;

//             if(i){
//                 full_name += " ";
//             }
//             full_name += str;
//         }

//         if(mp.count(full_name)){
//             for(auto str : mp[full_name]){
//                 cout << str << "\n";
//             }
//         }else{
//             cout << "No such input found";
//         }
//     }

//     return 0;
// }






// Practice 5

vector<int> maxslidingwindow1(vector<int> &nums, int k){
    
    vector<int> ret;

    if((int)nums.size() < k){
        return ret;
    }

    multiset<int> st;

    for(int i = 0; i < k; i++){
        st.insert(-nums[i]);
    }
    ret.push_back(-*st.begin());

    for(int i = k; i < (int)nums.size(); i++){
     st.erase(st.find(-nums[i-k]));
     st.insert(-nums[i]);
    ret.push_back(-*st.begin());
    }

    return ret;
}

int main(){

    vector<int> nums = {1,3,-1,-3,5,3,6,7};

    nums = maxslidingwindow1(nums, 3);

    for(int x : nums){
        cout << x << " ";
    }

    return 0;
}