/*
Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container. Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators. In vectors, data is inserted at the end. Inserting at the end takes differential time, as sometimes there may be a need of extending the array. Removing the last element takes only constant time because no resizing happens. Inserting and erasing at the beginning or in the middle is linear in time.
*/


#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> vec){
    for(int i=0; i<vec.size(); i++)
        cout<<vec[i]<<" ";
    cout<<endl;
}

int main(){
    //syntax
    vector<int> vec;    //as same as int vect[0]

    //size of vector
    cout<<"size of vector: ";
    int size;
    cin>>size;

    //taking input for vector
    for(int i=0; i<size; i++){
        cout<<"enter the digits in vector: ";
        int x;
        cin>>x;
        vec.push_back(x);
    }

    //print printVec function
    printVec(vec);



    //vector with static size
    //push_back add character at the end of the vector
    //pop_back remove character form the end of the vector
    vector <int> vec2(5,1);    //if vec2(2) o/p = 0 0 
    vec2.push_back(7);          //else vec2(2,10) o/p = 10 10
    cout<<"Vector after push(7): ";
    printVec(vec2);         //and push_back(7) o/p = 10 7
    cout<<"Vector after popping last digit: ";
    vec2.pop_back();
    printVec(vec2);



    //copy of one vector
    vector <int> v = vec2;      //complexity = O(n)
    //or vector <int> &v = vec2 will create actual copy which reflect change in actual vector  
    v.push_back(8);
    printVec(v);
    //in this there will be a copy of vec2 and the change in v wont reflect in the another vector i.e vec2
    return 0;
}



/*
Certain functions associated with the vector are:
Iterators

    
    ->  begin() – Returns an iterator pointing to the first element in the vector
    
    ->  end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
    
    ->  rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
    
    ->  rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
    
    ->  cbegin() – Returns a constant iterator pointing to the first element in the vector.
    
    ->  cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
    
    ->  crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
    
    ->  crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

*/



/*
Element access:

    
    ->  reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
    
    ->  at(g) – Returns a reference to the element at position ‘g’ in the vector
    
    ->  front() – Returns a reference to the first element in the vector
    
    ->  back() – Returns a reference to the last element in the vector
    
    ->  data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
*/



/*MODIFIERS

    
    ->  assign() – It assigns new value to the vector elements by replacing old ones
    
    ->  push_back() – It push the elements into a vector from the back
    
    ->  pop_back() – It is used to pop or remove elements from a vector from the back.
    
    ->  insert() – It inserts new elements before the element at the specified position
    
    ->  erase() – It is used to remove elements from a container from the specified position or range.
    
    ->  swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
    
    ->  clear() – It is used to remove all the elements of the vector container
    
    ->  emplace() – It extends the container by inserting new element at position
    
    ->  emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector

*/
