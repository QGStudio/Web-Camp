#include "prefj.h"
#include "usej.h"



/*********************************************************************
˵����Ů�������̵깺��ڸ����ʱ����˼����һ�£�ҡ������һ�Ե�����
��˯�ŵ���Ʊ�������Ѹ�����Ѻ�����ԥ�ĸ����ˡ�
*********************************************************************/
void payUpMoneyByBoyFriend() {
	Girl girl = getGirl();
	girl.name = "С��";
	girl.thinkQuestion();
	//��������
	BoyFriend boyFriend = getBoyFriend();
	boyFriend.height = 180;
	boyFriend.width = 180;
	boyFriend.name = "С��";
	//�����ж� 
	boyFriend.thinkQuestion();
	boyFriend.payUpMoney();

}

int main() {
	payUpMoneyByBoyFriend();
	system("pause");
	return 0;
}