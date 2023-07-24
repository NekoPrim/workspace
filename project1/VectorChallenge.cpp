#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main() {
    vector <int> vector1 {};
    vector <int> vector2 {};

    vector1.push_back(10);
    vector1.push_back(20);
    cout << "\nVector 1:" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "There are " << vector1.size() << " elements in vector 1" << endl;

    vector2.push_back(100);
    vector2.push_back(200);
    cout << "\nVector 2:" << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "There are " << vector2.size() << " elements in vector 2" << endl;

    vector <vector <int>> vector_2d {};
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "\nvector_2d:" << endl;
    cout <<  vector_2d.at(0).at(0) << endl;
    cout <<  vector_2d.at(0).at(1) << endl;
    cout <<  vector_2d.at(1).at(0) << endl;
    cout <<  vector_2d.at(1).at(1) << endl;

    vector_2d.at(0).at(0) = 1000;

    cout << "\nupdated vector_2d:" << endl;
    cout <<  vector_2d.at(0).at(0) << endl;
    cout <<  vector_2d.at(0).at(1) << endl;
    cout <<  vector_2d.at(1).at(0) << endl;
    cout <<  vector_2d.at(1).at(1) << endl;

    return 0;
}