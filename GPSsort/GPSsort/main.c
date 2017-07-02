
//
//  main.c
//  GPS
//
//  Created by 20161104610 on 17/6/16.
//  Copyright © 2017年 20161104610. All rights reserved.
//

#include <stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int i,j;
    char name[10];
    char utc[10],nor[15],lon[15],groud[10],time[10],date[10];
    char cae[10];
    char a[10000][100];
    FILE *fp1;
    FILE *fp2;
    fp1=fopen("/Users/a20161104600/Desktop/GPSsort/GPS170510.log","r+");
    fp2=fopen("/Users/a20161104600/Desktop/GPSsort/output.csv","w+");
    for(i=0;i<1000;i++)
    {
        fgets(a[i],64,fp1);
        printf("%s",a[i]);
    }
    printf("\n");
    
    fprintf(fp2,"序号,度数,南北纬,度数,东西经,速率,时间,月日年,海拔\n");
    
    for(j=0;j<1000;j++)
    {
        strncpy(name,&a[j][0],4);
        if(name[1]=='G')
        {
            if(name[3]=='R')
            {
                strncpy(utc,&a[j][7],6);
                utc[7]='\0';
                strncpy(nor,&a[j][16],10);
                nor[11]='\0';
                strncpy(lon,&a[j][27],11);
                lon[12]='\0';
                strncpy(groud,&a[j][45],5);
                groud[5]='\0';
                strncpy(time,&a[j][7],6);
                time[7]='\0';
                strncpy(date,&a[j][51],6);
                date[7]='\0';
                fprintf(fp2,"%s,%s,%s,%s,%s,%s,",utc,nor,lon,groud,time,date);
            }
            else
                if(name[3]=='G')
            {
                strncpy(cae,&a[j][43],4);
                cae[4]='\0';
                fprintf(fp2,"%s\n",cae);
            }
        }
        else
            continue;
    }
    
    fclose(fp2);
    
}
