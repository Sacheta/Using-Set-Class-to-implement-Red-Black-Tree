//simple execution of Red Black self balancing tree using set class
#include<iostream>
#include<set>

using namespace std;



int main(){
    set<int>arr;
    cout<<"Make selection: "<<endl;
    cout<<"1. Insert a node"<<endl;
    cout<<"2. Display the tree"<<endl;
    cout<<"3. Check if node exists"<<endl;
    cout<<"4. Delete a node"<<endl;
    cout<<"5. Erase the tree"<<endl;
    int n;
    while(cin>>n){
        switch(n){
        case 1:
            cout<<"Enter value: ";
            int a;
            cin>>a;
            arr.insert(a);  //inserting a value
            break;
        case 2:
            for(auto a=arr.begin();a!=arr.end();++a)  //printing values from begin to end
                cout<<*a<<" ";
            cout<<endl;
            break;
        case 3:
            cout<<"Enter value to be found: ";
            cin>>a;
            if(arr.count(a))  //if count is 1,value exists and is 0, it doesn't
                cout<<"YES!"<<endl;
            else cout<<"NO!"<<endl;
            break;
        case 4:
            {cout<<"Enter value to be deleted: ";
            cin>>a;
            auto p=arr.find(a);  //getting iterator to the value to be deleted, end() if doesn't
            if(p==arr.end())
                cout<<"Value doesn't exists!"<<endl;
            else
                arr.erase(p);}  //erasing the element

            break;
        case 5:
            arr.clear();  //erasing the whole set using clear()
            break;
        default:
            cout<<"Invalid input!"<<endl;

        }
    }
}
