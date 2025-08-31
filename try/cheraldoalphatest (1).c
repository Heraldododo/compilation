#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <string.h>
#include<ctype.h>

void base();
        
void prelim();
/*CONTENT OF PRELIM()*/
    void act1P();
  	  void act1a1();
	    void act1a2();
	    void act1a3();
    void act2P(); 
    void act3Pto5P();
	    void qv1();
	    void qv2();
	    void qv3();
   void delayings(const char *text, int speed);
    void returnmain();
    void loadings();
/*END*/

void midterm();
/*CONTENT OF MIDTERM()*/
    void act1M();
    void act2M();
    void act3M();
    	void a();
    	void b();
    		void bA(int start, int end, int upto, char op);
    		void bB(int start, int upto, char op);
    void act4M();
    void act5M();
/*END*/

void finals();

void clear(){
    system("clear");
}




int main(){
    base();
    
    //prelim();
    return 0;
}




void base(){
		char ch;
		    printf("\n\n\t------------------------------------");
		    printf("\n\n\t\tGerald - BSIT 11005");
		    printf("\n\t\tComputer Programming");
		    printf("\n\t\tCompilation\n\n");
		    
		    printf("\n\t\ta.) Prelim");
		    printf("\n\t\tb.) Midterm");
		    printf("\n\t\tc.) Finals");
		    printf("\n\t\tx.) Exit");
		    printf("\n\n\t\tI choose : ");
		    scanf(" %c", &ch);
	    
	    switch (toupper(ch)){
	    	case 'A':
	    	prelim();
	    	clear();
	    	base();
	    	break;
	    	case 'B':
	    	midterm();
	    	clear();
	    	base();
	    	break;
	    	case 'C':
	    	finals();
	    	clear();
	    	base();
	    	break;	
	    	default:
	    	break;
	    	
	    	}    
		}

void finals(){
	printf("\n\t\tstatus: TBC\n");
	printf("\n\n\tGoing back to base");
       	         printf("\n\tPress any key to continue: ");
   	    	   getchar();
	     	     getchar();
	}



void midterm(){
	char ch;
	    	clear();
		    printf("\n\n\t------------------------------------");
		    printf("\n\n\t\t       MIDTERM");
		    printf("\n\t\tActivities & Project");
		    printf("\n\t\t    Compilation\n");
		    printf("\n\t\tstatus: ONGOING\n");
		    
		    printf("\n\t\ta.) Activity # 1");
		    printf("\n\t\tb.) Activity # 2");
		    printf("\n\t\tc.) Activity # 3");
		    printf("\n\t\td.) Activity # 4");
		    printf("\n\t\te.) Activity # 5");
		    printf("\n\t\tx.) Exit");
		    printf("\n\n\t\tI choose : ");
		    scanf(" %c", &ch);
	    
	    switch (toupper(ch)){
	    	case 'A':
	    		printf("\n\tProceed to Activity # 1?");
   	             printf("\n\tPress any key to continue: ");
  	 	       getchar();
	     	     getchar();
	     	     clear();
	    		act1M();
	    		printf("\n\tGoing back to midterm");
       	         printf("\n\tPress any key to continue: ");
   	    	   getchar();
	     	     getchar();
	    		clear();
	    		midterm();
	    			break;
	    		case 'B':
	    		printf("\n\tProceed to Activity # 2?");
   	             printf("\n\tPress any key to continue: ");
  	 	       getchar();
	     	     getchar();
	     	     clear();
	    		act2M();
	    		printf("\n\n\tGoing back to midterm");
       	         printf("\n\tPress any key to continue: ");
   	    	   getchar();
	     	     getchar();
	    		clear();
	    		midterm();
	    			break;
	    		case 'C':
	    		printf("\n\tProceed to Activity # 3?");
   	             printf("\n\tPress any key to continue: ");
  	 	       getchar();
	     	     getchar();
	     	     clear();
	    		act3M();
	    		printf("\n\n\tGoing back to midterm");
       	         printf("\n\tPress any key to continue: ");
   	    	   getchar();
	     	     getchar();
	    		clear();
	    		midterm();
	    			break;
	    		case 'D':
	    		printf("\n\tProceed to Activity # 4?");
   	             printf("\n\tPress any key to continue: ");
  	 	       getchar();
	     	     getchar();
	     	     clear();
	    		act4M();
	    		printf("\n\n\tGoing back to midterm");
       	         printf("\n\tPress any key to continue: ");
   	    	   getchar();
	     	     getchar();
	    		clear();
	    		midterm();
	    			break;
	    		case 'E':
	    		printf("\n\tProceed to Activity # 5?");
   	             printf("\n\tPress any key to continue: ");
  	 	       getchar();
	     	     getchar();
	     	     clear();
	    		act5M();
	    		printf("\n\n\tGoing back to midterm");
       	         printf("\n\tPress any key to continue: ");
   	    	   getchar();
	     	     getchar();
	    		clear();
	    		midterm();
	    			break;
	    		case 'X':
	    		printf("\n\n\tGoing back to base");
       	         printf("\n\tPress any key to continue: ");
   	    	   getchar();
	     	     getchar();
	     	     clear();
	     	     base();
	
	
	}
}

void act4M(){
	
	printf("\n\tnot availabe");
	
	
	}
void act5M(){
	
	printf("\n\tnot availabe");
	
	}


void act1M(){
	printf("\n\tMidterm");
	printf("\n\tActivity # 1\n\n");
	
	for(int sec=1107; sec<=1118; sec++){
		
		printf("\tBSIT %d\n", sec);
		
		}	
}

