package com.company;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class CountingSort {

    public static void main(String[] args) throws IOException {
        //BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        //int size = Integer.parseInt(bufferedReader.readLine());


        int[] array = new int[100];
        int[] counting = new int[51];
        int[] result = new int[100];

        for(int i=0;i<array.length;i++){
            array[i] = (int)(Math.random()*50)+1;
        }

        for(int i=0;i<100;i++){
            counting[array[i]]++;
        }

        for(int i=1;i<51;i++){
            counting[i]+=counting[i-1];
        }

        for(int i=99;i>=0;i--){
            int value = array[i];
            counting[value]--;
            result[counting[value]] = value;
        }


        for(int i=0;i<100;i++){
            System.out.print(result[i]+" ");
        }



    }

}
