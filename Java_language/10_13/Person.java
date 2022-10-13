package com.company;

public class Person {
    String name;
    String gender;
    int age;
    int height;
    int weight;
    Person(String n){
        name = n;
    }

    Person(String n, int h,int w, int a){
        name = n;
        height = h;
        weight = w;
        age = a;
    }//생성자

    public void diet(){
        weight-=10;
    }
    public void diet(int weight){

    }

    public void repeatName(){
        System.out.println("내 이름은"+name+" 입니다!");
    }

}
