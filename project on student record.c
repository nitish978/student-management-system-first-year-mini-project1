#include<stdio.h>
#include<string.h>
#include<conio.h>
FILE *fr,*fr1;
struct student{
	char name[30],fname[30],gender[10],blood[10], rollno[10],course[10],branch[15],email[30];


}s,p[1000],o;
struct studentaward
{

    char name[30],rollno[10],branch[10],award[20],fine[20],activity[20];
}e1;
struct feerecipt
{
   char name[30],fname[30],branch[15], rollno[10];
}r;
struct trip
{
	char  name[30],branch[15],gender[10];
		char rollno[20],place[30];
	double hotel_charge,cab_charge,total_charge;

}e;
struct performance{
	char name[30];
	char rollno[10];
	char fname[30];
	char gender[10];
	char branch[10];
	char perform[5];
	char sem[10];
}n,q,g[1000];
struct medical
{
    char name[20];
    char rollno[10],branch[10],gender[10],heptitis[10],chickenpox[10],typhoid[10],other[15];

}m1;
float avg;


void sort_performance()
{
	int f,d,z=0;
		fr1=fopen("tempp.txt","r");


                    while(fread(&n,sizeof(n),1,fr1)==1)


                   {

					 g[z]=n;
					  z++;
	               }
	               fclose(fr1);
	            for(f=0;f<z;f++)
				{
					for(d=f+1;d<z;d++)
					{
					  if(strcmp(g[f].perform,g[d].perform)>0)
					  {
					     q=g[f];
						 g[f]=g[d];
						 g[d]=q;
						  }
					}
				   }
				   for(f=0;f<z;f++)
				   {
				   	printf("\n%15s%15s%5s%10s%15s%5s%5s\n",g[f].name,g[f].fname,g[f].gender,g[f].branch,g[f].rollno,g[f].perform,g[f].sem);
				   	printf("\n");
				   }
}

void enter1()
			{
			   int  q=1,w;

				printf("enter the student name\n");
			fflush(stdin);
				gets(s.name);

				for(w=0;w<strlen(s.name);w++)
				{
						if((s.name[w]<65)||(s.name[w]>90&&s.name[w]<97)||(s.name[w]>122))
									{
									q=0;
									break;

				}
					}
					if(q==0)
								{
								printf("Wrong format for name entered...try again.\n");
								enter1();
							   }
	}
	void enter2()
			{
			   int  q=1,w;

				printf("enter the father name\n");

				gets(s.fname);

				for(w=0;w<strlen(s.fname);w++)
				{

						if((s.fname[w]<65)||(s.fname[w]>90&&s.fname[w]<97)||(s.fname[w]>122))
									{
									q=0;
									break;

				}
					}
					if(q==0)
								{
								printf("Wrong format for name entered...try again.\n");
								enter2();
							   }
	}
void enter3()
			{
			   int  q=1,w;

				printf("enter the gender of student \n");
								gets(s.gender);
				for(w=0;w<strlen(s.gender);w++)
				{
						if((s.gender[w]<65)||(s.gender[w]>90&&s.gender[w]<97)||(s.gender[w]>122))
									{
									q=0;
									break;

				}
					}
					if(q==0)
								{
								printf("Wrong format for gender entered...try again.\n");
								enter3();
							   }
	}
void enter4()
			{
			   int  q=1,w;

				printf("enter the blood group of student \n");

				gets(s.blood);
				for(w=0;w<strlen(s.blood);w++)
				{
						if((s.blood[w]!=43&&s.blood[w]!=45)&& (s.blood[w]<65)||(s.blood[w]>90&&s.blood[w]<97)||(s.blood[w]>122))
									{
									q=0;
									break;

				}
					}
					if(q==0)
								{
								printf("Wrong format for blood group entered...try again.\n");
								enter4();
							   }
	}
void enter5()
			{
			   int  q=1,w;

				printf("enter the rollno of student \n");
								gets(s.rollno);
				for(w=0;w<strlen(s.rollno);w++)
				{
						if(s.rollno[w]<48||s.rollno[w]>=58)
									{
									q=0;
									break;

				}
					}
					if(q==0)
								{
								printf("Wrong format for rollno entered...try again.\n");
								enter5();
							   }
	}
void enter6()
			{
			   int  q=1,w;

				printf("enter the course of student \n");

				gets(s.course);
				for(w=0;w<strlen(s.course);w++)
				{
						if((s.course[w]<65)||(s.course[w]>90&&s.course[w]<97)||(s.course[w]>122))
									{
									q=0;
									break;

				}
					}
					if(q==0)
								{
								printf("Wrong format for course entered...try again.\n");
								enter6();
							   }
	}
void enter7()
			{
			   int  q=1,w;

				printf("enter the branch of student \n");

				gets(s.branch);
				for(w=0;w<strlen(s.branch);w++)
				{
						if((s.branch[w]<65)||(s.branch[w]>90&&s.branch[w]<97)||(s.branch[w]>122))
									{
									q=0;
									break;

				}
					}
					if(q==0)
								{
								printf("Wrong format for branch entered...try again.\n");
								enter7();
							   }
	}
