#include <iostream>
using namespace std;
/*amespace aa{
	int a = 0;
	namespace bb{
		int b = 0;
	}
}*/
//using namespace aa;
//using namespace aa::bb;
//void fun()
//{
//	int a = 3, b = 2;
//	(a > b ? a : b) = 10;//三目运算符作为左值：*（a>b?&a:&b)=10;
//	cout << a << endl;
//	cout << b << endl;
//}
//内联函数
//宏函数	关键字：inline 省略压站出站的过程、   
//内联函数没有普通函数调用时的额外开销，（压栈，跳转  和返回）
//具有宏函数没有的参数检查，返回类型等
//默认参数 ：void  fun(int c,int b,int a=100)  默认参数100；规则 从右往左 fun(a,b);占位参数  fun(int a ,int)  fun (2,3)
//函数重载：void fun（int a,int b) 一个函数有返回值，函数形参列表（参数个数，参数顺序，参数类型） ;
//函数重载，函数形参列表（参数个数，参数顺序，参数类型）的不同，和返回值没关系；
//函数重载规则，能严格匹配的，调用完全匹配的，没有的话，调用隐式转换；注意：不要使用默认参数，产生二义性； 
//void fun(int a, int b)
//{
//	cout << 1 << endl;
//}
//
//void fun(int a, char b)
//{
//	cout << 2 << endl;
//}
//类和对象：
//class中默认访问权限是private，struct中是public；
//class B{
//	int a;
//};
//class A{
//public:
//	int a;
//	int b;
//	void fun1()
//	{
//		cout << a << endl;
//	}
//};
//构造函数：
//在对象被创建时，用来初始化对象的函数，对象创建初始化是调用：fun  t3;直接调用的无参的构造函数；
//析构函数：
//析构函数和构造函数没有返回值，析构函数没有形参；析构函数的调用和构造函数的调用相反，先构造的后析构，
//构造函数可以重载，析构函数不能重载；
//拷贝构造函数：
//当有一个新创建的对象（test t1 =  fun（））//(t1= fun()触发运算符重载，匿名对象收回)去接收函数的返回值时，返回值匿名的对象转正，吧匿名的对象起了个名字叫t1;
//浅拷贝和深拷贝：浅拷贝两个变量用同一块空间，在析构时发生错误，所以用用到深拷贝，开辟新的空间，析构时互不影响。
class fun{
public:
	fun(int a, int b)
	{
		a1 = a;
		b1 = b;
	}
	~fun()
	{
		cout << "析构函数 "<< endl;
	}
	fun(const fun &x)
	{
		a1 = x.a1;
		b1 = x.b1;
	}
	void print()
	{
		cout << a1 << b1 << endl;
	}
private:
	  int a1;
	  int b1;
};
void test()
{
	fun a(1, 2);
}
enum a{
	x=1,
	c,
	f
};
int main()
{ 
	/*using namespace aa::bb;*/
	/*const int a = 0;*///是真正的常量，常量没有地址
	/*int *p =(int*) &a;*///此时不是a的空间地址，而是临时开辟了一个新的空间，可以赋值。
	/**p = 10;*/
	/*cout << *p <<endl<<a<<endl;*/
	/*int b = 0;*/
	/*int const* p = &a;
	*p = 12;
	p = &b;
	cout <<a<< endl;
	cout << b << endl;*/
	/*const int b = 10;*/      //引用没有定义，是一种关系声明，声明他和原来某一变量的关系，故而类型与原来类型保持一致，且不分配空间，
	                //声明是必须初始化，一但声明，不可改变，可对引用再次引用，是某一边变量的别名。
	                //引用大小和指针一样，引用也可能是一个常量，
	//引用是一个常指针。
	//在自定义函数中，不要用引用接收一个返回值是引用的函数；
	/*int& x = b;
	x += 1;
	cout << b << x;*/
	/*const int &f = b;
	cout << b << endl << f<<endl;*/
	
	/*fun(1, 2);
	fun(1, 'a');
	A y;
	y.a = 1;
	y.b = 3;
	y.fun1();*/
	//fun aa(1,2);
	//test();
	fun t1(1,1);
	fun t2=t1;
	t2.print();
	
	return 0;
} 