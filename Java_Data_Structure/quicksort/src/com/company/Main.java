package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	    Scanner scanner = new Scanner(System.in);
	    int size =scanner.nextInt();
	    int[] arr= new int[size];

	    for(int i=0;i<size;i++){
	        arr[i]=(int)(Math.random()*10000);
        }

	    for(int i=0;i<size;i++){
            System.out.print(arr[i]+" ");
        }

	    sort(arr);

        System.out.println();

        for(int i=0;i<size;i++){
            System.out.print(arr[i]+" ");
        }


    }

    public static void sort(int[] arr){
        l_pivot_sort(arr,0, arr.length-1);
    }

    public static void l_pivot_sort(int[] arr, int lo, int hi){
        if(lo>=hi){
            return;
        }

        int pivot = partition(arr,lo,hi);
        l_pivot_sort(arr,lo,pivot-1);
        l_pivot_sort(arr,pivot+1,hi);
    }

    public static int partition(int[] arr, int left, int right){
        int lo = left;
        int hi = right;
        int pivot = arr[left];

        while(lo<hi){
            while(arr[hi]>pivot && lo<hi){
                hi--;
            }
            while(arr[lo]<=pivot&&lo<hi){
                lo++;
            }
            swap(arr,lo,hi);
        }
        swap(arr,left,lo);

        return lo;
    }

    public static void swap(int[] arr, int i, int j){
        int tmp=arr[i];
        arr[i]=arr[j];
        arr[j]=tmp;
    }

}
