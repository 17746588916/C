#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Student{
	int id;
	char name[20];
	int  sshuxue;
	int  sc;
	int  syingyu;
        }st[10];
 
	void menu();/*���ò˵�����*/
	int a();	//���ļ��ж�������
	void a1();    //����ʽ¼��ѧ����Ϣ
	void b();	//����ÿ�ſε��ܳɼ���ƽ����
	void c();	//����ÿ��ѧ�����ܳɼ���ƽ����
	void zfgd();	//���ܷ��ɸߵ�����
	void zfdg();	//���ܷ��ɵ͵�����
	void e();	//��ѧ����С������
	void f();    //��ѧ������ѯ
    void o();    //����ɼ�	
    void tongji(); //��ƽ����ͳ����������
 
/*������************************************************************************************/

void main()
{
    int choice;/*�û�ѡ�����*/
    printf("*******************************************************************************\n");
    printf("*                                                                             *\n");
    printf("*                            ѧ���ɼ��ļ�����                                 *\n"); 
    printf("*                                                                             *\n");
    printf("*******************************************************************************\n\n\n");
    printf("******************************���ӭʹ�á��*********************************");

	

    while (1)

    {FILE* file;
	if((file=fopen("f1.txt","r"))==NULL)
	printf("file open error\n");
	int i=0;
	while(!feof(file)){
		fscanf(file,"%d",&st[i].id);
			fscanf(file,"   ");
		fscanf(file,"%s",st[i].name);
	       	fscanf(file,"   ");
		fscanf(file,"%d",&st[i].sshuxue);
      		fscanf(file,"   ");
		fscanf(file,"%d",&st[i].sc);
      		fscanf(file,"   ");
		fscanf(file,"%d",&st[i].syingyu);
		fscanf(file,"\n");
		i++;}
	fclose(file);


         menu();/*���ò˵������γɲ�������*/
         printf("��ѡ��:");
 scanf("%d", &choice); 
 printf("*****************************************************************************\n");
         
         if ( choice==0 )
         {
              printf("\t\t\t\tллʹ��!!!");
              break;
          }
       switch(choice) /*����ѡ��ʵ�ֹ��ܲ�ͬ�Ĺ���*/

       {  
	       case 1:
		    		a();    
                break;
            case 2:
               a1();
                break;
           case 3:
				    b(); 
				 break;
           case 4:
					c();     
              break;
           case 5:
					zfgd();
              break;
           case 6:            
				   zfdg();
              break;
		   case 7:  
			        e(); 
			      break;
           case 8:   
			       xmpx();
			   
			      break;
		  case 9:			   
			         f();                        
			      break;
           case 10:
			   			                          
			      break;
           case 11:
			         tongji();                   
			      break;
            case 12:
			          o();             
			      break;
           case 13:
			 
			   
                         
			      break;
		   case 0:

              printf("\nллʹ��!�ټ�!\n");

           default:

              printf("\n��������!������ѡ��!\n");

       }/*����switch*/

    }/*����while*/

}












/*�˵�����*************************************************************************************/

void menu()

{

    printf("********************************�������������******************************\n");/*ѡ���ܲ˵�*/
     printf("****************************************************************************\n");
     printf("  1.  Read from a fil\n  2.  Append record manually\n  3.  Calculate total and average score of every course\n  4.  Calculate total and average score of every student\n  5.  Sort in descending order by total score of every student\n  6.  Sort in ascending order by total score of every stuednet\n  7.  Sort in ascending order by number\n  8.  Sort in dictionary order by name\n  9.  Search by number\n  10. Search by name\n  11. Statistic analysis for every course\n  12. List record\n  13. Write to a file\n  0.  Exit\n");
	printf("*****************************************************************************\n");
	}

 


//���ļ��ж�������
        
