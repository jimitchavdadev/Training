#include <iostream>
#include <vector>

using namespace std;

/*
int basic[] = {1, 2, 3, 4};
array<int, 4> a = {1, 2, 3, 4};
int size = a.size();
for (int i = 0; i < size; i++)
{
    cout << a[i] << " ";
}
cout << endl;
cout << a.at(2) << endl;
cout << a.front() << endl;
cout << a.back() << endl;
cout << a.empty() << endl;
cout << "\nEverything is Fine!";
*/

/*
    vector<int> v;
    cout << "initial capacity: " << v.capacity() << endl;
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;
    cout << "front: " << v.front() << endl;
    cout << "back: " << v.back() << endl;
    v.pop_back();
    cout << "new back: " << v.back() << endl;
    v.clear();
    cout << "after empty size: " << v.size() << endl;
*/

int main()
{
    vector<int> a(5, 1);
    // this initialises a vector with size 5 and all elements equals to 1
    cout << "vector a; " << endl;
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    vector<int> test(a);
    // test vector copying whole 'a' vector
    cout << "vector test; " << endl;
    for (int i : test)
    {
        cout << i << " ";
    }
    a[3] = 9;
    // random access
    cout << endl;
    cout << a[3] << endl;
    cout << "\nEverything is Fine!";
}