void act2M(){
      printf("\n\tMidterm");
      printf("\n\tActivity # 2\n\n");
      printf("\n\tODD\tEVEN\n\n");
      
      
      for(int odev=1101; odev<=1117; odev+=2 ){
      
      	printf("\n\tBSIT %d\tBSIT %d", odev, odev+1 );
	}}

void act3M(){
	
	//int at;
      //char sym;
      char ch;
    
      printf("\n\tAmazing Multiplication Table :)\n\n");
    
      printf("\n\ta.) original(10x10, +,-,*,%%)");
      printf("\n\tb.) custom made ;)");
     
       printf("\n\tx.) back");
       
      printf("\n\n\tI choose: ");
      scanf(" %c", &ch);
      printf("\n\n");
      switch(toupper(ch)){
          case 'A':
    	     clear();	   	    
        	 a();
        break;
        case 'B':
   	     clear();
    	    b();
        break;
        case 'X':
        	clear();
        	printf("\n\n\tGoing back to midterm");
       	         printf("\n\tPress any key to continue: ");
   	    	   getchar();
	     	     getchar();
        	midterm();
        default:
        
        break;
    } 
    printf("\n\n\n");	
}



void a(){
    clear();
        for(int i=1; i<=10; i++){
            for(int j=1; j<=10; j++){
                printf("%d x %d = %d\t", j,i , j*i);
            }
            printf("\n");
        }
}



void b(){

    int start;
    int end;
    int upto;
    char op;
    
    char ch;
    
        clear();
        printf("\n\tcustom made ;)\n");
        printf("\n\n\tstart number?: ");
        scanf("%d", &start);
        clear();
        printf("\n\t(ok, so %d to x table)\n", start);
        printf("\n\n\ta.) start from to ?"
               "? (%d - ?)", start);
        printf("\n\tb.) one number table?");
        printf("\n\n\tI choose: ");
        scanf(" %c", &ch);
        
        
        switch(toupper(ch)){
            case 'A':
                bA(start, end, upto, op); 
                break;
            case 'B':
                bB(start, upto, op); 
                break;    
        }
}


void bA(int start, int end, int upto, char op){
clear();
    printf("\n\n\tstart from %d to ", start);
    //printf("\n\n\t%d to ", start);
    scanf("%d", &end);
    printf("\n\thanggang ilan?:\t");
    scanf("%d", &upto);
    printf("\n\twhat operator?:\t");
    scanf(" %c", &op);
    printf("\n");
    clear();
    printf("\n\tmultiplication table of %d to %d\n", start, end);
    printf("\n\toperator used : %c\n\n", op);
    
                
    for(int i = 1; i<=upto; i++){
        for(int j = start; j<=end; j++){
            int ex;
            switch(op){
                case '+':
                    ex = j + i;
                    break;
                case '-':
                    ex = j - i;
                    break;    
                case 'x':
                    ex = j * i;
                    break;
                case '/':
                    if(ex == 0){
                        ex = 0;
                        }else{
                            ex = j / i;
                            }
                    break;        
                default:
                    ex = 0;
                    break;
        }
            printf("%d %c %d = %d\t", j, op, i, ex);
                }
                printf("\n");
                }
    /*while(i <= hanggang){
    int j = num;
    while(j <= to){
        printf("%d x %d = %d\t", to, hanggang, to*hanggang);
            j++;
            }
            printf("\n");
            i++;
            }
            */             
}


void bB(int start, int upto, char op){
    
    printf("\n\thanggang ilan?:\t");
    scanf("%d", &upto);
    printf("\n\t(+, -, x, /)");
    printf("\n\twhat operator?:\t");
    scanf(" %c", &op);
    printf("\n");
    
    int ex;
    
    clear();
    printf("\n\tmultiplication table of %d\n", start);
    printf("\n\toperator used : %c\n\n", op);
    for(int i = 1; i<=upto; i++){
        int ex;
        switch(op){
        case '+':
            ex = start + i;
            break;
        case '-':
            ex = start - i;
            break;    
        case 'x':
            ex = start * i;
            break;
        case '/':
            if(ex == 0){
                ex = 0;
                }else{
                    ex = start / i;
                    }
            ex = start / i;
            break;        
        default:
            ex = 0;
            break;
        }
        printf("%d %c %d = %d", start, op , i, ex);
        printf("\n");
        }
        

}







void prelim(){
	     
	     char ch;
	    	clear();
		    printf("\n\n\t------------------------------------");
		    printf("\n\n\t\t       PRELIM");
		    printf("\n\t\tActivities & Project");
		    printf("\n\t\t    Compilation\n");
		    printf("\n\t\tstatus: DONE\n");
		    
		    printf("\n\t\ta.) Activity # 1");
		    printf("\n\t\tb.) Activity # 2");
		    printf("\n\t\tc.) Activity # 3-5");
		    printf("\n\t\tx.) Exit");
		    printf("\n\n\t\tI choose : ");
		    scanf(" %c", &ch);
	    
	    switch (toupper(ch)){
	    	case 'A':
	    		printf("\n\tProceed to Activity # 1?");
   	             printf("\n\tPress any key to continue: ");
  	 	       getchar();
	     	     getchar();
	     	     clear();
	    		act1P();
	    		printf("\n\tGoing back to prelim");
       	         printf("\n\tPress any key to continue: ");
   	    	   getchar();
	     	     getchar();
	    		clear();
	    		prelim();
	    		break;
	    	case 'B':
		    	printf("\n\tProceed to Activity # 2?");
   	             printf("\n\tPress any key to continue: ");
  	 	       getchar();
	     	     getchar();
	     	     clear();
		          act2P();
		          printf("\n\tGoing back to prelim");
       	         printf("\n\tPress any key to continue: ");
   	    	   getchar();
	     	     getchar();
	     	     clear();
		          prelim();
	    		break;
	    	case 'C':
	    	      printf("\n\tProceed to Activity # 3-5?");
   	             printf("\n\tPress any key to continue: ");
   	    	   getchar();
	     	     getchar();
	    		clear();
	    		act3Pto5P();
	    		printf("\n\tGoing back to prelim");
       	         printf("\n\tPress any key to continue: ");
   	    	   getchar();
	     	     getchar();
	     	     clear();
	     	     prelim();
	   	 	break;	
	    	case 'X':
	    		printf("\n\tGoing back to base");
       	         printf("\n\tPress any key to continue: ");
   	    	   getchar();
	     	     getchar();
	     	     clear();
	     	     base();
	     	     
	    	default:
	 	   	break;
	    	
	    	}    
		}
	