void enter8()
			{
			    int v2,y2,u2,f2;
			   int  q=1,w;

				printf("enter the eamil id of student \n");
								gets(s.email);


                v2=strlen(s.email);
                        for(y2=0;y2<v2;y2++)
	{
		if(s.email[y2]==64&&s.email[y2-1]>96&&s.email[y2-1]<122&&s.email[y2+1]>96&&s.email[y2+1]<122)
		{
			for(f2=y2+1;f2<v2;f2++)
			{
				if(s.email[f2]==46&&s.email[f2+1]>96&&s.email[f2+1]<122)
				{

					u2=0;
				}
			}}}
			if(u2!=0)
            {
			  printf("wrong formate entered...... try again\n");
            enter8();
            }


			}

int main()
{
	FILE*fp,*ft,*fd,*fp1,*fp2,*fp3;
	char del[30],studentname[20];
	int h,m;
	char nam[20],nam1[20],nam2[20],nam3[30],reason2[100],reason1[100],reason3[100],nam4[20];
	 int z=0,f,d,v=1,h1,h2,h3,h4,h5,h6,h7,h8;
	 	int dc=0,de=0,dm=0;
		int i=0,j=0,k=0,x=0,y=0;
    char a[20];
	char another='y',choice;

		char t[10];
     while(h!=9)
	 {
	     printf("                                            ENTER YOUR CHOICE                                      \n");
		 printf("                                              1.ADD DATA                                              \n");
		 printf("                                              2.DISPLAY                                               \n");
		 printf("                                              3.delete                                                 \n");
		 printf("                                              4.MODIFY                                                  \n");
		 printf("                                              5.PERFORMANCE                                                     \n");
		 printf("                                              6.LEAVE APPLICATION                                               \n");
		 printf("                                              7.ACTIVITY IN FORM OF TREE                                        \n");
		 printf("                                              8.MEDICAL RECORD                                                   \n");
		 printf("                                              9.EXIT                                                     \n");
		 		scanf("%d",&h);
		 		system("cls");
	  switch(h)
	  {
	      case 1:

		      	 printf("                                            ENTER YOUR CHOICE                                      \n");
		 printf("                                                     1.ADD list of student                                             \n");
		 printf("                                                     2.ADD tour detail                                              \n");
		 printf("                                                     3.add fee recipt                                                 \n");
		 printf("                                                     4.ADD AWARD AND ACTIVITY                                           \n");
		 printf("                                                     5.EXIT                                                             \n");
		 		scanf("%d",&h1);
		 		system("cls");
	       switch(h1)
		   {
			  case 1:
			  	fp=fopen("project1.txt","a");

				enter1();
				enter2();
				enter3();
				enter4();
				enter5();
				enter6();
				enter7();
			enter8();
				fwrite(&s,sizeof(s),1,fp);
				printf("data entered\n");
				fclose(fp);

				break;
				case 2:
				   	another='y';
    	            fd=fopen("tourdetail1.txt","a");
    	            fp=fopen("project1.txt","r");
	                   while(another=='y')
	                       {
		                  	printf("enter name for detail");
		   	                 fflush(stdin);
		                      	gets(studentname);
		                     while(fread(&s,sizeof(s),1,fp)==1)
	                       {
		                    if(strcmp(s.name,studentname)==0)
		                {
		                   	printf("enter where r u going");
		                	gets(e.place);
		   	                printf("enter money for hotelandcab");
		   	                scanf("%lf%lf",&e.hotel_charge,&e.cab_charge);
		   	                e.total_charge=e.cab_charge+e.hotel_charge;
		                     strcpy(e.name,s.name);
		                    strcpy(e.branch,s.branch);
		                    strcpy(e.gender,s.gender);
		                      strcpy(e.rollno,s.rollno);

		                      	fprintf(fd,"%15s %10s %10s %15s %15s %20lf %20lf %20lf \n",e.name,e.branch,e.gender,e.rollno,e.place,e.cab_charge,e.hotel_charge,e.total_charge);
		                 	fprintf(fd,"\n");
		            	break;
		                }
	                        }
	                         printf(" wants to add another student detail(y/n)");
	                         fflush(stdin);
	                        another=getche();
	                    }
	                      fclose(fd);
	                      fclose(fp);
	                      break;
	            case 3:
				  	another='y';
	  	   while(another=='y')
	  	   {
	       printf("enter name for  fee recipt");
	       fflush(stdin);
	       gets(studentname);
	       fp=fopen("project1.txt","r");

	          while(fread(&s,sizeof(s),1,fp)==1)
	    {
		 if(strcmp(s.name,studentname)==0)
         {
         	 strcpy(r.name,s.name);
	        strcpy(r.fname,s.fname);
	        strcpy(r.branch,s.branch);
	        strcpy(r.rollno,s.rollno);
         	 printf("*************************************************************************************\n");
         	 printf("STUDENT NAME=%s                                            ROLL NO=%s\n",r.name,r.rollno);
         	 printf("                                                                                       \n");
         	 printf("FATHER  NAME=%s                                         BRANCH=%s\n",r.fname,r.branch);
         	 printf("-------------------------------FOR A SEMESTAR-----------------------------------------\n");
         	 printf("collage fee                                                      40,000\n");
         	 printf("                                                                                       \n");
         	 printf("mess fee                                                         12000\n");
         	 printf("                                                                                       \n");
         	 printf("hostal fee                                                       6000\n");
         	 printf("                                                                                          \n");
         	 printf("-----------------------------------------------------------------------------------------\n");
         	 printf("total                                                             58000\n");
         	 printf("*******************************************************************************************\n");
         	 printf("your fee recipt print\n");
         	 v=0;
         }
        }
        if(v!=0)
        {
        	printf("enter right name\n ");
		}
			printf("enter to right name or also another fee print(y/n)\n");

		fflush(stdin);
		another=getche();

       }
	    fclose(fp);
	    break;
  case 4:
          fp2=fopen("award1.txt","a");
          fp=fopen("project1.txt","r");

         while(fread(&s,sizeof(s),1,fp)==1)
         {
              strcpy(e1.name,s.name);
          strcpy(e1.rollno,s.rollno);
          strcpy(e1.branch,s.branch);
          printf("enter award for student name = %s\n",e1.name);
          fflush(stdin);
          gets(e1.award);
          printf("enter activity for student name = %s\n",e1.name);
          fflush(stdin);
          gets(e1.activity);
          printf("enter fine for student name = %s\n",e1.name);
          fflush(stdin);
          gets(e1.fine);
         fwrite(&e1,sizeof(e1),1,fp2);
         }
         fclose(fp);
         fclose(fp2);
         break;

	}
	break;
	case 2:
		     	 printf("                                            ENTER YOUR CHOICE                                      \n");
		 printf("                                           1.DISPLAY LIST OF NAME SHORTED BY NAME                                          \n");
		 printf("                                           2.DISPLAY LIST OF NAME SHORTED BY ROLLNO                                            \n");
		 printf("                                           3.SEARCHING STUDENT BY NAME                                            \n");
		 printf("                                           4.SEARCHING STUDENT BY ROLL NO                                                     \n");
		 printf("                                           5.LIST OF STUDENT                                                                   \n");
		 printf("                                           6.NO OF GIRL AND BOYS IN EACH DEPARTMENT                                             \n");
		 printf("                                           7.AVG NO OF STUDENT IN EACH DEPARTMENT                                                \n");
		 printf("                                           8.DISPLAY TOUR DETAIL                                                                 \n");
		 printf("                                           9.no of student in each department                                                    \n");
		 printf("                                           10.DISPLAY AWRRD AND ACTIVITY                                                          \n");
		 printf("                                           11.DISPLAY COMPLAIN FORM                                                               \n");
		 printf("                                           12. EXIT                                                                                \n");
		 		scanf("%d",&h2);
		 		system("cls");
	       switch(h2)
		   {
        case 1:
                		fp=fopen("project1.txt","r");

                        z=0;
                    while(fread(&s,sizeof(s),1,fp)==1)


                   {
					 p[z]=s;
					  z++;
	               }
	            for(f=0;f<z;f++)
				{
					for(d=f+1;d<z;d++)
					{
					  if(strcmp(p[f].name,p[d].name)>0)
					  {
					     o=p[f];
						 p[f]=p[d];
						 p[d]=o;
						  }
					}
				   }
				   for(f=0;f<z;f++)
				   {
				   	printf("\n%15s%15s%5s%10s%10s%10s%10s%15s\n",p[f].name,p[f].fname,p[f].gender,p[f].blood,p[f].course,p[f].branch,p[f].email,p[f].rollno);
				   	printf("\n");
				   }
				      fclose(fp);
		    					   break;

		case 2:
		         	fp=fopen("project1.txt","r");

                      z=0;
                    while(fread(&s,sizeof(s),1,fp)==1)


                   {
					 p[z]=s;
					  z++;
	               }
	            for(f=0;f<z;f++)
				{
					for(d=f+1;d<z;d++)
					{
					  if(strcmp(p[f].rollno,p[d].rollno)>0)
					  {
					     o=p[f];
						 p[f]=p[d];
						 p[d]=o;
						  }
					}
				   }
				   for(f=0;f<z;f++)
				   {
				   	printf("\n%15s%15s%5s%10s%10s%10s%10s%15s\n",p[f].name,p[f].fname,p[f].gender,p[f].blood,p[f].course,p[f].branch,p[f].email,p[f].rollno);

				   }
				      fclose(fp);
		    	printf("----------------------------------------------------------------------------------------------------\n");
				printf("                                  ENTER THE CHOICE AGAIN                                            \n");
				printf("----------------------------------------------------------------------------------------------------\n");

                  break;
        case 3:
		     	printf("enter the name of student for searching record\n");
				fflush(stdin);
				gets(t);
				fp=fopen("project1.txt","r");
				while(fread(&s,sizeof(s),1,fp))
				{
					if(strcmp(s.name,t)==0)
					{
						printf("\n%10s %10s %5s %5s %10s %10s %15s %10s\n",s.name,s.fname,s.gender,s.blood,s.course,s.branch,s.email,s.rollno);
					}

				}
				fclose(fp);

				printf("----------------------------------------------------------------------------------------------------\n");
				printf("                             ENTER THE CHOICE AGAIN                                                 \n");
				printf("----------------------------------------------------------------------------------------------------\n");

				break;
	    case 4:
		        	printf("enter the roll no. of student for searching record");
				scanf("%s",t);
				fp=fopen("project1.txt","r");
				while(fread(&s,sizeof(s),1,fp))
				{
					if(strcmp(s.rollno,t)==0)
					{
						printf("\n%10s %10s %5s %5s %10s %10s %15s %10s\n",s.name,s.fname,s.gender,s.blood,s.course,s.branch,s.email,s.rollno);
					}
				}
				fclose(fp);

				printf("----------------------------------------------------------------------------------------------------\n");
				printf("                                ENTER THE CHOICE AGAIN                                              \n");
				printf("----------------------------------------------------------------------------------------------------\n");

				break;
		case 5:
		        	fp=fopen("project1.txt","r");
				while(fread(&s,sizeof(s),1,fp)==1)
			{
				printf("\n%15s %15s %5s %5s %10s %10s %25s %10s\n",s.name,s.fname,s.gender,s.blood,s.course,s.branch,s.email,s.rollno);
				printf("\n");
					    }
					    	fclose(fp);
				printf("----------------------------------------------------------------------------------------------------\n");
				printf("                                  ENTER THE CHOICE AGAIN                                            \n");
				printf("----------------------------------------------------------------------------------------------------\n");


		        break;
		case 6:

					fp=fopen("project1.txt","r");
                i=0;
                j=0;
                k=0;
                x=0;
                y=0;
                z=0;

				while(fread(&s,sizeof(s),1,fp)==1)
			{
				if(strcmp(s.gender,"male")==0)
				{
					if(strcmp(s.branch,"cse")==0)
					{
						i++;
				    }

					if(strcmp(s.branch,"ee")==0)
					{
						j++;
					}

					if(strcmp(s.branch,"me")==0)
					{
						k++;
					}

				}
				else{
					if(strcmp(s.branch,"cse")==0)
					{
						x++;
					}

					if(strcmp(s.branch,"ee")==0)
					{
						y++;
					}

					if(strcmp(s.branch,"me")==0)
					{
						z++;
					}

			}
			}
				printf("\nno.of boys in cse is: %d ",i);
				printf("\nno. of boys in ee is: %d",j);
				printf("\nno. of boys in me is: %d",k);
				printf("\nno.of girls in cse is: %d",x);
				printf("\nno. of girls in ee is: %d",y);
				printf("\nno. of girls in me is: %d\n",z);

				fclose(fp);
				printf("----------------------------------------------------------------------------------------------------\n");
				printf("                           ENTER THE CHOICE AGAIN                                                   \n");
				printf("----------------------------------------------------------------------------------------------------\n");
				break;
	    case 7:
		      	fp=fopen("project1.txt","r");
					while(fread(&s,sizeof(s),1,fp)==1)
				{
					if(strcmp(s.branch,"cse")==0)
					{
						dc++;
					}
					if(strcmp(s.branch,"ee")==0)
					{
						de++;
					}
					if(strcmp(s.branch,"me")==0)
					{
						dm++;
					}
			}

				avg=(float)(dc+de+dm)/3;
				printf("AVERAGE number of student in each department is: %f\n",avg);
				fclose(fp);
				break;
		case 8:
		        	fd=fopen("tourdetail1.txt","r");
    	printf("enter student name");

    	scanf("%s",studentname);

	     while(	fscanf(fd,"%s%s%s%s%s%lf%lf%lf",e.name,e.branch,e.gender,e.rollno,e.place,&e.cab_charge,&e.hotel_charge,&e.total_charge)!=EOF)
		 {

		 	if(strcmp(e.name,studentname)==0)
		 	{
		 		printf("**************************************************************************************************\n");
		 		printf("name=%s                                                                  branch=%s\n",e.name,e.branch);
		 		printf("---------------------------------------------------------------------------------------------------\n");
				printf("rollno=%s                                                               gendar=%s\n",e.rollno,e.gender);
				printf("---------------------------------------------------------------------------------------------------\n");
				printf("place                                                                         =%s\n",e.place);
				printf("****************************************************************************************************\n");
				printf("cab charge                                                                    =%lf\n",e.cab_charge);
				printf("hotel charge                                                                  =%lf\n",e.hotel_charge);
				printf("total charge                                                                  =%lf\n",e.total_charge);
				printf("***************************************************************************************************  \n");


		    }
		 }
		 fclose(fd);

		   	printf("----------------------------------------------------------------------------------------------------\n");
				printf("                                  ENTER THE CHOICE AGAIN                                            \n");
				printf("----------------------------------------------------------------------------------------------------\n");
              break;
        case 9:
		     	fp=fopen("project1.txt","r");
                dc=0;
                de=0;
                dm=0;

				while(fread(&s,sizeof(s),1,fp)==1)
				{
					if(strcmp(s.branch,"cse")==0)
					{
						dc++;
					}
					if(strcmp(s.branch,"ee")==0)
					{
						de++;
					}
					if(strcmp(s.branch,"me")==0)
					{
						dm++;
					}
			}


				printf("\nnumbers of student in computer science is: %d\n",dc);
				printf("numbers of student in electrical engineering is: %d\n",de);
				printf("numbers of student in mechanical engineering is: %d\n",dm);
				fclose(fp);
				break;
		case 10:
             fp2=fopen("award1.txt","r");
             while(fread(&e1,sizeof(e1),1,fp2)==1)
             {
                 printf("%20s%20s%10s%10s%10s%10s\n",e1.name,e1.rollno,e1.branch,e1.award,e1.fine,e1.activity);
             }
             fclose(fp2);
             break;
        case 11:
            fp=fopen("project1.txt","r");
            printf("ENTER STUDENT NAME\n");
            fflush(stdin);
            gets(nam3);

            while(fread(&s,sizeof(s),1,fp)==1)
            {
                if(strcmp(s.name,nam3)==0)
                {
                    printf("enter your coplain\n");
                    fflush(stdin);
                    gets(reason3);
                  printf("***********************************************************************\n");
                        printf("name=%s                         rollno=%s\n",s.name,s.rollno);
                        printf("                                                           \n");
                        printf("branch=%s                       cource=%s\n",s.branch,s.course);
                        printf("----------------------------------------------------------------------\n");
                        printf("COMPLAIN                                                         \n");
                        puts(reason3);
                        printf("***********************************************************************\n");

                }
            }
            fclose(fp);
            break;
	}
	break;
	case 3:
		printf("                                        ENTER YOUR CHOICE                                      \n");
		printf("                                      1.delete a list of record                                 \n");
		printf("                                      2.delete tour detail for a student                          \n");
		printf("                                      3.exit                                                      \n");
		scanf("%d",&h3);
		system("cls");
	switch(h3)
	{

	case 1:
	    	printf("enter the rollno to delete the record");
				scanf("%s",del);
				fp=fopen("project1.txt","r+");
				ft=fopen("temp1.txt","a+");
				while(fread(&s,sizeof(s),1,fp))

				{
					if(strcmp(s.rollno,del)==0)
					{

					}
					else
					{
						fwrite(&s,sizeof(s),1,ft);
					}
					}

					fclose(fp);
					fclose(ft);
					remove("project1.txt");
					rename("temp1.txt","project1.txt");
					printf("\ndata of the given roll no. is deleted\n");
					break;
	case 2:
	         printf("enter name for delete");
				 scanf("%s",nam);
				 fd=fopen("tourdetail1.txt","r+");
				  ft=fopen("temp1.txt","a+");
					while(fread(&e,sizeof(e),1,fd))

				{
					if(strcmp(e.name,nam)==0)
					{

					}
					else
					{
							fprintf(ft,"%15s%10s%10s%15s%15s%20lf%20lf%20lf\n",e.name,e.branch,e.gender,e.rollno,e.place,e.cab_charge,e.hotel_charge,e.total_charge);
					}
					}

					fclose(fd);
					fclose(ft);
					remove("tourdetail1.txt");
					rename("temp1.txt","tourdetail1.txt");
					printf("\ndata of the given name. is deleted\n");
					break;
    }
         break;
    case 4:
		printf("Enter the roll no. for modification\n");
				scanf("%s",t);
				fp=fopen("project1.txt","r+");
				rewind(fp);
				while(!feof(fp))
			{
				fread(&s,sizeof(s),1,fp);
			if(strcmp(s.rollno,t)==0)
				{
				enter1();
				enter2();
				enter3();
				enter4();
				enter5();
				enter6();
				enter7();

					fseek(fp,-sizeof(s),SEEK_CUR);
				fwrite(&s,sizeof(s),1,fp);
					printf("\ndata of the given roll no. is modified\n");
				break;
			}

			}
		fclose(fp);
		break;
    case 5:
            printf("                        ENTER YOUR CHOICE                                     \n");
            printf("                       1.ADD PERFORMANCE REPORT                                \n");
            printf("                       2.SHORT BY PERFORMANCE                                   \n");
            printf("                       3.exit                                                   \n");
            scanf("%d",&h4);
            system("cls");
            while(h4!=3)
            {
                switch(h4)
                {
                case 1:
                    printf("               ENTER YOUR CHOICE                                  \n");
                    printf("           1.PERFORMANCE IN 1ST SEMESTER                           \n");
                    printf("           2.PERFORMANCE IN 2ND SEMESTER                           \n");
                    printf("           3.PERFORMANCE IN 3RD SEMESTER                           \n");
                    printf("           4.PERFORMANCE IN 4TH SEMESTER                           \n");
                    printf("           5.PERFORMANCE IN 5TH SEMESTER                           \n");
                    printf("           6.PERFORMANCE IN 6TH SEMESTER                           \n");
                    printf("           7.PERFORMANCE IN 7TH SEMESTER                           \n");
                    printf("           8.PERFORMANCE IN 8TH SEMESTER                           \n");
                    printf("           9.PERFORMANCE IN 9TH SEMESTER                           \n");
                    printf("           10.PERFORMANCE IN 10TH SEMESTER                           \n");
                    printf("           11.PERFORMANCE IN 11TH SEMESTER                           \n");
                    printf("           12.EXIT                                                  \n");
                    scanf("%d",&h5);
                    system("cls");
                        switch(h5)
                        {
                case 1:
                            fr=fopen("perform1.txt","a");
						fp=fopen("project1.txt","r");

						while(fread(&s,sizeof(s),1,fp)==1)
						{
						strcpy(n.sem,"1st");
						scan_performance();
						fwrite(&n,sizeof(n),1,fr);
						}
						fclose(fp);
						fclose(fr);
						break;
				case 2:

                    fr=fopen("perform1.txt","a");
						fp=fopen("project1.txt","r");

						while(fread(&s,sizeof(s),1,fp)==1)
						{
						strcpy(n.sem,"2nd");
						scan_performance();
						fwrite(&n,sizeof(n),1,fr);
						}
						fclose(fp);
						fclose(fr);
						break;
				case 3:
                    fr=fopen("perform1.txt","a");
						fp=fopen("project1.txt","r");

						while(fread(&s,sizeof(s),1,fp)==1)
						{
						strcpy(n.sem,"3rd");
						scan_performance();
						fwrite(&n,sizeof(n),1,fr);
						}
						fclose(fp);
						fclose(fr);
						break;
				case 4:
                    fr=fopen("perform1.txt","a");
						fp=fopen("project1.txt","r");

						while(fread(&s,sizeof(s),1,fp)==1)
						{
						strcpy(n.sem,"4th");
						scan_performance();
						fwrite(&n,sizeof(n),1,fr);
						}
						fclose(fp);
						fclose(fr);
						break;
				case 5:
                    fr=fopen("perform1.txt","a");
						fp=fopen("project1.txt","r");

						while(fread(&s,sizeof(s),1,fp)==1)
						{
						strcpy(n.sem,"5th");
						scan_performance();
						fwrite(&n,sizeof(n),1,fr);
						}
						fclose(fp);
						fclose(fr);
						break;
				case 6:
                    fr=fopen("perform1.txt","a");
						fp=fopen("project1.txt","r");

						while(fread(&s,sizeof(s),1,fp)==1)
						{
						strcpy(n.sem,"7th");
						scan_performance();
						fwrite(&n,sizeof(n),1,fr);
						}
						fclose(fp);
						fclose(fr);
						break;
				case 7:
                    fr=fopen("perform1.txt","a");
						fp=fopen("project1.txt","r");

						while(fread(&s,sizeof(s),1,fp)==1)
						{
						strcpy(n.sem,"8th");
						scan_performance();
						fwrite(&n,sizeof(n),1,fr);
						}
						fclose(fp);
						fclose(fr);
						break;
				case 8:
                    fr=fopen("perform1.txt","a");
						fp=fopen("project1.txt","r");

						while(fread(&s,sizeof(s),1,fp)==1)
						{
						strcpy(n.sem,"9th");
						scan_performance();
						fwrite(&n,sizeof(n),1,fr);
						}
						fclose(fp);
						fclose(fr);
						break;
				case 9:
                    fr=fopen("perform1.txt","a");
						fp=fopen("project1.txt","r");

						while(fread(&s,sizeof(s),1,fp)==1)
						{
						strcpy(n.sem,"10th");
						scan_performance();
						fwrite(&n,sizeof(n),1,fr);
						}
						fclose(fp);
						fclose(fr);
						break;
				case 10:
                    fr=fopen("perform1.txt","a");
						fp=fopen("project1.txt","r");

						while(fread(&s,sizeof(s),1,fp)==1)
						{
						strcpy(n.sem,"10th");
						scan_performance();
						fwrite(&n,sizeof(n),1,fr);
						}
						fclose(fp);
						fclose(fr);
						break;
				case 11:
                    fr=fopen("perform1.txt","a");
						fp=fopen("project1.txt","r");

						while(fread(&s,sizeof(s),1,fp)==1)
						{
						strcpy(n.sem,"5year");
						scan_performance();
						fwrite(&n,sizeof(n),1,fr);
						}
						fclose(fp);
						fclose(fr);
						break;

                        }

                    break;
                case 2:
                     printf("               ENTER YOUR CHOICE                                  \n");
                    printf("           1.SHORT BY 1ST SEMESTER                           \n");
                    printf("           2.SHORT BY 2ND SEMESTER                           \n");
                    printf("           3.SHORT BY 3RD SEMESTER                           \n");
                    printf("           4.SHORT BY 4TH SEMESTER                           \n");
                    printf("           5.SHORT BY 5TH SEMESTER                           \n");
                    printf("           6.SHORT BY 6TH SEMESTER                           \n");
                    printf("           7.SHORT BY 7TH SEMESTER                           \n");
                    printf("           8.SHORT BY 8TH SEMESTER                           \n");
                    printf("           9.SHORT BY 9TH SEMESTER                           \n");
                    printf("           10.SHORT BY 10TH SEMESTER                           \n");
                    printf("           11.SHORT BY 5year                                  \n");
                    printf("           12.EXIT                                                  \n");
                    scanf("%d",&h6);
                    system("cls");
                  switch(h6)
                  {
                  case 1:

						fr1=fopen("tempp.txt","w");
						fr=fopen("perform1.txt","r");
						while(fread(&n,sizeof(n),1,fr)==1)
						{
							if(strcmp(n.sem,"1st")==0)
							{
								fwrite(&n,sizeof(n),1,fr1);
							}
							}
						fclose(fr);
						fclose(fr1);
						sort_performance();

						break;
                  case 2:
						fr1=fopen("tempp.txt","w");
						fr=fopen("perform1.txt","r");
						while(fread(&n,sizeof(n),1,fr)==1)
						{
							if(strcmp(n.sem,"2nd")==0)
							{
								fwrite(&n,sizeof(n),1,fr1);
							}
							}
						fclose(fr);
						fclose(fr1);
						sort_performance();
						break;

						case 3:
						fr1=fopen("tempp.txt","w");
						fr=fopen("perform1.txt","r");
						while(fread(&n,sizeof(n),1,fr)==1)
						{
							if(strcmp(n.sem,"3rd")==0)
							{
								fwrite(&n,sizeof(n),1,fr1);
							}
							}
						fclose(fr);
						fclose(fr1);
						sort_performance();
						break;

						case 4:
						fr1=fopen("tempp.txt","w");
						fr=fopen("perform1.txt","r");
						while(fread(&n,sizeof(n),1,fr)==1)
						{
							if(strcmp(n.sem,"4th")==0)
							{
								fwrite(&n,sizeof(n),1,fr1);
							}
							}
						fclose(fr);
						fclose(fr1);
						sort_performance();
						break;

							case 5:
						fr1=fopen("tempp.txt","w");
						fr=fopen("perform1.txt","r");
						while(fread(&n,sizeof(n),1,fr)==1)
						{
							if(strcmp(n.sem,"5th")==0)
							{
								fwrite(&n,sizeof(n),1,fr1);
							}
							}
						fclose(fr);
						fclose(fr1);
						sort_performance();
						break;

							case 6:
						fr1=fopen("tempp.txt","w");
						fr=fopen("perform1.txt","r");
						while(fread(&n,sizeof(n),1,fr)==1)
						{
							if(strcmp(n.sem,"6th")==0)
							{
								fwrite(&n,sizeof(n),1,fr1);
							}
							}
						fclose(fr);
						fclose(fr1);
						sort_performance();
						break;

							case 7:
						fr1=fopen("tempp.txt","w");
						fr=fopen("perform1.txt","r");
						while(fread(&n,sizeof(n),1,fr)==1)
						{
							if(strcmp(n.sem,"7th")==0)
							{
								fwrite(&n,sizeof(n),1,fr1);
							}
							}
						fclose(fr);
						fclose(fr1);
						sort_performance();
						break;

							case 8:
						fr1=fopen("tempp.txt","w");
						fr=fopen("perform1.txt","r");
						while(fread(&n,sizeof(n),1,fr)==1)
						{
							if(strcmp(n.sem,"8th")==0)
							{
								fwrite(&n,sizeof(n),1,fr1);
							}
							}
						fclose(fr);
						fclose(fr1);
						sort_performance();
						break;

							case 9:
						fr1=fopen("tempp.txt","w");
						fr=fopen("perform1.txt","r");
						while(fread(&n,sizeof(n),1,fr)==1)
						{
							if(strcmp(n.sem,"9th")==0)
							{
								fwrite(&n,sizeof(n),1,fr1);
							}
							}
						fclose(fr);
						fclose(fr1);
						sort_performance();
						break;

							case 10:
						fr1=fopen("tempp.txt","w");
						fr=fopen("perform1.txt","r");
						while(fread(&n,sizeof(n),1,fr)==1)
						{
							if(strcmp(n.sem,"10th")==0)
							{
								fwrite(&n,sizeof(n),1,fr1);
							}
							}
						fclose(fr);
						fclose(fr1);
						sort_performance();
						break;

							case 11:
						fr1=fopen("tempp.txt","w");
						fr=fopen("perform1.txt","r");
						while(fread(&n,sizeof(n),1,fr)==1)
						{
							if(strcmp(n.sem,"5year")==0)
							{
								fwrite(&n,sizeof(n),1,fr1);
							}
							}
						fclose(fr);
						fclose(fr1);
						sort_performance();
						break;
				}
				break;
                }
                }
                break;
        case 6:
                printf("               ENTER YOUR CHOICE                     \n");
                printf("                1.CAUSAL LEAVE                        \n");
                printf("                2.MEDICAL LEAVE                        \n");
                scanf("%d",&h7);
                system("cls");
                switch(h7)
                {
                case 1:
                   fp=fopen("project1.txt","r");
                    printf("enter name who wants to leave\n");
                    fflush(stdin);
                    gets(nam1);
                    while(fread(&s,sizeof(s),1,fp)==1)
                    {
                     if(strcmp(s.name,nam1)==0)
                     {
                          printf("enter the reason\n");
                          fflush(stdin);
                        gets(reason1);
                        printf("****************************************************************\n");
                        printf("name=%s                         rollno=%s\n",s.name,s.rollno);
                        printf("                                                           \n");
                        printf("branch=%s                       cource=%s\n",s.branch,s.course);
                        printf("-------------------------------------------------------------\n");
                        printf("reason                                                         \n");
                        puts(reason1);
                        printf("*****************************************************************\n");
                        printf("LEAVE GRANTED");

                     }

                    }
                    fclose(fp);
                    break;
                case 2:
                    fp=fopen("project1.txt","r");
                    printf("enter name who wants to leave\n");
                    fflush(stdin);
                    gets(nam2);
                    while(fread(&s,sizeof(s),1,fp)==1)
                    {
                     if(strcmp(s.name,nam2)==0)
                     {
                          printf("enter the reason\n");
                          fflush(stdin);
                        gets(reason2);
                        printf("***********************************************************************\n");
                        printf("name=%s                         rollno=%s\n",s.name,s.rollno);
                        printf("                                                           \n");
                        printf("branch=%s                       cource=%s\n",s.branch,s.course);
                        printf("----------------------------------------------------------------------\n");
                        printf("reason                                                         \n");
                        puts(reason2);
                        printf("***********************************************************************\n");
                         printf("LEAVE GRANTED");
                     }

                    }
                    fclose(fp);
                    break;
                }
                break;
                case 7:
                    fp2=fopen("award1.txt","r");
                                  printf("                                      GYMKHANA HEAD                      \n");
                    while(fread(&e1,sizeof(e1),1,fp2)==1)
                    {
                        if(strcmpi(e1.activity,"gymkhana head")==0)
                        {
                            printf("                                          %s                                        \n",e1.name);
                        }
                    }
                    printf("           /                  /                                  |                  |    \n");
                    printf("          /                  /                                    |                  |    \n");
                    printf("         /                  /                                      |                  |    \n");
                    printf("        /                  /                                        |                  |    \n");
                    printf("       /                  /                                          |                  |    \n");
                    printf("      /                  /                                            |                  |    \n");
                   printf(" CULTURAL SECRETARY    ACADEMIC SECRETARY                       MESS SECRTERY        SPORTS SECRETRY       \n");
                rewind(fp2);
            while(fread(&e1,sizeof(e1),1,fp2)==1)
                    {
                        if(strcmpi(e1.activity,"cultural secretary")==0)
                        {
                    printf("%s",e1.name);
                        }
                    }
                    rewind(fp2);
                while(fread(&e1,sizeof(e1),1,fp2)==1)
                    {
                        if(strcmpi(e1.activity,"academic secretary")==0)
                        {
                    printf("                         %s",e1.name);
                        }
                    }
                    rewind(fp2);
                      while(fread(&e1,sizeof(e1),1,fp2)==1)
                    {
                        if(strcmpi(e1.activity,"mess secretary")==0)
                        {
                    printf("                             %s",e1.name);
                        }
                    }
                    rewind(fp2);
                      while(fread(&e1,sizeof(e1),1,fp2)==1)
                    {
                        if(strcmpi(e1.activity,"sports secretary")==0)
                        {
                    printf("                    %s\n",e1.name);
                        }
                    }
                    fclose(fp2);
                    break;
                case 8:
                    printf("                             ENTER YOUR  CHOICE                                 \n");
                    printf("                         1.ADD MEDICAL DETAILS                                 \n");
                    printf("                         2.DISPLAY MEDICAL RECORD                               \n");
                    scanf("%d",&h8);
                    system("cls");
                    switch(h8)
                    {
                case 1:
                    fp3=fopen("medical.txt","w");
                    fp=fopen("project1.txt","r");
                    while(fread(&s,sizeof(s),1,fp)==1)
                    {
                        printf("enter the madical record of student name     %s\n",s.name);
                        printf("record for chickenpox\n");
                        fflush(stdin);
                        gets(m1.chickenpox);
                        printf("record for typhoid\n");
                        fflush(stdin);
                        gets(m1.typhoid);
                        printf("record for hepetitis\n");
                        fflush(stdin);
                        gets(m1.heptitis);
                        printf("record for other\n");
                        fflush(stdin);
                        gets(m1.other);
                        strcpy(m1.name,s.name);
                        strcpy(m1.rollno,s.rollno);
                        strcpy(m1.branch,s.branch);
                        strcpy(m1.gender,s.gender);
                    fwrite(&m1,sizeof(m1),1,fp3);
                    }
                  fclose(fp3);
                      fclose(fp);
                    break;
                case 2:
                    printf("enter name for display medical record\n");
                    fflush(stdin);
                    gets(nam4);
                    fp3=fopen("medical.txt","r");
              while(fread(&m1,sizeof(m1),1,fp3)==1)
              {
                  if(strcmp(m1.name,nam4)==0)
                  {
                  printf("*************************************************************************\n");
                  printf("NAME=%s                                 BRANCH=%s\n",m1.name,m1.branch);
                  printf("                                                                       \n");
                  printf("ROLL NO=%s                         gender=%s\n",m1.rollno,m1.gender);
                  printf("---------------------------------------------------------------------------\n");
                  printf("CHIKENPOX                                       %s\n",m1.chickenpox);
                  printf("TYPHOID                                         %s\n",m1.typhoid);
                  printf("HEPETITISE A                                    %s\n",m1.heptitis);
                  printf("OTHER                                           %s\n",m1.other);
                  printf("***************************************************************************\n");
              }
            }
            fclose(fp3);
            break;
	}
	  }
	 }
return 0;
}
void scan_performance()
{

							printf("enter the performance of the name = %s and rollno = %s of students.\n",s.name,s.rollno);
							scanf("%s",n.perform);
							strcpy(n.name,s.name);
							strcpy(n.rollno,s.rollno);
							strcpy(n.branch,s.branch);
							strcpy(n.fname,s.fname);
							strcpy(n.gender,s.gender);
}
