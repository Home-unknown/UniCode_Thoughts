//概念：
//string是C++风格字符串，而string本质是一个类

//string和char*区别：
//·char*是一个指针
//·string是一个类，类内部封装了char*，管理这个字符串，是一个char*型的容器。

//特点：
//string类内封装了很多成员函数：
//find查找、copy拷贝、delete删除、replace替换、insert插入
//string管理char*所分配的内存，不用担心复制越界和取值越界等，由类内部进行负责

