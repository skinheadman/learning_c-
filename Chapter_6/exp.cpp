// #include <iostream>
// using namespace std;

// int big(int a, int b)
// {
//     if(a>b) return a;
//     else return b;
// }

// int big(int a[], int size)
// {
//     int res = a[0];
//     for(int i=1;i<size;i++)
//     {
//         if(res<a[i]) res=a[i];
//     }
//     return res;
// }

// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int array[5] = {1, 9, -2, 8, 6};
//     cout << big(2,3) << "\n";
//     cout << big(array, 5) << "\n";
// }

// #include <iostream>
// using namespace std;

// int sum(int a, int b)
// {
//     int s = 0;
//     for(int i=a;i<=b;i++)
//     {
//         s += i;
//     }
//     return s;
// }

// int sum(int a)
// {
//     int s = 0;
//     for(int i=0;i<=a;i++)
//     {
//         s += i;
//     }
//     return s;
// }

// int main()
// {
//     cout << sum(3,5) << "\n";
//     cout << sum(3) << "\n";
//     cout << sum(100) << "\n";
// }

// #include <iostream>
// #include <string>
// using namespace std;

// void star(int a=5);
// void msg(int id, string text = "");

// void star(int a)
// {
//     for(int i=0;i<a;i++) cout << '*';
//     cout << "\n";
// }

// void msg(int id, string text)
// {
//     cout << id << ' ' << text << "\n";
// }

// int main()
// {
//     star();
//     star(10);

//     msg(10);
//     msg(10, "Hello");
// }

// #include <iostream>
// using namespace std;

// void f(char c = ' ', int line = 1);

// void f(char c, int line)
// {
//     for(int i=0;i<line;i++)
//     {
//         for(int j=0;j<10;j++)
//         {
//             cout << c;
//         }
//         cout << "\n";
//     }
// }

// int main()
// {
//     f();
//     f('%');
//     f('@',5);
// }

// #include <iostream>
// using namespace std;

// class Math
// {
//     public :
//     static int abs(int a) { return a>0?a:-a; }
//     static int max(int a, int b) { return (a>b)?a:b; }
//     static int min(int a, int b) { return (a>b)?b:a; }
// };

// int main()
// {
//     cout << Math::abs(-5) << "\n";
//     cout << Math::max(10, 8) << "\n";
//     cout << Math::min(-3,-8) << "\n";
// }
// static 멤버버 설정
// #include <iostream>
// using namespace std;

// class Circle
// {
//     private:
//     static int numOfCircles;
//     int radius;
//     public :
//     Circle(int r = 1);
//     ~Circle() {numOfCircles--;}
//     double getArea() { return 3.14*radius*radius; }
//     static int getNumOfCircles() { return numOfCircles; }
// };

// int Circle::numOfCircles=0;
// Circle::Circle(int r)
// {
//     radius=r;
//     numOfCircles++;
// }

// int main()
// {
//     Circle *p = new Circle[10];
//     cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << "\n";
    
//     delete [] p;
//     cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << "\n";

//     Circle a;
//     cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << "\n";

//     Circle b;
//     cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << "\n";
// }
