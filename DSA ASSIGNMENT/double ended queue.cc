#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int tc = 1;
    while(t--){
        int s, n;
        cin >> s >> n;
        cout << "Case " << tc++ << ":" << endl;
        deque<int>deq;
        while(n--){
            string st;
            cin >> st;
            if(st == "pushLeft"){
                int x;
                cin >> x;
                if(deq.size() < s){
                    deq.push_front(x);
                    cout << "Pushed in left: " << x << endl;
                }
                else{
                    cout << "The queue is full" << endl;
                    }
        }
            else if(st == "pushRight"){
            int x; cin >> x;
                if(deq.size() < s){
                    deq.push_back(x);
                    cout << "Pushed in right: " << x << endl;
                }
                else{
                    cout << "The queue is full" << endl;
                    }
        }
        else if(st == "popRight"){
            if(deq.empty()){
                cout << "The queue is empty" << endl;
            }
            else{
                cout << "Popped from right: " << deq.back() << endl;
                deq.pop_back();
                }
            }
        else if(st == "popLeft"){
                if(deq.empty()){
                    cout << "The queue is empty" << endl;
                }
                else{
                    cout << "Popped from left: " << deq.front() << endl;
                    deq.pop_front();
                }
            }
        }
    }
}
