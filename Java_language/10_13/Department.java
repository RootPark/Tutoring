package com.company;

public class Department {
    Person employee;
    Department(Person p1){
        employee = p1;
    }
    public void work(){
        System.out.println(employee.name+" 이 일을 하고 있습니다.");
    }
}
