//  Rectangle-Visualiser
//
//  Created by ozp3 on 6.12.2022.
//

#include<stdio.h>

int i,j,rows,column;
char ch;
rectangle();
rectangleFinal();
top_bottom();
inputs();
inside();
area();
perimeter();

int main(void){
    rectangleFinal();
    return 0;
}

rectangle(){
    top_bottom();
    inside();
    if(column>1){
        top_bottom();
    } //If column is 1, no need to run second top_bottom() function.
}
rectangleFinal(){
    inputs();
    rectangle();
    area();
    perimeter();
}
inputs(){
    printf("Enter a single character to make it border:\n"); //Asking user to enter border character
        scanf("%c", &ch);
    do{
        printf("Enter row number: "); //Rows is width of the rectangle
        scanf("%d", &rows);

        printf("Enter column number: "); //Column is lenght of the rectangle
        scanf("%d", &column);
        if (rows<0 || rows==0 || column<0 || column==0) //Checking the parameters of rows and column if they are good to go otherwise prints error message
        {
            printf("Parameter must be positive integer!\n");
        }
    } while (rows<0 || rows==0 || column<0 || column==0); //Asking user until its input correct parameters
}
top_bottom(){
    for (i=0; i<rows; i++)
        {
            printf("%c ",ch);
        }
} //Function of printing top or bottom line of the rectangle
inside(){
    printf("\n");
    for (i=0; i<column-2; i++)
    {
        if(rows!=1){
            printf("%c ",ch);
            for (j=0; j<(2*rows)-4; j++)
            {
                printf(" ");
            }
        }
        printf("%c \n",ch);
    }
} //There are not empty spaces in printing so it prints space character for filling inside of the rectangle.
area(){  
    if (rows>0 && column>0){
        int areaOfTheRectangle;
        areaOfTheRectangle = rows * column;
        if(rows==column){
        printf("\nArea of the square is: %d",areaOfTheRectangle);
        } else {
            printf("\nArea of the rectangle is: %d",areaOfTheRectangle);
        }
    }
} //It prints area whether it is square or rectangle.
perimeter(){
    if (rows>0 && column>0)
    {
        int perimeterOfTheRectangle;
        perimeterOfTheRectangle = 2*(rows+column);
        if(rows==column){
            printf("\nPerimeter of the square is: %d", perimeterOfTheRectangle);;
        } else {
            printf("\nPerimeter of the rectangle is: %d", perimeterOfTheRectangle);
        }
        
    }
} //It prints perimeter whether it is square or rectangle.