void act1P(){

char pili;
    
    while(1){
    
	    printf("\n\n\t\tSELECT WHICH ACTIVITY:\n\n\t\t");
	    printf("a.) Activity # 1\n");
	    printf("\t\tb.) Activity # 2\n");
	    printf("\t\tc.) Activity # 3\n");
	    printf("\t\td.) no ty (exit)");
	    printf("\n\n\t\tans:\t");
	    scanf(" %c", &pili);
    
    if(pili == 'd'){
	     printf("\n\t\t----------------------\n");
	     printf("\n\t\t\tPAALAM!\t\n\n");
	     printf("\t\t----------------------\n");
	     break;
    }
    
    switch(pili){
    
     case 'a': 
      act1a1();
     break;
     case 'b':
      act1a2();
     break;
     case 'c':
      act1a3();
     break;
    default: 
     printf("\n\t\t----------------------\n");
     printf("\n\t\terror error error\n\n");
     printf("\t\t----------------------\n");
      }
    }
}

void act1a1(){
 //Activity #1
    
    
    int ent = 512;
    char car = 'G';
    char user[30] = "gerald";
    float flot = 3.14123;
    double dobol = 10.20304050;
    
    printf("\n\n\t\tACTIVITY #1\t\t");
    printf("\n\n\t\tBasic Data types\t\t\n\n");
    
    printf("\t\tint:\t\t%d\n", ent);
    printf("\t\tchar:\t\t%c\n", car);
    printf("\t\tchar string:\t%s\n", user);
    printf("\t\tfloat:\t\t%.2f\n", flot);
    printf("\t\tdouble:\t\t%.4lf\n", dobol);
    
    char back;
    printf("\n\t\t----------------------\n");
    printf("\n\t\tRETURN? Press any key: ");
    scanf(" %c", &back);

}

void act1a2(){

    //Activity #2
    int num1, num2, ans;
    char sign;
    
    printf("\n\n\n\t\tACTIVITY #2\t\t");
    printf("\n\n\t\tBasic Calculator\n\n\t\t");
    
    printf("Enter: \t");
    scanf("%d %c %d", &num1, &sign, &num2);
    
    switch(sign){
     case '+':
      ans = num1 + num2;
      printf("\n\t\tAns: %d %c %d = %d\n\n", num1, sign, num2, ans );
      break;
     case '-':
      ans = num1 - num2;
      printf("\n\t\tAns: %d %c %d = %d\n\n", num1, sign, num2, ans );
      break;
     case '*':
      ans = num1 * num2;
      printf("\n\t\tAns: %d %c %d = %d\n\n", num1, sign, num2, ans );
      break;
     case '/':
      ans = num1 / num2;
      printf("\n\t\tAns: %d %c %d = %d\n\n", num1, sign, num2, ans );
      break;
     case '%':
      ans = num1 % num2;
      printf("\n\t\tAns: %d %c %d = %d\n\n", num1, sign, num2, ans );
      break;
     default:
      printf("\n\t\terror input\n\n");
    
    break;
    }
    
    char back;
    printf("\n\t\t----------------------\n");
    printf("\n\t\tRETURN? Press any key: ");
    scanf(" %c", &back);
}

void act1a3(){
//Activity #3
    printf("\n\n\t\tACTIVITY #3\n\t\t");
    printf("\n\t\tGrade Calculator\n\n\t\t");
    
    float prelim;
    float midtrm;
    float finals;
    float result;
    
    printf("Prelim:\t\t");
    scanf("%f", &prelim);
    
    printf("\t\tMidterm:\t");
    scanf("%f", &midtrm);
    
    printf("\t\tFinals:\t\t");
    scanf("%f", &finals);
    
    result = (prelim + midtrm + finals) / 3;
    
    printf("\n\n\t\tYOUR GRADES:\n");
    printf("\n\t\tPRELIM:\t\t%.2f", prelim);
    printf("\n\t\tMIDTERM:\t%.2f", midtrm);
    printf("\n\t\tFINALS:\t\t%.2f", finals);
    printf("\n\t\t_____________________");
    printf("\n\n\t\tAVARAGE:\t%.2f\n\n", result);
    
    char back;
    printf("\n\t\t----------------------\n");
    printf("\n\t\tRETURN? Press any key: ");
    scanf(" %c", &back);
}

