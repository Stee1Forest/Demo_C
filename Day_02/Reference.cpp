#include <iostream>

using namespace std;

struct Teacher
{
	char name[64];
	int age;
};


int getTeacher(Teacher** p)
{
	Teacher* tmp = NULL;
	if (p == NULL)
	{
		return -1;
	}
	tmp = (Teacher*)malloc(sizeof(Teacher));
	if (tmp == NULL)
	{
		return -2;
	}

	tmp->age = 33;
	*p = tmp;

	return 0;
}


int main(){

	Teacher* pT1 = NULL;

	getTeacher(&pT1);

	cout << "age = " << pT1->age << endl;

	return 0;

}