//
//  main.c
//  sort1
//
//  Created by 20161104600 on 2017/6/16.
//  Copyright © 2017年 20161104600. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i,j,m;
    int n[20];
    FILE *fp1,*fp2;
    fp1=fopen("/Users/a20161104600/Desktop/sort/input.txt","r+");
    fp2=fopen("/Users/a20161104600/Desktop/sort/output.txt ","w+");
    if(fp1==NULL)
    {
        printf("文件打开错误，文件为空!\n");
      
    }
    else{
        for(i=0;i<n;i++)
        {
            fscanf(fp1,"%d",&n[i]);
            printf("%d",n[i]);
        }
    }
    return 0;
}
