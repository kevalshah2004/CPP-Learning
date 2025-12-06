#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Keval"<<endl;

    //Pairs
    pair<int,int> p = {1,2};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int, pair<int,string>> p2 = {1,{2,"Keval"}};
    cout<<p2.first<<" "<<p2.second.second<<endl;
    

    //vectors -> singly linked list
    vector<int> v = {1,2,3,4,5};
    vector<int> v2(5,10); //5 elements with value 10
    vector<int> v3;
    v3.push_back(1);
    v3.emplace_back(2);
    vector<pair<int,int>> v4;
    v4.push_back({1,2});
    v4.emplace_back(3,4);

    vector<int>::iterator it = v.begin();
    vector<int>::iterator it1 = v.end(); //points to next of last element
    it1--;
    cout<<*it1<<endl;
    cout<<v[1]<<endl;
    cout<<"last is got by this method "<<v.back()<<endl; //last element
    while(it!=v.end()){
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;
    //alternative way to iterate
    for(auto it2 = v.begin();it2!=v.end();it2++){
        cout<<*it2<<" ";
    }

    //auto keyword: automatically detects the type of variable
    cout<<endl;
    //alternative way to iterate: for each loop
    for(auto it3: v){
        cout<<it3<<" ";
    }

    //vectors functions
    cout<<endl;

    v.erase(v.begin()+1, v.begin()+4); //erase from 2 to 4, last element is not included
    for(auto it4: v){
        cout<<it4<<" ";
    }
    cout<<endl;

    vector<int> v5(2,100); //{100,100}
    v5.insert(v5.begin(),300);//300 inserted at beginning {300,100,100}
    v5.insert(v5.begin()+1,2,10); //insert 10 two times at 1st position {300,10,10,100,100}
    v5.insert(v5.begin(),2,50); //insert 50 two times at beginning {50,50,300,10,10,100,100}
    for(auto it5: v5){
        cout<<it5<<" ";
    }

    v5.pop_back(); //last element removed
    cout<<endl;
    for(auto it6: v5){
        cout<<it6<<" ";
    }
    v5.swap(v); //swaps the elements of two vectors
    cout<<endl;
    cout<<"vector v:"<<endl;
    for(auto it7: v){
        cout<<it7<<" ";
    }
    cout<<endl;
    cout<<"vector v5:"<<endl;
    for(auto it8: v5){
        cout<<it8<<" ";
    }
    cout<<endl;
    v5.clear();
    cout<<"vector v5:"<<endl;
    for(auto it9: v5){
        cout<<it9<<" ";
    }
    cout<<endl;
    cout<< v5.empty()<<endl; //1 if empty, 0 if not empty
    
    //list -> doubly linked list
    list<int> l = {1,2,3,4,5};
    list<int> l1(5,10); //5 elements with value 10
    l1.push_back(6);
    l.push_front(0);
    l.pop_back();
    l.pop_front();

    //deque
    deque<int> d = {1,2,3,4,5};
    d.push_back(6);
    d.push_front(0);
    d.pop_back();
    d.pop_front();

    //stack
    cout<<"Stack"<<endl;
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.emplace(5);

    cout<<"top element is "<<s.top()<<endl;
    s.pop();
    cout<<"top element is "<<s.top()<<endl;

    cout<<"Stack size is "<<s.size()<<endl;
    cout<<"Is stack empty: "<<s.empty()<<endl;

    //queue
    cout<<"Queue"<<endl;
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.emplace(5);
    cout<<q.back()<<endl;
    cout<<q.front()<<endl;

    //priority queue -> max heap
    cout<<"Priority Queue"<<endl;
    priority_queue<int> pq;
    pq.push(5);
    pq.push(1);
    pq.push(3);
    pq.push(4);
    pq.push(2);
    cout<<pq.top()<<endl; //prints largest element
    pq.pop();
    cout<<pq.top()<<endl; //4

    //set -> sorted unique elements
    cout<<"Set"<<endl;
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(4);
    st.insert(5);

    auto ite = st.find(3); //returns iterator to 3
    auto ite1 = st.find(5);
    auto ite2 = st.find(6); //returns iterator to end
    st.erase(3);
    

    int cnt = st.count(3); //returns 1 if 3 is present, 0 if not present
     
    //multiset -> sorted elements with duplicates
    cout<<"Multiset"<<endl;
    multiset<int>ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1,1}
    ms.insert(1); //{1,1,1}
    ms.erase(1); //{} removes all 1 
    ms.insert(1); //{1}
    ms.erase(ms.find(1)); //{1,1} removes only 1

    //unordered set -> unique elements, not sorted
    cout<<"Unordered Set"<<endl;
    unordered_set<int> ust;
    ust.insert(1);

    //map -> key value pair, sorted by key
    cout<<"Map"<<endl;
    map<int,int> m;
    map<int, pair<int,int>> m1;
    map<pair<int,int>,int> m2;
    map<int,string> m3;
    m[1] = 2; 
    m.emplace(2,3);
    m.insert({3,4});
    for(auto it: m){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<m[1]<<endl; //2
    cout<<m[2]<<endl; //3
    cout<<m[3]<<endl; //4
    cout<<m[4]<<endl; //0

    auto ite3 = m.find(2); //returns iterator to 2

    //multimap -> key value pair, sorted by key, duplicates allowed

    //unordered map -> key value pair, not sorted

    cout<<__builtin_popcount(5); //number of set bits in binary representation of 5
    
    return 0;
}