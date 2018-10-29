/**
 * @file SingleObject.h
 * @author qinxueda (you@domain.com)
 * @brief C++实现单例模式，单例类SingleObject
 * @version 0.1
 * @date 2018-10-29
 * 
 * @copyright Copyright (c) 2018
 * 
 */


/**
 * @brief 单例模式类
 * 单例模式要点：
 * a.私有的构造、拷贝、赋值
 * b.私有&唯一的&自身的对象实例
 * c.公有且唯一（静态）的外部接口，返回唯一的单例对象
 * 
 */

class SingleObject{
private:
    SingleObject() {}
    SingleObject(const SingleObject& object);
    SingleObject operator = (const SingleObject& object);
    static SingleObject *instance;

public:
/**
 * @brief Get the Interface object
 * 
 * @return SingleObject* 
 */
    static SingleObject* getInterface();
    /**
     * @brief a,b皆为测试变量，用于验证类的静态变量static的实现
     * 
     */
    int a = 10;
    static int b;
};
SingleObject* SingleObject::instance = new SingleObject();  // 类的静态变量的初始化，要在类外进行，而且要注意
                                                            // a.指明变量类型 SingleObject*
                                                            // b.指明变量 SingleObject::instance
                                                            // c.类的实例化 new SingleObject    或
                                                            // d. new SingleObject()
int SingleObject::b = 20;                                   // 变量类型 类::变量名 = 初始化
SingleObject *SingleObject::getInterface(){
    return instance;
}