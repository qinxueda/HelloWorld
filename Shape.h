/**
 * @file Shape.h
 * @author qinxueda (you@domain.com)
 * @brief 这是一个工厂模式的案例，包括接口类Shape，实例类Circle、Square、Recangcle，工厂类FactoryShape
 * @version 0.1
 * @date 2018-10-29
 * 
 * @copyright Copyright (c) 2018
 * 
 */
#include<iostream>
using namespace std;
/**
 * @brief 工厂模式，工厂接口，虚基类
 * 
 */
class Shape{
public:
    virtual void draw() = 0;
};
/**
 * @brief 工厂模式，实体类，继承自虚基类，长方形
 * 
 */
class Rectangle:public Shape{
public:
    void draw(){
        cout<<"draw in Rectangle"<<endl;
    }
};
/**
 * @brief 工厂模式，实体类，继承自虚基类，圆形
 * 
 */
class Circle:public Shape{
public:
    void draw(){
        cout<<"draw in Circle"<<endl;
    }
};
/**
 * @brief 工厂模式，实体类，继承自虚基类，正方形
 * 
 */
class Square:public Shape{
public:
    void draw(){
        cout<<"draw in Square"<<endl;
    }
};
/**
 * @brief 工厂模式，实体类，继承自虚基类，默认
 * 
 */
class DefualtShape:public Shape{
public:
    void draw(){
        cout<<"defualt shape draw "<<endl;
    }
};
/**
 * @brief 工厂模式，工厂类，工厂可以生产各种图形，工厂提供了生产图形这个动作createShape，所以称之为工厂类
 * 
 */
class FactoryShape{
public:
    /**
     * @brief Create a Shape object
     * 
     * @param shapeType 指定要生产的图形，如圆形Circle
     * @return Shape* 
     */
    Shape* createShape(std::string &shapeType){
        if("Circle" == shapeType){
            return new Circle;
        }
        else if("Rectangle" == shapeType){
            return new Rectangle;
        }
        else if("Square" == shapeType){
            return new Square;
        }
        else{
            return new DefualtShape;
        }
    }
};

