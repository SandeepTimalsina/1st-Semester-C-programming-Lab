/*10.	If the marks obtained by a student in five different subjects are input through the keyboard,
 find out the aggregate marks and percentage marks obtained by the student.
 Assume that the maximum marks obtained by a student in each subject are 100.*/
 #include<stdio.h>
 int main()
 {
 	int sub1,sub2,sub3,sub4,sub5,amark;
 	float per;
 	printf("Enter the mark obtained in each subjects =\n");
 	scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
 	amark=(sub1+sub2+sub3+sub4+sub5);
 	per=((float)amark/500)*100;
 	printf("The aggregate marks obtain is %d and percentage is %fpercentage.",amark,per);
 	return 0;
 }
