// // // #include <iostream>
// // // #include <cstdlib>
// // // #include <ctime>
// // // using namespace std;

// // // class Random
// // // {
// // // private:
// // // 	int r;
// // // public:
// // // 	Random();
// // // 	int next();
// // // 	int nextInRange(int min, int max);
// // // };

// // // Random::Random()
// // // {
// // // 	srand((unsigned)time(0));
// // // }

// // // int Random::next()
// // // {
// // // 	int r = rand();
// // // 	return r;
// // // }

// // // int Random::nextInRange(int min, int max)
// // // {
// // // 	int r = (rand() % (max - min + 1) + min);
// // // 	return r;
// // // }

// // // int main()
// // // {
// // // 	Random r;
// // // 	cout << "--0에서" << RAND_MAX << "까지의 랜덤 정수 10개--" << endl;
// // // 	for (int i = 0; i < 10; i++)
// // // 	{
// // // 		int n = r.next();
// // // 		cout << n << ' ';
// // // 	}

// // // 	//Random r1(2,6);
// // // 	cout << endl << endl << "--2에서" << "4 까지의 랜덤 정수 10 개--" << endl;
// // // 	for (int i = 0; i < 10; i++)
// // // 	{
// // // 		int n = r.nextInRange(1, 5);
// // // 		cout << n << ' ';
// // // 	}

// // // 	cout << endl;

// // // }

// // //  #include <iostream>
// // //  using namespace std;

// // //  class Circle
// // //  {
// // // 	int radius;
// // // 	public :
// // // 	Circle() {radius=1;}
// // // 	Circle( int r ) { radius = r ;}
// // // 	double getArea();
// // //  };

// // //  double Circle :: getArea()
// // //  {
// // // 	return 3.14 * radius * radius;
// // //  }

// // //  int main()
// // //  {
// // // 	Circle donut;
// // // 	Circle pizza(30);

// // // 	cout << donut.getArea() << endl;

// // // 	Circle *p;
// // // 	p=&donut;
// // // 	cout << p->getArea() << endl;
// // // 	cout << (*p).getArea() << endl;

// // // 	p=&pizza;
// // // 	cout << p->getArea() << endl;
// // // 	cout << (*p).getArea() << endl;
// // //  }

// // #include <iostream>
// // using namespace std;

// // class Circle 
// // {
// //     int radius;
// //     public :
// //     Circle() { radius = 1; }
// //     Circle(int r) { radius = r; }
// //     void setRadius(int r) { radius = r; }
// //     double getArea();
// // };

// // double Circle :: getArea()
// // {
// //     return 3.14*radius*radius;
// // }

// // int main()
// // {
// //     Circle circleArray[3];

// //     circleArray[0].setRadius(10);
// //     circleArray[1].setRadius(20);
// //     circleArray[2].setRadius(30);

// //     for(int i=0;i<3;i++)
// //     {
// //         cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;
// //     }

// //     Circle *p;
// //     p=circleArray;
// //     for(int i=0;i<3;i++)
// //     {
// //         cout << "Circle " << i << "의 면적은 " << p->getArea() << endl;
// //         p++;
// //     }
// // }

// // #include <iostream>
// // using namespace std;

// // class Circle{
// //     int radius;
// //     public :
// //     Circle() { radius = 1; }
// //     Circle(int r) { radius = r; }
// //     double getArea(); 
// // };

// // double Circle::getArea()
// // {
// //     return 3.14*radius*radius;
// // }

// // int main()
// // {
// //     Circle donut;
// //     Circle pizza(30);

// //     cout << donut.getArea() << endl;

// //     Circle *p;
// //     p=&donut;
// //     cout << p->getArea() << endl;

// //     p=&pizza;
// //     cout << p->getArea() << endl;
// //     cout << (*p).getArea() << endl;
// // }

// // #include <iostream>
// // using namespace std;

// // class Circle
// // {
// //     int radius;
// //     public :
// //     Circle() {radius=1;}
// //     Circle(int r) { radius = r; }
// //     void setRadius(int r) { radius = r; }
// //     double getArea();
// // };

