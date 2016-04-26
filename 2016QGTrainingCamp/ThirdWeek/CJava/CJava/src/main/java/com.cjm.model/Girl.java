package com.cjm.model;

/**
 * Created by CHEN on 2016/4/21.
 */
public class Girl extends Human{
    private String name;//姓名
    private BoyFriend boyFriend;//男友

    //用户名的构造器
    public Girl(String name) {
        this.name = name;
    }
    public Girl () {
        super();
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    /**
     * @about 召唤男友
     * @return
     */
    public BoyFriend getBoyFriend() {
        return BoyFriend.getBoyInstance();
    }


}
