#include <stdio.h>  
#include "tucil1.h" 
#include <string.h>


void firstkartu24 (int a ,int b ,int c ,int d ) {    
    char op[4] = {'+','-','*','/'} ; 
    for (int i = 0 ; i < 4 ; i++) { 
        int result = 0 ; 
        char op1 = op[i]; 
        if (i==0) {
            result += (a+b);
        } 
        else if (i==1) {
            result += (a-b);
        } 
        else if (i==2) {
            result += (a*b);
        } 
        else if (i==3) {
            result += (a/b);
        }  
        
        for (int j = 0 ; j < 4 ;j++) { 
            
            char op2 = op[j]; 
            if (j==0) {
                result += c ;
            } 
            else if (j==1) {
                result -= c;
            } 
            else if (j==2) {
                result *= c;
            } 
            else if (j==3) {
                result /= c;
            }  
            for (int k = 0 ; k < 4 ;k++) { 
            
                char op3 = op[k]; 
                if (k== 0  ) {
                    result += d ;
                    if (result==24){ 
                        printf("((%d %c %d) %c %d) %c %d\n", a,op1,b,op2,c,op3,d) ;
                    } 
                } 
                else if (k==1) {
                    result -= d;
                    if (result==24){ 
                        printf("((%d %c %d) %c %d) %c %d\n", a,op1,b,op2,c,op3,d) ;
                    } 
                } 
                else if (k==2) {
                    result *= d ; 
                    if (result==24){ 
                        printf("((%d %c %d) %c %d) %c %d\n", a,op1,b,op2,c,op3,d) ;
                    }   
                } 
                else if (k==3) {
                    result /= d; 
                    if (result==24){ 
                        printf("((%d %c %d) %c %d) %c %d\n", a,op1,b,op2,c,op3,d) ;
                    }  
                }   
                
            }
        }
    }
}  
void secondkartu24 (int a ,int b ,int c ,int d ) {    
    char op[4] = {'+','-','*','/'} ; 
    for (int i = 0 ; i < 4 ; i++) { 
        int result = 0 ; 
        int result1 = 0 ; 
        char op1 = op[i]; 
        if (i==0) {
            result += (a+b);
        } 
        else if (i==1) {
            result += (a-b);
        } 
        else if (i==2) {
            result += (a*b);
        } 
        else if (i==3) {
            result += (a/b);
        }  
        
        for (int j = 0 ; j < 4 ;j++) { 
            
            char op2 = op[j]; 
            if (j==0) {
                result1 += (c+d) ;
            } 
            else if (j==1) {
                result1 += (c-d);
            } 
            else if (j==2) {
                result1 += (c*d);
            } 
            else if (j==3) {
                result1 += (c/d);
            }  
            for (int k = 0 ; k < 4 ;k++) { 
            
                char op3 = op[k]; 
                if (k== 0  ) {
                    result += result1 ;
                    if (result==24){ 
                        printf("(%d %c %d) %c (%d %c %d)\n", a,op1,b,op3,c,op2,d) ;
                    }
                } 
                else if (k==1) {
                    result -= result1;
                    if (result==24){ 
                        printf("(%d %c %d) %c (%d %c %d)\n", a,op1,b,op3,c,op2,d) ;
                    }
                } 
                else if (k==2) {
                    result *= result1 ; 
                    if (result==24){ 
                        printf("(%d %c %d) %c (%d %c %d)\n", a,op1,b,op3,c,op2,d) ;
                    }  
                } 
                else if (k==3) {
                    result /= result1; 
                    if (result==24){ 
                        printf("(%d %c %d) %c (%d %c %d)\n", a,op1,b,op3,c,op2,d) ;
                    } 
                }   
                
            }
        }
    }
} 
int sumsolusi (int a, int b, int c, int d) { 
    int solusi = 0 ;
    for (int i = 0 ; i < 4 ; i++) { 
        int result = 0 ; 
        
        if (i==0) {
            result += a+b;
        } 
        else if (i==1) {
            result += a-b;
        } 
        else if (i==2) {
            result += a*b;
        } 
        else if (i==3) {
            result += a/b;
        }  
        
        for (int j = 0 ; j < 4 ;j++) { 
            
            
            if (j==0) {
                result += c ;
            } 
            else if (j==1) {
                result -= c;
            } 
            else if (j==2) {
                result *= c;
            } 
            else if (j==3) {
                result /= c;
            }  
            for (int k = 0 ; k < 4 ;k++) { 
            
                
                if (k== 0  ) {
                    result += d ;
                    if (result==24){ 
                        solusi ++ ; 
                    } 
                } 
                else if (k==1) {
                    result -= d;
                    if (result==24){ 
                        solusi ++ ; 
                    } 
                } 
                else if (k==2) {
                    result *= d ; 
                    if (result==24){ 
                        solusi ++ ; 
                    }   
                } 
                else if (k==3) {
                    result /= d; 
                    if (result==24){ 
                        solusi ++ ; 
                    }  
                }   
                
            }
        }
    }

    return solusi ;
}
int sumsolusi1 (int a, int b, int c, int d) {  
    int solusi2 = 0 ; 
    for (int i = 0 ; i < 4 ; i++) { 
        int result = 0 ; 
        int result1 = 0 ; 
        
        if (i==0) {
            result += (a+b);
        } 
        else if (i==1) {
            result += (a-b);
        } 
        else if (i==2) {
            result += (a*b);
        } 
        else if (i==3) {
            result += (a/b);
        }  
        
        for (int j = 0 ; j < 4 ;j++) { 
            
        
            if (j==0) {
                result1 += (c+d) ;
            } 
            else if (j==1) {
                result1 += (c-d);
            } 
            else if (j==2) {
                result1 += (c*d);
            } 
            else if (j==3) {
                result1 += (c/d);
            }  
            for (int k = 0 ; k < 4 ;k++) { 
            
                
                if (k== 0  ) {
                    result += result1 ;
                    if (result==24){ 
                        solusi2 ++ ; 
                    }
                } 
                else if (k==1) {
                    result -= result1;
                    if (result==24){ 
                        solusi2 ++ ; 
                    }
                } 
                else if (k==2) {
                    result *= result1 ; 
                    if (result==24){ 
                        solusi2 ++ ; 
                    }  
                } 
                else if (k==3) {
                    result /= result1; 
                    if (result==24){ 
                        solusi2 ++ ; 
                    } 
                }   
                
            }
        }
    }
    return solusi2 ;
} 
int inputan(){  
    char str; 
    int n = 0 ; 
    scanf("%c" , str) ;
    if (str=='A' || str=='a') { 
        n += 1 ;  
    }
    else if (str=='2') { 
        n += 2 ;  
    } 
    else if (str=='3') { 
        n += 3 ;  
    } 
    else if (str=='4') { 
        n += 4 ;  
    } 
    else if (str=='5') { 
        n += 5 ;  
    } 
    else if (str=='6') { 
        n += 6 ;  
    } 
    else if (str=='7') {
        n += 7 ;   
    } 
    else if (str=='8') { 
        n += 8 ;  
    } 
    else if (str=='9') { 
        n += 9 ;  
    }
    else if (str=='J' || str=='j') { 
        n += 11 ;  
    } 
    else if (str=='Q' || str=='q') { 
        n += 12 ;  
    } 
    else if (str=='K' || str=='k') { 
        n += 13 ;  
    }  
    else { 
        n += 10 ;  
    } 
    return n; 
}

