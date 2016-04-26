
/*********************************************************************
˵�����Զ���������
����
1�����ࣺHuman
2��Ů����Girl
3����Ʊ��BoyFriend
*********************************************************************/
typedef struct {
	jstring name;//����
	void(*thinkQuestion) ();//˼������
} Human;

typedef struct {
	jdouble height;//���
	jdouble width;//���
	jstring name;//����

	Human human;//����

	void(*payUpMoney) ();//����
	void(*thinkQuestion)();//˼������
} BoyFriend;

typedef struct {
	jstring name;//����

	BoyFriend boyFriend;//����	

	void(*thinkQuestion)();
} Girl;


/*********************************************************************
˵�����󶨵ķ�����
������
1��void thinkQuestion()    �������˼������
2��void thinkQuestion1()   ��������д�˸����˼������
3��void payUpMoney()	   �����ʽ
*********************************************************************/
void thinkQuestion() {
	printf("˼��ing\n");
}
void thinkQuestion1() {
	printf("������ԥ\n");
}
void payUpMoney() {
	printf("ˢ�ҵο�\n");
}
/*********************************************************************
˵����������
*********************************************************************/
Human getHuman() {
	Human human;
	//����
	human.name = (char *)malloc(sizeof(char)* 20);
	//����
	human.thinkQuestion = thinkQuestion;
	return human;
}

BoyFriend getBoyFriend() {
	BoyFriend boyFriend;
	//��������
	boyFriend.name = (char *)malloc(sizeof(char)* 20);
	//����
	boyFriend.human = getHuman();
	//��ʽ
	boyFriend.payUpMoney = payUpMoney;
	boyFriend.thinkQuestion = thinkQuestion1;//��д�ķ���

	return boyFriend;
}

Girl getGirl() {
	Girl girl;
	//����
	girl.name = (char *)malloc(sizeof(char)* 20);
	//����
	girl.boyFriend = getBoyFriend();
	//����
	girl.thinkQuestion = getHuman().thinkQuestion;

	return girl;
}