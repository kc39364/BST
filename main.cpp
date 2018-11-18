// Sample driver
// EE 312 Fall 2018
//
// The BST should work for any data type or object.
// Other user created objects must have the << operator overloaded for 
// output.
//

#include <iostream>
#include <fstream>
#include "BST312.h"

using namespace std;

template <typename T>
void print(vector<T> vec){
    for(int i = 0 ; i < vec.size() ; i++){
        cout << vec[i] << endl;;
    }
}

int main() {

    // TEST STRINGS
    ifstream inFile;
    inFile.open("test.txt");

    BST_312<string> bst;
   
    string s;
    inFile >> s;
    while (inFile) {;
        cout << "inserting ... " << s << endl;
        bst.insertItem(s);
        inFile >> s;
    }
    inFile.close();

    cout << "postorder traversal is " << endl;
    print(bst.postOrderTraversal());
    cout << endl;

    cout << "preorder traversal is " << endl;
    print(bst.preOrderTraversal());
    cout << endl;

    cout << "inorder traversal is " << endl;
    print(bst.inOrderTraversal());
    cout << endl;

    cout << "Remove items " << endl;
    cout << "number of nodes in tree before delete is " << bst.countNodes() << endl;
    s = "tree";
    bst.deleteItem(s);
    print(bst.postOrderTraversal());
    cout << endl;
    cout << "number of nodes in tree after delete is " << bst.countNodes() << endl;
    cout << endl;



    // TEST CHARS
    inFile.open("test1.txt");

    BST_312<char> bst1;
   
    char c;
    inFile >> c;
    while (inFile) {;
        cout << "inserting ... " << c << endl;
        bst1.insertItem(c);
        inFile >> c;
    }
    inFile.close();

    cout << "postorder traversal is " << endl;
    print(bst1.postOrderTraversal());
    cout << endl;

    cout << "preorder traversal is " << endl;
    print(bst1.preOrderTraversal());
    cout << endl;

    cout << "inorder traversal is " << endl;
    print(bst1.inOrderTraversal());
    cout << endl;

    cout << "Remove items " << endl;
    cout << "number of nodes in tree before delete is " << bst1.countNodes() << endl;
    c = 'f';
    bst1.deleteItem(c);
    print(bst1.postOrderTraversal());
    cout << endl;
    cout << "number of nodes in tree after delete is " << bst1.countNodes() << endl;
    cout << endl;



    // TEST INTS
    inFile.open("test2.txt");

    BST_312<int> bst2;
   
    int n;
    inFile >> n;
    while (inFile) {;
        cout << "inserting ... " << n << endl;
        bst2.insertItem(n);
        inFile >> n;
    }
    inFile.close();

    cout << "postorder traversal is " << endl;
    print(bst2.postOrderTraversal());
    cout << endl;

    cout << "preorder traversal is " << endl;
    print(bst2.preOrderTraversal());
    cout << endl;

    cout << "inorder traversal is " << endl;
    print(bst2.inOrderTraversal());
    cout << endl;
    
    BST_312<int> bst3 = bst2;
    cout << "Remove items " << endl;
    cout << "number of nodes in tree before delete is " << bst2.countNodes() << endl;
    n = 1;
    bst2.deleteItem(n);
    print(bst2.postOrderTraversal());
    cout << endl;
    cout << "number of nodes in tree after delete is " << bst2.countNodes() << endl;
    cout << endl;


    print(bst3.postOrderTraversal());
    cout << endl;
    bst3.insertItem(6);
    print(bst3.postOrderTraversal());
    cout << endl;
    bst3.makeEmpty();
    print(bst3.postOrderTraversal());
    cout << endl;
    if(bst3.isEmpty())
        cout << "empty" << endl;
}