int main() { 
    
    
    int d[4] = {0,0,0,0}; 
    for (int r=0 ; r<4 ; r++ ) { 
        d[r] += inputan() ;
    } 
    int s = sumsolusi(d[0],d[1],d[2],d[3]) + sumsolusi(d[0],d[1],d[3],d[2]) +sumsolusi(d[0],d[2],d[1],d[3]) +sumsolusi(d[0],d[2],d[3],d[1]) +sumsolusi(d[0],d[3],d[1],d[2]) +sumsolusi(d[0],d[3],d[2],d[1]) +sumsolusi(d[1],d[0],d[2],d[3]) +sumsolusi(d[1],d[0],d[3],d[2]) +sumsolusi(d[2],d[0],d[1],d[3]) +sumsolusi(d[2],d[0],d[3],d[1]) +sumsolusi(d[3],d[0],d[1],d[2]) +sumsolusi(d[3],d[0],d[2],d[1]) +sumsolusi(d[1],d[2],d[0],d[3]) + sumsolusi(d[1],d[2],d[3],d[0]) + sumsolusi(d[1],d[3],d[0],d[2]) + sumsolusi(d[1],d[3],3,d[0]) +  sumsolusi(d[2],d[1],d[0],d[3]) + sumsolusi(d[2],d[1],d[3],d[0]) + sumsolusi(d[3],d[1],d[0],d[2]) + sumsolusi(d[3],d[1],d[2],d[0]) +   sumsolusi(d[2],d[3],d[0],d[1]) +sumsolusi(d[2],d[3],d[1],d[0]) + sumsolusi(d[3],d[2],d[0],d[1]) +sumsolusi(d[3],d[2],d[1],d[0]) + sumsolusi1(d[0],d[1],d[2],d[3]) + sumsolusi1(d[0],d[1],d[3],d[2]) +sumsolusi1(d[0],d[2],d[1],d[3]) +sumsolusi1(d[0],d[2],d[3],d[1]) +sumsolusi1(d[0],d[3],d[1],d[2]) +sumsolusi1(d[0],d[3],d[2],d[1]) +sumsolusi1(d[1],d[0],d[2],d[3]) +sumsolusi1(d[1],d[0],d[3],d[2]) +sumsolusi1(d[2],d[0],d[1],d[3]) +sumsolusi1(d[2],d[0],d[3],d[1]) +sumsolusi1(d[3],d[0],d[1],d[2]) +sumsolusi1(d[3],d[0],d[2],d[1]) +sumsolusi1(d[1],d[2],d[0],d[3]) + sumsolusi1(d[1],d[2],d[3],d[0]) + sumsolusi1(d[1],d[3],d[0],d[2]) + sumsolusi1(d[1],d[3],d[2],d[0]) +  sumsolusi1(d[2],d[1],d[0],d[3]) + sumsolusi1(d[2],d[1],d[3],d[0]) + sumsolusi1(d[3],d[1],d[0],d[2]) + sumsolusi1(d[3],d[1],d[2],d[0]) +   sumsolusi1(d[2],d[3],d[0],d[1]) +sumsolusi1(d[2],d[3],d[1],d[0]) + sumsolusi1(d[3],d[2],d[0],d[1]) +sumsolusi1(d[3],d[2],d[1],d[0]) ;
    printf ("ada %d solusi yang memungkinkan\n", s);  
    
    firstkartu24(d[0],d[1],d[2],d[3]) ;
    firstkartu24(d[0],d[1],d[3],d[2]) ;
    firstkartu24(d[0],d[2],d[1],d[3]) ;
    firstkartu24(d[0],d[2],d[3],d[1]) ;
    firstkartu24(d[0],d[3],d[1],d[2]) ;
    firstkartu24(d[0],d[3],d[2],d[1]) ;
    firstkartu24(d[1],d[0],d[2],d[3]) ;
    firstkartu24(d[1],d[0],d[3],d[2]) ;
    firstkartu24(d[2],d[0],d[1],d[3]) ;
    firstkartu24(d[2],d[0],d[3],d[1]) ;
    firstkartu24(d[3],d[0],d[1],d[2]) ;
    firstkartu24(d[3],d[0],d[2],d[1]) ;
    firstkartu24(d[1],d[2],d[0],d[3]) ; 
    firstkartu24(d[1],d[2],d[3],d[0]) ; 
    firstkartu24(d[1],d[3],d[0],d[2]) ; 
    firstkartu24(d[1],d[3],d[2],d[0]) ;  
    firstkartu24(d[2],d[1],d[0],d[3]) ; 
    firstkartu24(d[2],d[1],d[3],d[0]) ; 
    firstkartu24(d[3],d[1],d[0],d[2]) ; 
    firstkartu24(d[3],d[1],d[2],d[0]) ;   
    firstkartu24(d[2],d[3],d[0],d[1]) ;
    firstkartu24(d[2],d[3],d[1],d[0]) ; 
    firstkartu24(d[3],d[2],d[0],d[1]) ;
    firstkartu24(d[3],d[2],d[1],d[0]) ; 
    secondkartu24(d[0],d[1],d[2],d[3]) ;
    secondkartu24(d[0],d[1],d[3],d[2]) ;
    secondkartu24(d[0],d[2],d[1],d[3]) ;
    secondkartu24(d[0],d[2],d[3],d[1]) ;
    secondkartu24(d[0],d[3],d[1],d[2]) ;
    secondkartu24(d[0],d[3],d[2],d[1]) ;
    secondkartu24(d[1],d[0],d[2],d[3]) ;
    secondkartu24(d[1],d[0],d[3],d[2]) ;
    secondkartu24(d[2],d[0],d[1],d[3]) ;
    secondkartu24(d[2],d[0],d[3],d[1]) ;
    secondkartu24(d[3],d[0],d[1],d[2]) ;
    secondkartu24(d[3],d[0],d[2],d[1]) ;
    secondkartu24(d[1],d[2],d[0],d[3]) ; 
    secondkartu24(d[1],d[2],d[3],d[0]) ; 
    secondkartu24(d[1],d[3],d[0],d[2]) ; 
    secondkartu24(d[1],d[3],d[2],d[0]) ;  
    secondkartu24(d[2],d[1],d[0],d[3]) ; 
    secondkartu24(d[2],d[1],d[3],d[0]) ; 
    secondkartu24(d[3],d[1],d[0],d[2]) ; 
    secondkartu24(d[3],d[1],d[2],d[0]) ;   
    secondkartu24(d[2],d[3],d[0],d[1]) ;
    secondkartu24(d[2],d[3],d[1],d[0]) ; 
    secondkartu24(d[3],d[2],d[0],d[1]) ;
    secondkartu24(d[3],d[2],d[1],d[0]) ; 
    
    return 0 ;
}