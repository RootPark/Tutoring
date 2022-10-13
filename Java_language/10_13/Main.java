package com.company;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Person park = new Person("박근원", 173, 70, 24);
        Person Kang = new Person("강동원");
        Department develop = new Department(park);
        develop.work();
        System.out.println(park.weight);
        develop.employee.diet();
        System.out.println(park.weight);

    }
}