void act2P(){
    // 11/12 variables
    // 6 7 8 char
    // 6 5 4 int
   
    // 8/8 char
    // 4/6 integer
    char fName[100];
    char mName[100];
    char lName[100];
    char mmWor[25], dd[5];
    int  yyyy;
    char fbAcc[100];
    char email[100];
    int contact;
    char prog[100];
    int sec;
    
    printf("\n\n\t\tUser Display Information\t\t\n\n");
    
    printf("\tFirstname:\taris\n");
    printf("\tSecondname:\tgalang\n");
    printf("\tLastname:\tmendoza\n");
    printf("\tBirthdate 'mm/dd/yyyy'\n");
    printf("\tBirthdate:\tjan. 21, 2000\n");
    printf("\tFacebook Accnt:\taris21\n");
    printf("\tEmail:\t\taris@gmail.com\n");
    printf("\tContact:\t09991234567\n");
    printf("\tProgram:\tBSIT\n");
    printf("\tSection:\t1107\n");
    
    printf("\n\tPress any key to continue: ");
    getchar();
    getchar();
    
    clear();
    
    printf("\n\n\t\tUser Display Information");
    printf("\n\t\t       With Input\t\t\n\n");
    printf("\tFirstname:\t");
    scanf("%s", fName);
    printf("\tSecondname:\t");
    scanf("%s", mName);
    printf("\tLastname:\t");
    scanf("%s", lName);
    printf("\tBirthdate 'mm/dd/yyyy'\n");
    printf("\tBirthdate:\t");
    scanf("%s %s %d", mmWor, dd, &yyyy);
    printf("\tFacebook Accnt:\t");
    scanf("%s", fbAcc);
    printf("\tEmail:\t\t");
    scanf("%s", email);
    printf("\tContact:\t");
    scanf("%d", &contact);
    printf("\tProgram:\t");
    scanf("%s", prog);
    printf("\tSection:\t");
    scanf("%d", &sec);
    
    
    printf("\n\n\t\tUser Display Information");
    printf("\n\t\t       With Input\t\t\n\n");
    
    printf("\tFullname:\t%s %s %s\n", fName, mName, lName);
    printf("\tBirthdate:\t%s %s %d\n", mmWor, dd, yyyy);
    
    
    //4th integer
    int age = (2025 - yyyy);
    printf("\tAge:\t\t%d\n", age);
    printf("\tFacebook Accnt:\t%s\n", fbAcc);
    printf("\tContact:\t%d\n", contact);
    printf("\tProgram:\t%s\n", prog);
    
    printf("\n\tPress any key to continue: ");
    getchar();
    getchar();
    
    clear();
    
}

void act3Pto5P(){
   char pili;
       
   while(1){
   printf("\n\n\t------------------------------------");
   delayings(("\n\n\t      Quiz V1-V2-V3 ni Heraldo\n"), 35);
   delayings(("\n\t\tA.) Quiz Version 1"), 35);
   delayings(("\n\t\tB.) Quiz Version 2"), 35);
   delayings(("\n\t\tC.) Quiz Version 3"), 35);
   delayings(("\n\n\t\tX.) Exit"), 35);
   delayings(("\n\t\tY.) Quiz Features"), 35);
   delayings(("\n\n\t\tGo to: \t"), 35);
   scanf(" %c", &pili);
   pili = toupper(pili);
   getchar();
   
   if(pili == 'X'){
   printf("\n\n\t------------------------------------");
   delayings(("\n\n\t\tTHANK YOU SO MUCH! <3"), 35);
   printf("\n\n\t------------------------------------");
   printf("\n\n\n\n");
   break;}
   
   if(pili == 'Y'){
   
   printf("\n\n\t------------------------------------");
   printf("\n\n\t\tQUIZ VERSION # 1\n");
   printf("\n\t\tFeatures:");
   printf("\n\n\t\t• Include 'Participants' name");
   printf("\n\t\t• Passed or Failed Remarks");
   printf("\n\t\t• Shows Correct and Wrong");
   printf("\n\t\t• Shows the total answer");
   printf("\n\n\t------------------------------------");
   printf("\n\n\t\tQUIZ VERSION # 2\n");
   printf("\n\t\tChangelog:");
   printf("\n\n\t\t• added 'invalid' message");
   printf("\n\n\t\t• +If statement");
   printf("\n\t\t• +Nested If Statement");
   printf("\n\n\t------------------------------------");
   printf("\n\n\t\tQUIZ VERSION # 3\n");
   printf("\n\t\tChangelog:");
   printf("\n\n\t\t• Added 'invalid' message");
   printf("\n\t\t• Added 'Average' of the participants");
   printf("\n\t\t• Changes the remarks with: \n");
   printf("\n\tAverage \tScores \tRemarks");
   printf("\n\t• 91-100 \t 5/5 \t EXCELLENT");
   printf("\n\t• 81-90 \t 4/5 \t SATISFACTORY");
   printf("\n\t• 71-80 \t 3/5 \t VERY GOOD");
   printf("\n\t• 61-70 \t 2/5 \t GOOD");
   printf("\n\t• 51-60 \t 1/5 \t FAIR");
   printf("\n\t• 0-50 \t\t 0/5 \t FAILED");
   printf("\n\n\t\t• +If statement");
   printf("\n\t\t• +Nested If Statement");
   printf("\n\t\t• +Else If Ladder");
   printf("\n\n\t------------------------------------");
   printf("\n\n\tPress any 'key' to continue   ");
   printf("\n\n\n\n");
   break;
   }
   switch(pili){
   case 'A':
   qv1();
   break;
   case 'B':
   qv2();
   break;
   case 'C':
   qv3();
   break;
   default:
   printf("\n\n\t------------------------------------");
   printf("\n\n\t\tWALA SA PAGPILIAN!!!");
   }
   }
}