int a()
{

   FILE *fp;
   char ch,filename[10];
printf("please input file name->--------->>-");
scanf("%s",filename);
 printf("--->>>>>>>>>>>>>>>>>*<<<<<<<<<<<<<<<---\n");
   fp=fopen(filename,"r+");    /*����ı��ļ�Ӧ�ú������ɵ�Ӧ�ó�������ͬ�ļ�����*/
   if(fp==NULL)    /*�ļ�ֻ�ܴ�һ��*/
   {
       printf("this file is not exist!");
       exit(0);
   }
  printf("  ѧ��   ����  ��ѧ  C����  Ӣ��  \n");
   ch=fgetc(fp);
   int counter=1;
   while(ch!=EOF)//��ָ�����ļ��ж���һ���ַ���eof�ǽ�����־
   {
       putchar(ch);
       ch=fgetc(fp);
	   if (ch=='\n')
		   ++counter;
   }
   
   printf("\n");
   
   printf("--->>>>>>>>>>>>>>>>>*<<<<<<<<<<<<<<<---\n");
   //fclose(fp);//�ر��ļ�
   printf("total num:%d\n",counter);
   return(0);
}
//��ÿ�ſγ̵�ƽ���ֺ��ܳɼ�
void b(){
	int aier();
        printf("\n\n");
		int i;
		int n;
	n=aier();
	float sum_sshuxue=0.00,sum_sc=0.00,sum_syingyu=0.00;
	 float aver_sshuxue=0.00,aver_sc=0.00,aver_syingyu=0.00;
	 for(i=0;i<n;i++){
	 sum_sshuxue=sum_sshuxue+st[i].sshuxue;
   	 sum_sc=sum_sc+st[i].sc;
	 sum_syingyu=sum_syingyu+st[i].syingyu;}
aver_sshuxue=sum_sshuxue/n;
aver_sc=sum_sc/n;
aver_syingyu=sum_syingyu/n;
printf("      �ܷ�     ƽ��ֵ\n");
printf("\n��ѧ   %.2f   %.2f\n",sum_sshuxue,aver_sshuxue);
printf("\nC����  %.2f   %.2f\n",sum_sc,aver_sc);
printf("\nӢ��   %.2f   %.2f",sum_syingyu,aver_syingyu);
	    printf("\n\n");

	}


//����ÿ��ѧ�����ܳɼ���ƽ����
void c(){
        printf("\n\n");
		 int aier();
		 int i;
		 int n;
        n=aier();
		float sum[10];
    	float pingjun[10];
         for(i=0;i<n;i++){
			sum[i]=st[i].sshuxue+st[i].sc+st[i].syingyu;		
	         pingjun[i]=sum[i]/3;}
    printf("   ѧ��     ����     �ܷ�     ƽ����  \n");  
		 for(i=0;i<n;i++)
printf("  %d    %s    %.2f   %.2f  \n",st[i].id,st[i].name,sum[i],pingjun[i]);
	
}

//���ܷ��ɸߵ�����

void zfgd(){
        printf("\n\n");
		int i,j,n,aier();
       n=aier();
        float sum[10],change[10],temp;
			for(i=0;i<n;i++)
		sum[i]=st[i].sshuxue+st[i].sc+st[i].syingyu;
			for(j=0;j<n;j++)
			for(i=0;i<n-j;i++)
			if(sum[i]<sum[i+1]){
						temp=sum[i];
						sum[i]=sum[i+1];
						sum[i+1]=temp;}
			for(i=0;i<n;i++)
		change[i]=st[i].sshuxue+st[i].sc+st[i].syingyu;
			printf("   ѧ��      ����     �ܷ�    ����  \n");
			for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			if(sum[i]==change[j])
				
				printf(" %d      %s    %.2f    %d\n",st[j].id,st[j].name,sum[i],i+1);
			printf("\n");				

	}
//���ܷ��ɵ͵�����

void zfdg(){
        printf("\n\n");
		int i,j,n,aier();
       n=aier();
        float sum[10],change[10],temp;
			for(i=0;i<n;i++)
		sum[i]=st[i].sshuxue+st[i].sc+st[i].syingyu;
			for(j=n-1;j>0;j--){
				for(i=0;i<n-j;i++){
			if(sum[i]>sum[i+1]){
						temp=sum[i];
						sum[i]=sum[i+1];
						sum[i+1]=temp;}
			}}
			for(i=0;i<n;i++)
		change[i]=st[i].sshuxue+st[i].sc+st[i].syingyu;
			printf("   ѧ��      ����     �ܷ�    ����  \n");
			for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			if(sum[i]==change[j])
				
				printf(" %d      %s    %.2f    %d\n",st[j].id,st[j].name,sum[i],i+1);
			printf("\n");				

	}
	//��ѧ����С������
void e(){
      int i,j,n,aier();
       n=aier();
	  int id[10],change[10],temp;
	  for (i=0;i<n;i++)
	id[i]=st[i].id;
	    for(j=0;j<n;j++)
			for(i=0;i<n-i;i++)	
		  if(id[i]>id[i+1]){
		  temp=id[i];
		  id[i]=id[i+1];
		  id[i+1]=temp;
		  }
	printf("   ѧ��        ����    ��ѧ  C���� Ӣ��  \n");	
  
	for(i=0;i<n;i++)
	printf("  %d     %s     %d    %d   %d\n",st[i].id,st[i].name,st[i].sshuxue,st[i].sc,st[i].syingyu);	

	}



int aier()
{

   FILE *fp;
   char ch;

   fp=fopen("f1.txt","r+");    /*����ı��ļ�Ӧ�ú������ɵ�Ӧ�ó�������ͬ�ļ�����*/
   if(fp==NULL)    /*�ļ�ֻ�ܴ�һ��*/
   {
       printf("this file is not exist!");
       exit(0);
   }
  
   ch=fgetc(fp);
   int counter=1;
   while(ch!=EOF)//��ָ�����ļ��ж���һ���ַ���eof�ǽ�����־
   {
       ch=fgetc(fp);
	   if (ch=='\n')
		   ++counter;
   }
   

   return counter;
}



//����ʽ¼��ɼ�
void a1(){
	int i=0,j;
	char c='y';

	while(c=='y'){
		printf("ѧ��");
	scanf("%d",&st[i].id);
	for(i=0;i<10;i++){
	if(st[i].id==st[i+1].id){
	printf("�������ѧ���Ѵ��ڣ�����������\n");
	printf("ѧ��");
	scanf("%d",&st[i].id);
	}}
printf("����");	
	scanf("%s",st[i].name);
printf("��ѧ");
		scanf("%d",&st[i].sshuxue);
printf("C����");
		scanf("%d",&st[i].sc);
printf("Ӣ��");
	scanf("%d",&st[i].syingyu);
		i++;
for(i=0;i<10;i++){
	for(j=10;j<=i;j--){
	if(st[i].id==st[j].id){
	printf("�������ѧ���Ѵ��ڣ�����������\n");
	printf("ѧ��");
	scanf("%d",&st[i].id);
}}}
  getchar();
       printf("��������ѧ����Ϣ��?");

        printf("\n�����밴y���������밴n\n");

       c=getchar();

     getchar();
}

}
/*��ѧ�Ų�ѯѧ����Ϣ*******************************************************************************/

void f()

{

    int n,i,j,k,x,aier();
n=aier();
    char c='y';

    while(c=='y')

    {

       k=-1;

       printf("\n������ѧ��ѧ��:");

scanf("%d",&x);

for(i=0;i<n;i++)

if(st[i].id==x){
	
               k=i;/*�ҵ�Ҫ��ѯ��ͬѧѧ��,����k�������±�*/

               printf("��ѧ������Ϣ\n");
	printf("   ѧ��        ����    ��ѧ  C���� Ӣ��  \n");	
              printf("  %d     %s     %d    %d   %d\n",st[i].id,st[i].name,st[i].sshuxue,st[i].sc,st[i].syingyu);
}


		   getchar();
       printf("������ѯ����ѧ����Ϣ��?");

        printf("\n�����밴y���������밴n\n");

       c=getchar();

     getchar();

    }/*����while*/

  getchar();

}





