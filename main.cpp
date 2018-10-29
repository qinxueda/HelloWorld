/**
 * 
 * 验证gitHub 远端密码是否已经保存
 * 
*/
#include <iostream>
#include <string.h>
#include "Shape.h"
#include "SingleObject.h"
using namespace std;
/**
 * @brief 
 * 
 */
void applayFactory();
/**
 * @brief 
 * 
 */
void applaySinglePattern();
/**
 * @brief 
 * 
 * @param n 
 */
void TestSnippets(int n);
int main()
{
	// applayFactory();
	applaySinglePattern();
	return 0;
}
void applayFactory(){
	string shapeType = "";
	Shape *shape;
	FactoryShape factory;
	shapeType = "Circle";
	shape = factory.createShape(shapeType);
	shape->draw();
	shapeType = "Square";
	shape = factory.createShape(shapeType);
	shape->draw();
	shapeType = "Rectangle";
	shape = factory.createShape(shapeType);
	shape->draw();
}
void applaySinglePattern(){
	SingleObject *singleObj1 = SingleObject::getInterface();
	SingleObject *singleObj2 = SingleObject::getInterface();
	if(singleObj1 == singleObj2){
		cout<<"SingleObject Pattern Demo "<<endl;
	}
}
void TestSnippets(int n){
	
	for(size_t i = 0; i < n; i++)
	{
		cout<<i<<endl;
	}
	
}