void qv1(){

/*
   Subject SCIENCE 
   
1. What body part do you use to see?
   a) Eyes ✓
   b) Nose
   c) Hands
2. What body part helps you hear sounds?
   a) Eyes
   b) Ears ✓
   c) Feet
3. What body part helps you smell?
   a) Nose ✓
   b) Mouth
   c) Neck
4. What body part do you walk with?
   a) Hands
   b) Arms
   c) Legs ✓
5. What body part do you use to taste?
   a) Tongue ✓
   b) Eyes
   c) Ears
*/
    char ok;
printf("\n\n\t------------------------------------");
printf("\n\n\t\tQUIZ VERSION # 1\n");
printf("\n\t\tFeatures:");
printf("\n\n\t\t• Include 'Participants' name");
printf("\n\t\t• Passed or Failed Remarks");
printf("\n\t\t• Shows Correct and Wrong");
printf("\n\t\t• Shows the total answer");
printf("\n\n\t\t• +If statement");
printf("\n\n\t------------------------------------");
printf("\n\n\tPress any 'key' to continue   ");
scanf(" %c", &ok);
getchar();
    
    char name[50];
    char ans;
    int puntos = 0;
    
    printf("\n\t------------------------------------");
    printf("\n\n\t\tWelcome to the C Quiz!\n");
    printf("\t\t   Subject: SCIENCE\n\n\t");
    
    printf("\n\tWhat is your name? %s", name);
    gets(name);
    
    //#1
    printf("\n\n\t------------------------------------");
    printf("\n\n\t1. What body part do you use to see?\n");
    printf("\n\tA. Eyes");
    printf("\n\tB. Nose");
    printf("\n\tC. Hands");
    printf("\n\n\tMy answer is:\t");
    scanf(" %c", &ans);
    
    if(ans == 'a' || ans == 'A'){
    printf("\n\n\t------------------------------------");
    printf("\n\n\tCorrect! <3");
    puntos++;
    }else{
    printf("\n\n\t------------------------------------");
    printf("\n\n\tWRONG!!! 'B' IS THE CORRECT ANSWER");
    }
    
    //#2
    printf("\n\n\t------------------------------------");
    printf("\n\n\t2. What body part helps you hear sounds?\n");
    printf("\n\tA. Eyes");
    printf("\n\tB. Ears");
    printf("\n\tC. Feet");
    printf("\n\n\tMy answer is:\t");
    scanf(" %c", &ans);
    
    if(ans == 'b' || ans == 'B'){
    printf("\n\n\t------------------------------------");
    printf("\n\n\tCorrect! <3");
    puntos++;
    }else{
    printf("\n\n\t------------------------------------");
    printf("\n\n\tWRONG!!! 'B' IS THE CORRECT ANSWER");
    }
    
    
    //#3
    printf("\n\n\t------------------------------------");
    printf("\n\n\t3. What body part helps you smell?\n");
    printf("\n\tA. Nose");
    printf("\n\tB. Mouth");
    printf("\n\tC. Neck");
    printf("\n\n\tMy answer is:\t");
    scanf(" %c", &ans);
    
    if(ans == 'a' || ans == 'A'){
    printf("\n\n\t------------------------------------");
    printf("\n\n\tCorrect! <3");
    puntos++;
    }else{
    printf("\n\n\t------------------------------------");
    printf("\n\n\tWRONG!!! 'B' IS THE CORRECT ANSWER");
    }
    
    
    //#4
    printf("\n\n\t------------------------------------");
    printf("\n\n\t4. What body part do you walk with?\n");
    printf("\n\tA. Hands");
    printf("\n\tB. Arms");
    printf("\n\tC. Legs");
    printf("\n\n\tMy answer is:\t");
    scanf(" %c", &ans);
    
    if(ans == 'c' || ans == 'C'){
    printf("\n\n\t------------------------------------");
    printf("\n\n\tCorrect! <3");
    puntos++;
    }else{
    printf("\n\n\t------------------------------------");
    printf("\n\n\tWRONG!!! 'B' IS THE CORRECT ANSWER");
    }
    
    
    //#5
    printf("\n\n\t------------------------------------");
    printf("\n\n\t5. What body part do you use to taste?\n");
    printf("\n\tA. Tounge");
    printf("\n\tB. Eyes");
    printf("\n\tC. Ears");
    printf("\n\n\tMy answer is:\t");
    scanf(" %c", &ans);
    
    if(ans == 'a' || ans == 'A'){
    printf("\n\n\t------------------------------------");
    printf("\n\n\tCorrect! <3");
    puntos++;
    }else{
    printf("\n\n\t------------------------------------");
    printf("\n\n\tWRONG!!! 'B' IS THE CORRECT ANSWER");
    }
    
    while(1){char showGrado;
    printf("\n\n\t------------------------------------");
    printf("\n\n\tWould you like to see you grade? Y/N?   ");
    scanf(" %c", &showGrado);
    showGrado = toupper(showGrado);
    if(showGrado == 'Y'){
    loadings();
    break;
    }else if(showGrado == 'N'){
    returnmain();
    return;
    break;
    }else{
    printf("\n\n\t------------------------------------");
    printf("\n\n\t\t       ERROR!");
    }}


    //score
    char delay[200];
    printf("\n\n\t------------------------------------");
    sprintf(delay, "\n\n\tName:\t\t%s", name);
    delayings(delay, 100);
    sprintf(delay,"\n\n\tTotal Score:\t%d/5", puntos);
    delayings(delay, 100);
    
    
    if(puntos > 3){
    delayings(("\n\tRemark:\t\tPASSED"), 50);
    }else{
    delayings(("\n\tRemark:\t\tFAILED"), 50);
    }
    printf("\n\n\t------------------------------------");
    
    char goback;
    printf("\n\n\tPress any 'key' to return <3   ");
    
    scanf(" %c", &goback);
    
}

