#include "prefj.h"
#include "usej.h"



/*********************************************************************
说明：女孩正在商店购物，在付款的时候，她思考了一下，摇醒了在一旁等她等
得睡着的男票，叫男友付款，男友毫不犹豫的付款了。
*********************************************************************/
void payUpMoneyByBoyFriend() {
	Girl girl = getGirl();
	girl.name = "小红";
	girl.thinkQuestion();
	//设置男友
	BoyFriend boyFriend = getBoyFriend();
	boyFriend.height = 180;
	boyFriend.width = 180;
	boyFriend.name = "小白";
	//男友行动 
	boyFriend.thinkQuestion();
	boyFriend.payUpMoney();

}

int main() {
	payUpMoneyByBoyFriend();
	system("pause");
	return 0;
}