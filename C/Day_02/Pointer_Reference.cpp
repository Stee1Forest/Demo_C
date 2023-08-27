//#include <iostream>
//
//using namespace std;
//
//struct Teacher
//{
//	char name[64];
//	int age;
//};
//
////C语言实现指针的间接赋值
//int getTeacher(Teacher** p)
//{
//	Teacher* tmp = NULL;
//	if (p == NULL)
//	{
//		return -1;
//	}
//	tmp = (Teacher*)malloc(sizeof(Teacher));
//	if (tmp == NULL)
//	{
//		return -2;
//	}
//
//	tmp->age = 33;
//	*p = tmp;
//
//	return 0;
//}
//
////C++引用实现指针的间接赋值
//int getTeacher2(Teacher*& p)
//{
//	p = (Teacher*)malloc(sizeof(Teacher));
//	if (p == NULL)
//	{
//		return -1;
//	}
//	p->age = 44;
//
//	return 0;
//}
//
//
//
//void Free2(Teacher*& p)
//{
//	if (p != NULL)
//		free(p);
//}
//
//int main(){
//
//	Teacher* pT1 = NULL;
//
//	getTeacher(&pT1);
//
//	cout << "C:age = " << pT1->age << endl;
//	Free2(pT1);
//	getTeacher2(pT1);
//	cout << "C++:age = " << pT1->age << endl;
//	Free2(pT1);
//	return 0;
//
//}