void qv2(){

char ok;
printf("\n\n\t------------------------------------");
printf("\n\n\t\tQUIZ VERSION # 2\n");
printf("\n\t\tChangelog:");
printf("\n\n\t\t• added 'invalid' message");
printf("\n\n\t\t• +If statement");
printf("\n\t\t• +Nested If Statement");
printf("\n\n\t------------------------------------");
printf("\n\n\tPress any 'key' to continue   ");
scanf(" %c", &ok);
getchar();


char name[50];
    char ans;
    int puntos = 0;
    
    printf("\n\t------------------------------------");
    printf("\n\n\t\tWelcome to the C Quiz!\n");
    printf("\t\t   Subject: SCIENCE\n\n\t");
    
    printf("\n\tWhat is your name? %s", name);
    gets(name);
    
    //#1
    printf("\n\n\t------------------------------------");
    printf("\n\n\t1. What body part do you use to see?\n");
    printf("\n\tA. Eyes");
    printf("\n\tB. Nose");
    printf("\n\tC. Hands");
    printf("\n\n\tMy answer is:\t");
    scanf(" %c", &ans);
    ans = toupper(ans);
    
    if(ans == 'A' || ans == 'B' || ans == 'C' || ans == 'D')
    
    {if(ans == 'A'){
    printf("\n\n\t------------------------------------");
    printf("\n\n\tCorrect! <3");
    puntos++;
    }else{
    printf("\n\n\t------------------------------------");
    printf("\n\n\tWRONG!!! 'A' IS THE CORRECT ANSWER");
    }}else{
    printf("\n\n\t------------------------------------");
    printf("\n\n\tINVALID!!!");
    printf("\n\n\tWRONG!!! 'A' IS THE CORRECT ANSWER");}
    
    //#2
    printf("\n\n\t------------------------------------");
    printf("\n\n\t2. What body part helps you hear sounds?\n");
    printf("\n\tA. Eyes");
    printf("\n\tB. Ears");
    printf("\n\tC. Feet");
    printf("\n\n\tMy answer is:\t");
    scanf(" %c", &ans);
    ans = toupper(ans);
    
    if(ans == 'A' || ans == 'B' || ans == 'C' || ans == 'D')
   
    {if(ans == 'B'){
    printf("\n\n\t------------------------------------");
    printf("\n\n\tCorrect! <3");
    puntos++;
    }else{
    printf("\n\n\t------------------------------------");
    printf("\n\n\tWRONG!!! 'B' IS THE CORRECT ANSWER");
    }}else{
    printf("\n\n\t------------------------------------");
    printf("\n\n\tINVALID!!!");
    printf("\n\n\tWRONG!!! 'B' IS THE CORRECT ANSWER");}
    
    
    //#3
    printf("\n\n\t------------------------------------");
    printf("\n\n\t3. What body part helps you smell?\n");
    printf("\n\tA. Nose");
    printf("\n\tB. Mouth");
    printf("\n\tC. Neck");
    printf("\n\n\tMy answer is:\t");
    scanf(" %c", &ans);
    ans = toupper(ans);
    
    if(ans == 'A' || ans == 'B' || ans == 'C' || ans == 'D')
   
    {if(ans == 'A'){
    printf("\n\n\t------------------------------------");
    printf("\n\n\tCorrect! <3");
    puntos++;
    }else{
    printf("\n\n\t------------------------------------");
    printf("\n\n\tWRONG!!! 'A' IS THE CORRECT ANSWER");
    }}else{
    printf("\n\n\t------------------------------------");
    printf("\n\n\tINVALID!!!");
    printf("\n\n\tWRONG!!! 'A' IS THE CORRECT ANSWER");}
    
    
    
    //#4
    printf("\n\n\t------------------------------------");
    printf("\n\n\t4. What body part do you walk with?\n");
    printf("\n\tA. Hands");
    printf("\n\tB. Arms");
    printf("\n\tC. Legs");
    printf("\n\n\tMy answer is:\t");
    scanf(" %c", &ans);
    ans = toupper(ans);
    
    if(ans == 'A' || ans == 'B' || ans == 'C' || ans == 'D')
   
    {if(ans == 'C'){
    printf("\n\n\t------------------------------------");
    printf("\n\n\tCorrect! <3");
    puntos++;
    }else{
    printf("\n\n\t------------------------------------");
    printf("\n\n\tWRONG!!! 'C' IS THE CORRECT ANSWER");
    }}else{
    printf("\n\n\t------------------------------------");
    printf("\n\n\tINVALID!!!");
    printf("\n\n\tWRONG!!! 'C' IS THE CORRECT ANSWER");}
    
    
    
    //#5
    printf("\n\n\t------------------------------------");
    printf("\n\n\t5. What body part do you use to taste?\n");
    printf("\n\tA. Tounge");
    printf("\n\tB. Eyes");
    printf("\n\tC. Ears");
    printf("\n\n\tMy answer is:\t");
    scanf(" %c", &ans);
    ans = toupper(ans);
    
    if(ans == 'A' || ans == 'B' || ans == 'C' || ans == 'D')
   
    {if(ans == 'A'){
    printf("\n\n\t------------------------------------");
    printf("\n\n\tCorrect! <3");
    puntos++;
    }else{
    printf("\n\n\t------------------------------------");
    printf("\n\n\tWRONG!!! 'A' IS THE CORRECT ANSWER");
    }}else{
    printf("\n\n\t------------------------------------");
    printf("\n\n\tINVALID!!!");
    printf("\n\n\tWRONG!!! 'A' IS THE CORRECT ANSWER");}
    
    while(1){char showGrado;
    printf("\n\n\t------------------------------------");
    printf("\n\n\tWould you like to see you grade? Y/N?   ");
    scanf(" %c", &showGrado);
    showGrado = toupper(showGrado);
    if(showGrado == 'Y'){
    loadings();
    break;
    }else if(showGrado == 'N'){
    returnmain();
    return;
    break;
    }else{
    printf("\n\n\t------------------------------------");
    printf("\n\n\t\t       ERROR!");
    }}
    
    //score
    printf("\n\n\t------------------------------------");
    char delay[200];
    printf("\n\n\t------------------------------------");
    sprintf(delay, "\n\n\tName:\t\t%s", name);
    delayings(delay, 100);
    sprintf(delay,"\n\n\tTotal Score:\t%d/5", puntos);
    delayings(delay, 100);
    
    if(puntos > 3){
    delayings(("\n\tRemark:\t\tPASSED"), 100);
    }else{
    delayings(("\n\tRemark:\t\tFAILED"), 100);
    }
    printf("\n\n\t------------------------------------");
    
    char goback;
    printf("\n\n\tPress any 'key' to return <3   ");
    
    scanf(" %c", &goback);
    
}