// // double Circle::getArea()
// // {
// //     return 3.14*radius*radius;
// // }

// // int main()
// // {
// //     Circle circles[2][3];

// //     circles[0][0].setRadius(1);
// //     circles[0][1].setRadius(2);
// //     circles[0][2].setRadius(3);
// //     circles[1][0].setRadius(4);
// //     circles[1][1].setRadius(5);
// //     circles[1][2].setRadius(6);

// //     for(int i=0;i<2;i++)
// //     {
// //         for(int j=0;j<3;j++)
// //         {
// //             cout << "Circle[" << i << "," << j << "]의 면적은 ";
// //             cout << circles[i][j].getArea() << endl;
// //         }
// //     } 
// // }

// // #include <iostream>
// // using namespace std;

// // class Sample
// // {
// //     int a;
// //     public:
// //     Sample() { a=100; cout << a << ' '; }
// //     Sample(int x) { a=x; cout << a << ' '; }
// //     Sample(int x, int y) { a=x*y; cout << a << ' ';}
// //     int get() { return a; }
// // };

// // int main()
// // {
// //     Sample arr2D[2][2] = {{Sample(2,3), Sample(2,4)},{Sample(5),Sample()}};

// // //    Sample *p = arr;
// //     int sum=0;
// //     for(int i=0;i<2;i++)
// //     {
// //         for(int j=0;j<2;j++)
// //         {
// //             sum+=arr2D[i][j].get();
// //         }
// //     }
// //     cout << sum << endl;
// // }

// // #include <iostream>
// // using namespace std;

// // int main()
// // {
// //     int *p;

// //     p=new int;
// //     if(!p)
// //     {
// //         cout << "메모리를 할당할 수 없습니다.";
// //         return 0;
// //     }

// //     *p=5;
// //     int n=*p;
// //     cout << "*p=" << *p << endl;
// //     cout << "n=" << n << endl;


// //     delete p;
// // }

// // #include <iostream>
// // using namespace std;

// // int main()
// // {
// //     cout << "입력할 정수의 개수는?";
// //     int n;
// //     cin >> n;
// //     if (n<=0) return 0;
// //     int *p = new int [n];
// //     if(!p) return 0; // 메모리 할당 x
    
// //     for(int i=0; i < n ; i++ )
// //     {
// //         cout << i+1 << "번째 정수";
// //         cin >> p[i];
// //     }

// //     int sum=0;
// //     for (int i=0; i<n; i++)
// //     {
// //         sum += p[i];
// //     }
// //     cout << "평균 = " << sum/n;

// //     delete [] p;
// // }

// // #include <iostream>
// // using namespace std;

// // int main()
// // {
// //     int *array = new int [5];
// //     int max_num=0;
// //     if(!array) return 0;

// //     for(int i=0; i< 5; i++)
// //     {
// //         cin >> array[i];
// //     }
    
    
// //     for(int i=0; i<5; i++)
// //     {
// //         for(int j=1; j<5; j++)
// //         {
// //             if(array[i]>array[j])
// //             {
// //                 max_num=array[i];
// //             }
// //         }
// //     }
// //     cout << max_num << endl;
// //     delete [] array;
// // }

// // #include <iostream>
// // using namespace std;

// // class Circle
// // {
// //     int radius;
// // public :
// //     Circle();
// //     Circle(int r);
// //     ~Circle();
// //     void setRadius(int r) { radius = r; }
// //     double getArea() { return 3.14*radius*radius; }
// // };

// // Circle::Circle()
// // {
// //     radius=1;
// //     cout << "생성자 실행 radius = " << radius << endl;
// // }

// // Circle::Circle(int r)
// // {
// //     radius=r;
// //     cout << "생성자 실행 radius = " << radius << endl;
// // }

// // Circle::~Circle()
// // {
// //     cout << "소멸자 실행 radius = " << radius << endl;
// // }

