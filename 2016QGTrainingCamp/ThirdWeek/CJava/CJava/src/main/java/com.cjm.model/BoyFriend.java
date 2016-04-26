package com.cjm.model;

import java.util.Date;

/**
 * Created by CHEN on 2016/4/21.
 */
public class BoyFriend extends Human{
    private String name;
    private double height;
    private double width;
    private static BoyFriend boyFriend;

    /**
     * @about 返回男友的单例
     * @return
     */
    public static BoyFriend getBoyInstance() {
        if(boyFriend==null) {
            boyFriend=new BoyFriend();
        }
        return boyFriend;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public double getHeight() {
        return height;
    }

    public void setHeight(double height) {
        this.height = height;
    }

    public double getWidth() {
        return width;
    }

    public void setWidth(double width) {
        this.width = width;
    }

    public static BoyFriend getBoyFriend() {
        return boyFriend;
    }

    public static void setBoyFriend(BoyFriend boyFriend) {
        BoyFriend.boyFriend = boyFriend;
    }

    public void payUpMoney() {
        System.out.print("刷我滴卡");
    }

    @Override
    public void thinkQuestion() {
        System.out.println("毫不犹豫");
    }
}
