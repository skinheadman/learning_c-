// // 1번번
// // #include <iostream>
// // using namespace std;

// // class Color
// // {
// //     int red, green, blue;
// //     public :
// //     Color() { red = green = blue = 0; }
// //     Color(int r, int g, int b) { red = r; green = g; blue = b; }
// //     void setColor(int r, int g, int b) { red = r; green=g; blue=b; }
// //     void show() { cout << red << ' ' << green << ' ' << blue << endl; }
// // };

// // int main()
// // {
// //     Color screenColor(255,0,0);
// //     Color *p;
// //     p = &screenColor;
// //     p->show();
// //     Color colors[3];
// //     p=colors;
// //     p[0].setColor(255,0,0);
// //     p[1].setColor(0,255,0);
// //     p[2].setColor(0,0,255);
// //     for(int i=0;i<3;i++)
// //     {
// //         p[i].show();
// //     }
// // }
// // 2번번
// // #include <iostream>
// // using namespace std;

// // int main()
// // {
// //     int *array = new int [5];
// //     double sum = 0;
// //     cout << "정수 5개 입력 >>";
// //     for(int i=0;i<5;i++)
// //     {
// //         cin >> array[i];
// //     }

// //     for(int i=0;i<5;i++)
// //     {
// //         sum += array[i];
// //     }

// //     cout << "평균 : " << sum/5 << endl;

// //     delete [] array;
    
// // }
// // 3-1
// // #include <iostream>
// // #include <string>
// // using namespace std;

// // int main()
// // {
// //     string str;
// //     int num=0;
// //     char a = 'a';
// //     cout << "문자열 입력>> ";
// //     getline(cin,str);
// //     for(int i=0;i<str.length();i++)
// //     {
// //         if(str[i]=='a')
// //         {
// //             num++;
// //         }
// //     }
// //     cout << "문자 a는 " << num << "개 있습니다.";


// // }
// // 3-2
// // #include <iostream>
// // #include <string>
// // using namespace std;

// // int main()
// // {
// //     string str;
// //     int index=0;
// //     int num=0;
// //     cout << "문자열 입력>> "; 
// //     getline(cin,str);
// //     while(1)
// //     {
// //         index=str.find('a',index);
// //         if(index!=-1) num++;
// //         if(index==-1) break;
// //         index++;
// //     }
// //     cout << "문자 a는 " << num << "개 있습니다.";
// // }
// // 4
// // #include <iostream>
// // #include <string>
// // using namespace std;

// // class Sample
// // {
// //     int *p;
// //     int size;
// //     public:
// //     Sample(int n)
// //     {
// //         size = n;
// //         p=new int [n];
// //     }
// //     void read();
// //     void write();
// //     int big();
// //     ~Sample() { };

// // };

// // void Sample::read()
// // {
// //     for(int i=0;i<size;i++)
// //     {
// //         cin >> p[i];
// //         if(p[i]=='\n') break;
// //     }
// // }

// // void Sample :: write()
// // {
// //     for(int i=0;i<size;i++)
// //     {
// //         cout << p[i] << " ";
// //     }
// //     cout << endl;
// // }

// // int Sample::big()
// // {
// //     int Max = p[0];
// //     for (int i=0;i<size;i++)
// //     {
// //         if(Max<p[i])
// //         {
// //             Max=p[i];
// //         }
// //     }
// //     return Max;
// // }

// // int main()
// // {
// //     Sample s(10);
// //     s.read();
// //     s.write();
// //     cout << "가장 큰 수는" << s.big() << endl;
// // }
// //5
// // #include <iostream>
// // #include <cstdlib>
// // #include <ctime>
// // #include <string>
// // using namespace std;

// // int main()
// // {
// //     string str;
// //     srand((unsigned)time(0));
// //     cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << "\n";
// //     while(1)
// //     {
// //         cout << ">>";
// //         getline(cin,str);
// //         if(str=="exit") break;
// //         int pos = rand()%(str.length());
// //         while(isalpha(str[pos])==0)
// //         {
// //             pos++;
// //         }
// //         int random_A = rand()%2;
// //         if(random_A==0)
// //         {
// //             str[pos]=(char)(rand()%26)+65;
// //         }
// //         else if(random_A==1)
// //         {
// //             str[pos]=(char)(rand()%26)+97;
// //         }
// //         cout << str << endl;