// // int main()
// // {
// //     Circle *p, *q;
// //     p=new Circle;
// //     q=new Circle(30);

// //     cout << p->getArea() << endl << q->getArea() << endl;
// //     delete p;
// //     delete q;
// // }

// // #include <iostream>
// // using namespace std;

// // class Circle
// // {
// //     int radius;
// //     public :
// //     Circle();
// //     Circle(int r);
// //     ~Circle();
// //     void setRadius(int r) {radius = r;}
// //     double getArea() { return 3.14*radius*radius; }
// // };

// // Circle::Circle()
// // {
// //     radius=1;
// //     cout << "생성자 실행 radius = " << radius << endl;
// // }

// // Circle::Circle(int r)
// // {
// //     radius = r;
// //     cout << "생성자 실행 radius = " << radius << endl;
// // }

// // Circle::~Circle()
// // {
// //     cout << "소멸자 실행 radius = " << radius << endl;
// // }

// // int main()
// // {
// //     int radius;
// //     while(1)
// //     {
// //         cout << "정수 반지름 입력(음수면 종료)>>";
// //         cin >> radius;
// //         if(radius<0) break;

// //         Circle*p=new Circle(radius);

// //         cout << "원의 면적은 " << p->getArea() << endl;
// //         delete p;
// //     }
// // }

// // #include <iostream>
// // using namespace std;

// // class Circle
// // {
// //     int radius;
// //     public :
// //     Circle();
// //     Circle(int r);
// //     ~Circle();
// //     void setRadius(int r) { radius = r; }
// //     double getArea() { return 3.14*radius*radius; }
// // };

// // Circle::Circle()
// // {
// //     radius=1;
// //     cout << "셍성자 실행 radius = " << radius << endl;
// // }

// // Circle::Circle(int r)
// // {
// //     radius = r;
// //     cout << "생성자 실행 radius = " << radius << endl;
// // }

// // Circle::~Circle()
// // {
// //     cout << "소멸자 실행 radius =" << radius << endl;
// // }

// // int main()
// // {
// //     Circle *pArray = new Circle [3];
// //     pArray[0].setRadius(10);
// //     pArray[1].setRadius(20);
// //     pArray[2].setRadius(30);

// //     for(int i=0; i<3; i++)
// //     {
// //         cout << pArray[i].getArea() << endl;
// //     }

// //     Circle *p= pArray;
// //     for(int i=0; i<3; i++)
// //     {
// //         cout << p->getArea() << endl;
// //         p++;
// //     }

// //     delete [] pArray;
// // }

// // #include <iostream>
// // using namespace std;

// // class Circle
// // {
// //     int radius;
// //     public :
// //     Circle();
// //     ~Circle() { }
// //     void setRadius(int r) { radius = r; }
// //     double getArea() { return 3.14*radius*radius; }
// // };

// // Circle::Circle()
// // {
// //     radius=1;
// // }

// // int main()
// // {
// //     int n, radius;
// //     cout << "생성하고자 하는 원의 개수>>";
// //     cin >> n; // 원의 개수 입력
// //     if(n<0) return 0;

// //     Circle *pArray=new Circle [n];
// //     for(int i=0; i<n; i++)
// //     {
// //         cout << "원" << i+1 << ":";
// //         cin >> radius;
// //         pArray[i].setRadius(radius);
// //     }

// //     int count = 0; // 카운트 변수
// //     Circle *p = pArray;
// //     for(int i=0; i<n; i++)
// //     {
// //         cout << p->getArea() << ' '; // 원의 면적 출력
// //         if(p->getArea()>=100 && p->getArea() <=200)
// //         {
// //             count++;
// //         }
// //         p++;
// //     }

// //     cout << endl << "면적이 100에서 200 사이인 원의 개수는 " << count << endl;
// //     delete [] pArray; // 객체 배열 소멸
// // }

// // #include <iostream>
// // #include <string>
// // using namespace std;

// // int main()
// // {
// //     string str;
// //     string address("서울시 성북구 삼선동 389");
// //     string copyaddress(address);

