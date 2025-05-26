#include <iostream>

using namespace std;

class Rectangle{
    public:
        int width, height;
        
        void display(){
            cout << width << " " << height << "\n";
        }
    
};

class RectangleArea : public Rectangle{
    public:
        void read_input(){
            cin >> width >> height;
        }
        void display(){
            int area = width * height;
            cout << area << "\n";
        }
};

int main(){
    RectangleArea r;
    r.read_input();
    r.Rectangle::display();
    r.display();
    return 0;
}