// //     }

// // }
// // 6
// // #include <iostream>
// // #include <string>
// // using namespace std;

// // int main()
// // {
// //     string str;
// //     cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << "\n";
// //     while(true)
// //     {
// //         cout << ">>";
// //         getline(cin,str);
// //         if(str=="exit") break;
// //         int size = str.length();
// //         string reverse(str.rbegin(),str.rend());
// //         cout << reverse << "\n";
// //     }
// // }
// // 7
// // #include <iostream>
// // using namespace std;

// // class Circle
// // {
// //     int radius;
// //     int array[3];
// //     public:
// //     Circle()
// //     {
// //         radius=100;
// //     }

// //     Circle (int r)
// //     {
// //         radius = r;
// //     }
// //     void setRadius(int radius)
// //     {
// //         this->radius=radius;
// //     }

// //     double getArea() { return 3.14*radius*radius; }

// // };

// // int main()
// // {
// //     Circle *p = new Circle [3];
// //     int radius;
// //     int num=0;

// //     for(int i=0;i<3;i++)
// //     {
// //         cout << "원 " << i+1 << "의 반지름 >>";
// //         cin >> radius;
// //         p[i].setRadius(radius);
// //     }

// //     for(int i=0;i<3;i++)
// //     {
// //         if(p[i].getArea()>100)
// //         {
// //             num++;
// //         }
// //     }

// //     cout << "면적이 100보다 큰 원은 " << num << "개 입니다.";
// // }
// // 8
// // #include <iostream>
// // using namespace std;

// // class Circle
// // {
// //     int radius;
// //     int array[3];
// //     public:
// //     Circle()
// //     {
// //         radius=100;
// //     }

// //     Circle (int r)
// //     {
// //         radius = r;
// //     }
// //     void setRadius(int radius)
// //     {
// //         this->radius=radius;
// //     }

// //     double getArea() { return 3.14*radius*radius; }

// // };

// // int main()
// // {

// //     int radius;
// //     int num=0;
// //     int N;

// //     cout << "원의 개수 >> ";
// //     cin >> N;
// //     Circle *p = new Circle [N];

// //     for(int i=0;i<N;i++)
// //     {
// //         cout << "원 " << i+1 << "의 반지름 >>";
// //         cin >> radius;
// //         p[i].setRadius(radius);
// //     }

// //     for(int i=0;i<N;i++)
// //     {
// //         if(p[i].getArea()>100)
// //         {
// //             num++;
// //         }
// //     }

// //     cout << "면적이 100보다 큰 원은 " << num << "개 입니다.";
// // }
// // 9
// // #include <iostream>
// // #include <string>
// // using namespace std;

// // class Person 
// // {
// //     string name;
// //     string tel;
// //     public:
// //     Person() {};
// //     string getName() { return name; }
// //     string getTel() { return tel; }
// //     void set(string name, string tel)
// //     {
// //         this->name=name;
// //         this->tel=tel;
// //     }
// // };

// // int main()
// // {
// //     Person *pArray = new Person [3];
// //     string name;
// //     string tel;
// //     string find_name;
// //     cout << "이름과 전화 번호를 입력해 주세요" << "\n";
// //     for(int i=0;i<3;i++)
// //     {
// //         cout << "사람 " << i+1 << ">> ";
// //         cin >> name >> tel;
// //         pArray[i].set(name,tel);
// //     }
// //     cout << "모든 사람의 이름은 ";
// //     for(int i=0; i<3; i++)
// //     {
// //         cout << pArray[i].getName() << " ";
// //     }
// //     cout << "\n";
// //     cout << "전화번호 검색합니다. 이름을 입력하세요>>";
// //     cin >> find_name;
// //     for(int i=0;i<3;i++)
// //     {
// //         name=pArray[i].getName();
// //         if(name==find_name){
// //             cout << "전화번호는 " << pArray[i].getTel();
// //         }
// //     }
// //      delete [] pArray;
// // }
// //10번
// // #include <iostream>
// // #include <string>
// // using namespace std;