void qv3(){

char ok;
printf("\n\n\t------------------------------------");
printf("\n\n\t\tQUIZ VERSION # 3\n");
printf("\n\t\tChangelog:");
printf("\n\n\t\t• Added 'invalid' message");
printf("\n\t\t• Added 'Average' of the participants");
printf("\n\t\t• Changes the remarks with: \n");
printf("\n\tAverage \tScores \tRemarks");
printf("\n\t• 91-100 \t 5/5 \t EXCELLENT");
printf("\n\t• 81-90 \t 4/5 \t SATISFACTORY");
printf("\n\t• 71-80 \t 3/5 \t VERY GOOD");
printf("\n\t• 61-70 \t 2/5 \t GOOD");
printf("\n\t• 51-60 \t 1/5 \t FAIR");
printf("\n\t• 0-50 \t\t 0/5 \t FAILED");
printf("\n\n\t\t• +If statement");
printf("\n\t\t• +Nested If Statement");
printf("\n\t\t• +Else If Ladder");
printf("\n\n\t------------------------------------");
printf("\n\n\tPress any 'key' to continue   ");
scanf(" %c", &ok);
getchar();

char name[50];
    char ans;
    int puntos = 0;
    
    printf("\n\t------------------------------------");
    printf("\n\n\t\tWelcome to the C Quiz!\n");
    printf("\t\t   Subject: SCIENCE\n\n\t");
    
    printf("\n\tWhat is your name? ");
    //scanf(" %[^\n]", name);
    //fgets(name, sizeof(name), stdin);
    gets(name);
    
    //#1
    printf("\n\n\t------------------------------------");
    printf("\n\n\t1. What body part do you use to see?\n");
    printf("\n\tA. Eyes");
    printf("\n\tB. Nose");
    printf("\n\tC. Hands");
    printf("\n\n\tMy answer is:\t");
    scanf(" %c", &ans);
    ans = toupper(ans);
    
    if(ans == 'A' || ans == 'B' || ans == 'C' || ans == 'D')
    
    {if(ans == 'A'){
    printf("\n\n\t------------------------------------");
    printf("\n\n\tCorrect! <3");
    puntos++;
    }else{
    printf("\n\n\t------------------------------------");
    printf("\n\n\tWRONG!!! 'A' IS THE CORRECT ANSWER");
    }}else{
    printf("\n\n\t------------------------------------");
    printf("\n\n\tINVALID!!!");
    printf("\n\n\tWRONG!!! 'A' IS THE CORRECT ANSWER");}
    
    //#2
    printf("\n\n\t------------------------------------");
    printf("\n\n\t2. What body part helps you hear sounds?\n");
    printf("\n\tA. Eyes");
    printf("\n\tB. Ears");
    printf("\n\tC. Feet");
    printf("\n\n\tMy answer is:\t");
    scanf(" %c", &ans);
    ans = toupper(ans);
    
    if(ans == 'A' || ans == 'B' || ans == 'C' || ans == 'D')
   
    {if(ans == 'B'){
    printf("\n\n\t------------------------------------");
    printf("\n\n\tCorrect! <3");
    puntos++;
    }else{
    printf("\n\n\t------------------------------------");
    printf("\n\n\tWRONG!!! 'B' IS THE CORRECT ANSWER");
    }}else{
    printf("\n\n\t------------------------------------");
    printf("\n\n\tINVALID!!!");
    printf("\n\n\tWRONG!!! 'B' IS THE CORRECT ANSWER");}
    
    
    //#3
    printf("\n\n\t------------------------------------");
    printf("\n\n\t3. What body part helps you smell?\n");
    printf("\n\tA. Nose");
    printf("\n\tB. Mouth");
    printf("\n\tC. Neck");
    printf("\n\n\tMy answer is:\t");
    scanf(" %c", &ans);
    ans = toupper(ans);
    
    if(ans == 'A' || ans == 'B' || ans == 'C' || ans == 'D')
   
    {if(ans == 'A'){
    printf("\n\n\t------------------------------------");
    printf("\n\n\tCorrect! <3");
    puntos++;
    }else{
    printf("\n\n\t------------------------------------");
    printf("\n\n\tWRONG!!! 'A' IS THE CORRECT ANSWER");
    }}else{
    printf("\n\n\t------------------------------------");
    printf("\n\n\tINVALID!!!");
    printf("\n\n\tWRONG!!! 'A' IS THE CORRECT ANSWER");}
    
    
    
    //#4
    printf("\n\n\t------------------------------------");
    printf("\n\n\t4. What body part do you walk with?\n");
    printf("\n\tA. Hands");
    printf("\n\tB. Arms");
    printf("\n\tC. Legs");
    printf("\n\n\tMy answer is:\t");
    scanf(" %c", &ans);
    ans = toupper(ans);
    
    if(ans == 'A' || ans == 'B' || ans == 'C' || ans == 'D')
   
    {if(ans == 'C'){
    printf("\n\n\t------------------------------------");
    printf("\n\n\tCorrect! <3");
    puntos++;
    }else{
    printf("\n\n\t------------------------------------");
    printf("\n\n\tWRONG!!! 'C' IS THE CORRECT ANSWER");
    }}else{
    printf("\n\n\t------------------------------------");
    printf("\n\n\tINVALID!!!");
    printf("\n\n\tWRONG!!! 'C' IS THE CORRECT ANSWER");}
    
    
    
    //#5
    printf("\n\n\t------------------------------------");
    printf("\n\n\t5. What body part do you use to taste?\n");
    printf("\n\tA. Tounge");
    printf("\n\tB. Eyes");
    printf("\n\tC. Ears");
    printf("\n\n\tMy answer is:\t");
    scanf(" %c", &ans);
    ans = toupper(ans);
    
    if(ans == 'A' || ans == 'B' || ans == 'C' || ans == 'D')
   
    {if(ans == 'A'){
    printf("\n\n\t------------------------------------");
    printf("\n\n\tCorrect! <3");
    puntos++;
    }else{
    printf("\n\n\t------------------------------------");
    printf("\n\n\tWRONG!!! 'A' IS THE CORRECT ANSWER");
    }}else{
    printf("\n\n\t------------------------------------");
    printf("\n\n\tINVALID!!!");
    printf("\n\n\tWRONG!!! 'A' IS THE CORRECT ANSWER");}
    
    while(1){char showGrado;
    printf("\n\n\t------------------------------------");
    printf("\n\n\tWould you like to see you grade? Y/N?   ");
    scanf(" %c", &showGrado);
    showGrado = toupper(showGrado);
    if(showGrado == 'Y'){
    loadings();
    break;
    }else if(showGrado == 'N'){
    returnmain();
    return;
    break;
    }else{
    printf("\n\n\t------------------------------------");
    printf("\n\n\t\t       ERROR!");
    }}
    
    //score
    char delay[200];
    printf("\n\n\t------------------------------------");
    sprintf(delay, "\n\n\tName:\t\t%s", name);
    delayings(delay, 100);
    sprintf(delay,"\n\n\tTotal Score:\t%d/5", puntos);
    delayings(delay, 100);
    
    
    //average and remark
    
    int avg = puntos * 10 + 50;
    sprintf(delay, "\n\tAverage\t\t%d", avg);
    delayings(delay, 100);
    
    if(avg == 100){
    sprintf(delay, "\n\tRemark:\t\tEXCELLENT!!!");
    }else if(avg == 90){
    sprintf(delay, "\n\tRemark:\t\tSATISFACTORY!!!");
    }else if(avg == 80){
    sprintf(delay, "\n\tRemark:\t\tVERY GOOD!!!");
    }else if(avg == 70){
    sprintf(delay, "\n\tRemark:\t\tGOOD!!!");
    }else if(avg == 60){
    sprintf(delay, "\n\tRemark:\t\tFAIR!!!");
    }else{
    sprintf(delay, "\n\tRemark:\t\tFAILED!!!");
    }delayings(delay, 100);
    
    
    
    printf("\n\n\t------------------------------------");
    printf("\n");
    
    char goback;
    printf("\n\n\tPress any 'key' to return <3   ");
    
    scanf(" %c", &goback);
    

}


