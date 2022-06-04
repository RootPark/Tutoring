package com.company;

import java.util.Arrays;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int size = scanner.nextInt();

        int[] arr = new int[size];

        for(int i=0;i<size;i++){
            arr[i]=(int)(Math.random()*1000);
            for(int j=0;j<i;j++){
                if(arr[i]==arr[j]){
                    i--;
                    break;
                }
            }
        }

        for(int i=0;i<size;i++){
            System.out.print(arr[i]+" ");
        }

        System.out.println();
        Arrays.sort(arr);

        for(int i=0;i<size;i++){
            System.out.print(arr[i]+" ");
        }


        System.out.println();

        System.out.print("검색할 데이터 : ");
        int search = scanner.nextInt();
        binarySearch(arr,search);
    }

    public static void binarySearch(int[] arr, int search){
        int low=0;
        int mid=0;
        int high=arr.length-1;
        int result=0;

        while(low<high){
            mid=(low+high)/2;

            if(arr[mid]<search){
                low=mid+1;
            }
            else if(arr[mid]>search){
                high=mid-1;
            }else{
                result=mid;
                System.out.println("데이터는 "+result+"번째에 있습니다.");
                return;
            }
        }
        System.out.println("데이터가 없습니다.");
    }
}