// // class Person
// // {
// //     string name;
// //     public :
// //     Person() {}
// //     Person(string name) { this->name = name; }
// //     string getName() { return name; }
// // };

// // class Family 
// // {
// //     Person *p;
// //     int size;
// //     public:
// //     Family(string name, int size);
// //     void show();
// //     void setName(int num, string name);
// //     ~Family() {}

// // };

// // Family::Family(string name, int size)
// // {
// //     this->size=size;
// //     p=new Person [size];
// //     for(int i=0;i<size;i++)
// //     {
// //         p[i]=name;
// //     }
// // }

// // void Family::show()
// // {
// //     for(int i=0;i<size;i++)
// //     {
// //         cout << p->getName();
// //         cout << "   ";
// //         p++;
// //     }
// // }

// // void Family::setName(int num, string name)
// // {
// //     p[num]=name;
// // }

// // int main()
// // {
// //     Family *simpson = new Family("Simpson", 3);
// //     simpson->setName(0, "Mr. Simpson");
// //     simpson->setName(1, "Mrs. Simpson");
// //     simpson->setName(2, "Bart Simpson");
// //     simpson->show();
// //     delete simpson;
// // }
// // 11번
// #include <iostream>
// using namespace std;

// class Container
// {
//     int size;
//     public :
//     Container() { size = 10; }
//     void fill() { size = 10; }
//     void consume() { size--; }
//     int getSize() { return size; }
// };

// class CoffeeVendingMachine
// {
//     Container tong[3];
//     Container *pArray = new Container [3];
//     void fill();
//     void selectEspresso();
//     void selectAmericano();
//     void selectSugarCoffee();
//     void show();
//     public :
    
//     void run();
// };

// void CoffeeVendingMachine::fill()
// {
//     for(int i=0;i<3;i++)
//     {
//         tong[i].fill(); 
//     }
// }

// void CoffeeVendingMachine::selectEspresso()
// {
//     tong[0].consume();
//     tong[1].consume();
//     if(tong[1].getSize()<=0)
//     {
//         cout << "원료가 부족합니다." << "\n";
//     }
//     else
//     {
//         cout << "에스프레소 드세요" << "\n";
//     }
// }

// void CoffeeVendingMachine::selectAmericano()
// {
//     tong[0].consume();
//     tong[1].consume();
//     tong[1].consume();
//     if(tong[1].getSize()<=0)
//     {
//         cout << "원료가 부족합니다." << "\n";
//     }
//     else
//     {
//         cout << "아메라카노 드세요" << "\n";
//     }
// }

// void CoffeeVendingMachine::selectSugarCoffee()
// {
//     tong[0].consume();
//     tong[1].consume();
//     tong[1].consume();
//     tong[2].consume();
//     if(tong[1].getSize()<=0)
//     {
//         cout << "원료가 부족합니다." << "\n";
//     }
//     else
//     {
//         cout << "설탕커피 드세요" << "\n";
//     }
// }

// void CoffeeVendingMachine::show()
// {
//     for(int i=0;i<3;i++)
//     {
//         cout << tong[i].getSize() << " ";
//     }
//     cout << "\n";
// }

// void CoffeeVendingMachine::run()
// {
//     int choice;
//     cout << "***** 커피자판기를 작동합니다. *****" << "\n";
//     fill();
//     while(true)
//     {
//         cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3: 설탕커피, 4:잔량보기, 5:채우기)>> ";
//         cin >> choice;

//         switch(choice) 
//         {
//             case 1 :
//                 selectEspresso();
//                 break;
//             case 2 :
//                 selectAmericano();
//                 break;
//             case 3 :
//                 selectSugarCoffee();
//                 break;
//             case 4 :
//                 show();
//                 break;
//             case 5 :
//                 fill();
//                 break;
//         }
//     }
// }

// int main()
// {
//     CoffeeVendingMachine *Coffee = new CoffeeVendingMachine;
//     Coffee->run();
// }
// 4장 11번까지
