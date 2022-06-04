package com.company;

import java.util.Scanner;

public class Main {

    public static int[] sorted;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int size = scanner.nextInt();
        int[] arr = new int[size];

        for(int i=0;i<size;i++){
            arr[i]=(int)(Math.random()*10000);
        }

        for(int i=0;i<size;i++){
            System.out.print(arr[i]+" ");
        }

        merge_sort(arr);
        System.out.println();

        for(int i=0;i<size;i++){
            System.out.print(arr[i]+" ");
        }


    }


    public static void merge_sort(int[] a){
        sorted = new int[a.length];
        merge_sort(a,0,a.length-1);
        sorted = null;
    }

    public static void merge_sort(int[] a,int left,int right){

        if(left==right){
            return;
        }

        int mid =(left+right)/2;

        merge_sort(a,left,mid);
        merge_sort(a,mid+1,right);

        merge(a,left,mid,right);
    }

    public static void merge(int[] a,int left,int mid, int right){
        int l=left;
        int r=mid+1;
        int idx=left;

        while(l<=mid&&r<=right){
            if(a[l]<=a[r]){
                sorted[idx]=a[l];
                idx++;
                l++;
            }
            else{
                sorted[idx]=a[r];
                idx++;
                r++;
            }
        }

        if(l>mid){
            while(r<=right){
                sorted[idx]=a[r];
                idx++;
                r++;
            }
        }
        else{
            while(l<=mid){
                sorted[idx]=a[l];
                idx++;
                l++;
            }
        }

        for(int i=left; i<=right;i++){
            a[i]=sorted[i];
        }
    }
}