//���ѧ���ɼ�
void o(){
printf("\n\n");
		 int aier();
		 int i;
		 int n;
        n=aier();
		float sum[10];
    	float pingjun[10];
         for(i=0;i<n;i++){
			 sum[i]=st[i].sshuxue+st[i].sc+st[i].syingyu;		
	         pingjun[i]=sum[i]/3;}
             printf("   ѧ��     ����      ��ѧ	C����	Ӣ��	�ܷ�	ƽ���� \n");  
		 for(i=0;i<n;i++)
			 printf("  %d  %s      %.2d	%.2d	%.2d	%.2f	%.2f\n",st[i].id,st[i].name,st[i].sshuxue,st[i].sc,st[i].syingyu,sum[i],pingjun[i]);
}








/*��ƽ����ͳ����������*****************************************************************************/

void tongji()

{
int aier();
		int i=0,m,k;
		 int n;
        n=aier();
		float z;

//**********************************************************************************************************************************		
        printf("\n\n  -----------------------------------------------------------\n");
		printf("  �������:\t");
		 k=0;
	for(i=0;i<n;i++)/*ͳ����ѧ����������*/
    {
      
        if(st[i].sshuxue<60)
       {  
           m=i;/*�ҵ�������m�������±�*/      
       k++;/*kΪ��ѧ����������*/
		}
		
       }	
        printf("  ��%d��\t",k);
z=(float)k/(float)n*100;
		printf("  ��ռ�ı� %.2f%% \n",z);
        printf("  -----------------------------------------------------------\n");
    

   
	
	//****************************************************************************************************************************
	
	    printf("  60~69��֮��:\t");
		 k=0;
	for(i=0;i<n;i++)/*ͳ����ѧ60~69������*/
    {
      
        if(st[i].sshuxue>59&&st[i].sshuxue<70)
       {     
           m=i;/*�ҵ���ѧ69~69ѧ��������m�������±�*/  
       k++;/*kΪ��ѧ60~69������*/
		} 
		
      } 
        printf("  ��%d��\t",k);
		z=(float)k/(float)n*100;
		printf("  ��ռ�ı� %.2f%% \n",z);
         printf("  ----------------------------------------------------��-----\n");
   
  
   
	//******************************************************************************************************************************
  printf("  70~79��֮��:\t");
  k=0;
  for(i=0;i<n;i++)/*ͳ����ѧ70~79������*/
    {
     
        if(st[i].sshuxue>69&&st[i].sshuxue<80)
       {     
           m=i;/*�ҵ���ѧ70~79ѧ��������m�������±�*/              
       	k++;/*kΪ��ѧ70~79������*/
		}
	
       } 

        printf("  ��%d��\t",k);
z=(float)k/(float)n*100;
		printf("  ��ռ�ı� %.2f%% \n",z);
        printf("  ----------------------------------------------------ѧ-----\n");

    


	//*********************************************************************************************************************************
    printf("  80~89��֮��:\t");
       k=0;
    for(i=0;i<n;i++)/*ͳ����ѧ80~89������*/
    {
        if(st[i].sshuxue>79&&st[i].sshuxue<90)
       {     
           m=i;/*�ҵ���ѧ80~89ѧ��������m�������±�*/    
       k++;/*kΪ��ѧ80~89������*/
		}
		
     }  
        printf("  ��%d��\t",k);
		z=(float)k/(float)n*100;
		printf("  ��ռ�ı� %.2f%% \n",z);
        printf("  -----------------------------------------------------------\n");
    


//***************************************************************************************************************************************
    printf("  90~100��֮��:\t");
	k=0;
    for(i=0;i<n;i++)/*ͳ����ѧ90~100������*/
    {
       
        if(st[i].sshuxue>89&&st[i].sshuxue<=100)
       {     
           m=i;/*�ҵ���ѧ90~100ѧ��������m�������±�*/              
       k++;/*kΪ��ѧ90~100������*/
		}
		
      } 
        printf("  ��%d��\t",k);
		z=(float)k/(float)n*100;
		printf("  ��ռ�ı� %.2f%% \n",z);
        
      printf("  -----------------------------------------------------------\n\n");
//****************************************************************************************************************************************


//**********************************************************************************************************************************		
     printf("          -----------------------------------------------------------\n");
		printf("          �������:\t");
		 k=0;
	for(i=0;i<n;i++)/*ͳ����ѧ����������*/
    {
      
        if(st[i].sc<60)
       {  
           m=i;/*�ҵ�������m�������±�*/      
       k++;/*kΪ��ѧ����������*/
		}
		
       }	
        printf("  ��%d��\t",k);
z=(float)k/(float)n*100;
		printf("   ��ռ�ı� %.2f%% \n",z);
        printf("          -----------------------------------------------------------\n");
    

   
	
	//****************************************************************************************************************************
	
	    printf("          60~69��֮��:\t");
		 k=0;
	for(i=0;i<n;i++)/*ͳ����ѧ60~69������*/
    {
      
        if(st[i].sc>59&&st[i].sc<70)
       {     
           m=i;/*�ҵ���ѧ69~69ѧ��������m�������±�*/  
       k++;/*kΪ��ѧ60~69������*/
		} 
		
      } 
        printf("  ��%d��\t",k);
		z=(float)k/(float)n*100;
		printf("  ��ռ�ı� %.2f%% \n",z);
        printf("          -----------------------------------------------------C-----\n");
   
  
   
	//******************************************************************************************************************************
  printf("          70~79��֮��:\t");
  k=0;
  for(i=0;i<n;i++)/*ͳ����ѧ70~79������*/
    {
     
        if(st[i].sc>69&&st[i].sc<80)
       {     
           m=i;/*�ҵ���ѧ70~79ѧ��������m�������±�*/              
       	k++;/*kΪ��ѧ70~79������*/
		}
	
       } 

        printf("  ��%d��\t",k);
z=(float)k/(float)n*100;
		printf("  ��ռ�ı� %.2f%% \n",z);
        printf("          ----------------------------------------------------��-----\n");

    


	//*********************************************************************************************************************************
    printf("          80~89��֮��:\t");
       k=0;
    for(i=0;i<n;i++)/*ͳ����ѧ80~89������*/
    {
        if(st[i].sc>79&&st[i].sc<90)
       {     
           m=i;/*�ҵ���ѧ80~89ѧ��������m�������±�*/    
       k++;/*kΪ��ѧ80~89������*/
		}
		
     }  
        printf("  ��%d��\t",k);
		z=(float)k/(float)n*100;
		printf("  ��ռ�ı� %.2f%% \n",z);
        printf("          -----------------------------------------------------------\n");
    


//***************************************************************************************************************************************
    printf("          90~100��֮��:\t");
	k=0;
    for(i=0;i<n;i++)/*ͳ����ѧ90~100������*/
    {
       
        if(st[i].sc>89&&st[i].sc<=100)
       {     
           m=i;/*�ҵ���ѧ90~100ѧ��������m�������±�*/              
       k++;/*kΪ��ѧ90~100������*/
		}
		
      } 
        printf("  ��%d��\t",k);
		z=(float)k/(float)n*100;
		printf("  ��ռ�ı� %.2f%% \n",z);
        
      printf("          -----------------------------------------------------------\n\n");
//****************************************************************************************************************************************
//**********************************************************************************************************************************		
     printf("  -----------------------------------------------------------\n");
		printf("  �������:\t");
		 k=0;
	for(i=0;i<n;i++)/*ͳ����ѧ����������*/
    {
      
        if(st[i].syingyu<60)
       {  
           m=i;/*�ҵ�������m�������±�*/      
       k++;/*kΪ��ѧ����������*/
		}
		
       }	
        printf("  ��%d��\t",k);
z=(float)k/(float)n*100;
		printf("  ��ռ�ı� %.2f%% \n",z);
        printf("  -----------------------------------------------------------\n");
    

   
	
	//****************************************************************************************************************************
	
	    printf("  60~69��֮��:\t");
		 k=0;
	for(i=0;i<n;i++)/*ͳ����ѧ60~69������*/
    {
      
        if(st[i].syingyu>59&&st[i].syingyu<70)
       {     
           m=i;/*�ҵ���ѧ69~69ѧ��������m�������±�*/  
       k++;/*kΪ��ѧ60~69������*/
		} 
		
      } 
        printf("  ��%d��\t",k);
		z=(float)k/(float)n*100;
		printf("  ��ռ�ı� %.2f%% \n",z);
        printf("  ----------------------------------------------------Ӣ-----\n");
   
  
   
	//******************************************************************************************************************************
  printf("  70~79��֮��:\t");
  k=0;
  for(i=0;i<n;i++)/*ͳ����ѧ70~79������*/
    {
     
        if(st[i].syingyu>69&&st[i].syingyu<80)
       {     
           m=i;/*�ҵ���ѧ70~79ѧ��������m�������±�*/              
       	k++;/*kΪ��ѧ70~79������*/
		}
	
       } 

        printf("  ��%d��\t",k);
z=(float)k/(float)n*100;
		printf("  ��ռ�ı� %.2f%% \n",z);
        printf("  ----------------------------------------------------��-----\n");

    


	//*********************************************************************************************************************************
    printf("  80~89��֮��:\t");
       k=0;
    for(i=0;i<n;i++)/*ͳ����ѧ80~89������*/
    {
        if(st[i].syingyu>79&&st[i].syingyu<90)
       {     
           m=i;/*�ҵ���ѧ80~89ѧ��������m�������±�*/    
       k++;/*kΪ��ѧ80~89������*/
		}
		
     }  
        printf("  ��%d��\t",k);
		z=(float)k/(float)n*100;
		printf("  ��ռ�ı� %.2f%% \n",z);
        printf("  -----------------------------------------------------------\n");
    


//***************************************************************************************************************************************
    printf("  90~100��֮��:\t");
	k=0;
    for(i=0;i<n;i++)/*ͳ��yingyu90~100������*/
    {
       
        if(st[i].syingyu>89&&st[i].syingyu<=100)
       {     
           m=i;/*�ҵ�yingyu90~100ѧ��������m�������±�*/              
       k++;/*kΪyingyu90~100������*/
		}
		
      } 
        printf("  ��%d��\t",k);
		z=(float)k/(float)n*100;
		printf("  ��ռ�ı� %.2f%% \n",z);
        printf("  -----------------------------------------------------------\n\n");
   
//****************************************************************************************************************************************

}

 //����������
void xmpx(){
		int aier();
		int i,j;
		int n;
		n=aier();
        char change[10][20],temp[20];

			for(j=0;j<n;j++)
				for(i=0;i<n-j;i++)
					if(strcmp(st[i].name,st[i+1].name)>0){
						strcpy(temp,st[i].name);
						strcpy(st[i].name,st[i+1].name);
						strcpy(st[i+1].name,temp);}
		
			printf("\n�����ϱ��,�ɵ����°��������ֵ�˳���ų��ĳɼ���\n");
			printf("ѧ��        ����      ��ѧ   C����    Ӣ��\n");
			for(i=0;i<n;i++)
				
			printf("%d  %s  %d  %d  %d\n",st[i].id,st[i].name,st[i].sshuxue,st[i].sc,st[i].syingyu);
							printf("�밴�������ַ���Ŀ¼");
	}