package com.cjm.action;

import com.cjm.model.BoyFriend;
import com.cjm.model.Girl;


/**
 * Created by CHEN on 2016/4/21.
 */
public class ShoppingWithBoyFriend {
    public static void main (String [] args) {
        ShoppingWithBoyFriend swbf=new ShoppingWithBoyFriend();
        swbf.payUpMoney();
    }

    public void payUpMoney() {
        Girl girl=new Girl("小红");
        girl.thinkQuestion();//调用了父类的方法
        BoyFriend boyFriend=girl.getBoyFriend();
        boyFriend.setName("小白");
        boyFriend.setHeight(180);
        boyFriend.setWidth(180);

        //最重要的方法
        boyFriend.thinkQuestion();//重写了方法
        boyFriend.payUpMoney();
    }
}
