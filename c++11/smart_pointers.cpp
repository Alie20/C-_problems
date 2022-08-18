#include <iostream>
using namespace std;
#include <memory>
 
class Rectangle {
    int length;
    int breadth;
 
public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
 
    int area()
    {
        return length * breadth;
    }
};
int main()
{
    /*
    unique_ptr <Rectangle> ptr (new Rectangle(10,5));
    unique_ptr <Rectangle> ptr2;
    ptr2 = move(ptr);
    // cout<<ptr->area(); only one pointer point to object as you move ptr to ptr2 so ptr can't access
    */

   
    shared_ptr <Rectangle> ptr2 (new Rectangle(10,5));
    shared_ptr <Rectangle> ptr1 ;
    ptr1 = ptr2; 
    cout <<ptr1->area()<<"  "<<ptr2->area()<<endl;
    cout <<ptr1.use_count()<<endl;
  
    weak_ptr <Rectangle> ptr3 (ptr2); 
    cout <<ptr3.use_count();
   

}