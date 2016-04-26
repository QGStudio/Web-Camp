
/*********************************************************************
说明：自定义类型区
对象：
1、人类：Human
2、女孩：Girl
3、男票：BoyFriend
*********************************************************************/
typedef struct {
	jstring name;//名字
	void(*thinkQuestion) ();//思考问题
} Human;

typedef struct {
	jdouble height;//身高
	jdouble width;//身宽
	jstring name;//姓名

	Human human;//父类

	void(*payUpMoney) ();//付款
	void(*thinkQuestion)();//思考问题
} BoyFriend;

typedef struct {
	jstring name;//姓名

	BoyFriend boyFriend;//男友	

	void(*thinkQuestion)();
} Girl;


/*********************************************************************
说明：绑定的方法区
方法：
1、void thinkQuestion()    ：父类的思考问题
2、void thinkQuestion1()   ：子类重写了父类的思考问题
3、void payUpMoney()	   ：付款方式
*********************************************************************/
void thinkQuestion() {
	printf("思考ing\n");
}
void thinkQuestion1() {
	printf("毫不犹豫\n");
}
void payUpMoney() {
	printf("刷我滴卡\n");
}
/*********************************************************************
说明：构造器
*********************************************************************/
Human getHuman() {
	Human human;
	//属性
	human.name = (char *)malloc(sizeof(char)* 20);
	//方法
	human.thinkQuestion = thinkQuestion;
	return human;
}

BoyFriend getBoyFriend() {
	BoyFriend boyFriend;
	//设置属性
	boyFriend.name = (char *)malloc(sizeof(char)* 20);
	//对象
	boyFriend.human = getHuman();
	//方式
	boyFriend.payUpMoney = payUpMoney;
	boyFriend.thinkQuestion = thinkQuestion1;//重写的方法

	return boyFriend;
}

Girl getGirl() {
	Girl girl;
	//属性
	girl.name = (char *)malloc(sizeof(char)* 20);
	//对象
	girl.boyFriend = getBoyFriend();
	//方法
	girl.thinkQuestion = getHuman().thinkQuestion;

	return girl;
}