// //     char text[] = {'L','o','v','e', ' ', 'C','+','+','\0'};
// //     string title(text);

// //     cout << str << endl;
// //     cout << address << endl;
// //     cout << copyaddress << endl;
// //     cout << title << endl;
// // }

// // #include <iostream>
// // #include <string>
// // using namespace std;

// // int main()
// // {
// //     string name[5];

// //     for(int i=0; i<5; i++)
// //     {
// //         cout << "이름>>";
// //         getline(cin,name[i],'\n');
// //     }

// //     string latter = name[0];
// //     for(int i=0; i<5; i++)
// //     {
// //         if(latter < name[i])
// //         {
// //             latter=name[i];
// //         }
// //     }
// //     cout << "사전에서 가장 뒤에 나오는 문자열 :" << latter << endl;
// // }

// // #include <iostream>
// // #include <string>
// // using namespace std;

// // int main()
// // {
// //     string s;

// //     cout << "아래 문자열을 입력하세요. 빈 칸이 있어도 됩니다.(한글 안 됨.)" << endl;

// //     getline(cin,s,'\n');
// //     int len = s.length();

// //     for(int i=0; i<len; i++)
// //     {
// //         string first=s.substr(0,1);
// //         string sub = s.substr(1, len-1);
// //         s=sub+first;
// //         cout << s << endl;
// //     }
// // }

// // #include <iostream>
// // #include <string>
// // using namespace std;

// // int main()
// // {
// //     string s;
// //     cout << "덧셈 문자열 입력 >> " << endl;
// //     getline(cin,s,'\n');
// //     int sum=0;
// //     int startIndex=0;
// //     while(true)
// //     {
// //         int fIndex=s.find('+', startIndex);
// //         if(fIndex==-1)
// //         {
// //             string part = s.substr(startIndex);
// //             if(part=="") break; // +로 끝나는 경우
// //             cout << part << endl;
// //             sum += stoi(part);
// //             break;
// //         }
// //         int count = fIndex - startIndex;
// //         string part = s.substr(startIndex,count);

// //         cout << part << endl;
// //         sum+=stoi(part);
// //         startIndex = fIndex+1;
// //     }
// //     cout << "숫자들의 합은 " << sum;
// // }

// // #include <iostream>
// // #include <string>
// // using namespace std;

// // int main()
// // {
// //     string s;
// //     cout << "여러 줄의 문자열을 입력하세요. 입력의 끝은 &문자입니다. >>" << endl;
// //     getline(cin,s,'&');
// //     cin.ignore();

// //     string f, r;
// //     cout << endl << "find : ";
// //     getline(cin,f,'\n');
// //     cout << "replace : ";
// //     getline(cin,r,'\n');

// //     int startIndex = 0;
// //     while(true)
// //     {
// //         int fIndex = s.find(f, startIndex);
// //         if(fIndex==-1)
// //         {
// //             break;
// //         }
// //         s.replace(fIndex, f.length(), r);
// //         startIndex = fIndex + r.length();
// //     }
// //     cout << s << endl;
// // }

// #include <iostream>
// using namespace std;

// class Circle
// {
//     int radius;
//     public:
//     Circle()
//     {
//         radius=100;
//     }

//     Circle (int r)
//     {
//         radius = r;
//     }
//     void setRadius(int radius)
//     {
//         this->radius=radius;
//     }

//     double getArea() { return 3.14*radius*radius; }

// };

// int main()
// {

//     int radius;
//     int num=0;
//     int N;

//     cout << "원의 개수 >> ";
//     cin >> N;
//     Circle *p = new Circle [N];

//     for(int i=0;i<N;i++)
//     {
//         cout << "원 " << i+1 << "의 반지름 >>";
//         cin >> radius;
//         p[i].setRadius(radius);
//     }

//     for(int i=0;i<N;i++)
//     {
//         if(p[i].getArea()>100)
//         {
//             num++;
//         }
//     }

//     cout << "면적이 100보다 큰 원은 " << num << "개 입니다.";
// }