void loadings(){

printf("\n\t------------------------------------");
    printf("\n\n\n");
    fflush(stdout);

    for (int i = 0; i < 12; i++) {
        int dots = i % 4;

        printf("\r\t\t     Loading"); // only use \r to overwrite same line
        for (int j = 0; j < dots; j++) printf(".");
        for (int k = dots; k < 3; k++) printf(" "); // clear leftover dots

        fflush(stdout);
        usleep(400000);
    }

    delayings(("\r\t\t       Done!        \n"), 65);
    
}

void returnmain(){

printf("\n\t------------------------------------");
    printf("\n\n\n");
    fflush(stdout);

    for (int i = 0; i < 12; i++) {
        int dots = i % 4;

        printf("\r\t    Returning to the main menu"); // only use \r to overwrite same line
        for (int j = 0; j < dots; j++) printf(".");
        for (int k = dots; k < 3; k++) printf(" "); // clear leftover dots

        fflush(stdout);
        usleep(400000);
    }

    delayings(("\r                        Done!                    \n"), 65);
    
}

void delayings(const char *text, int delay) {
    while (*text) {
        printf("%c", *text);
        fflush(stdout);           // flush each character
        usleep(delay * 1000);     // delay in microseconds (ms × 1000)
        text++;
    }
}
    