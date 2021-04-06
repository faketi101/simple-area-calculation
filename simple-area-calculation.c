#include <stdio.h>
#include <math.h>

// Quadrilaterals
float area_quadrilateral (float width, float height,float width_2);

// Triangles
float area_triangles (float width, float height, float hyp);

// circle
float area_circle(float redius);

// float cal_area (float width, float height, float hyp);

float inputs ();


int main()
{   
    printf("Area Calculator\n");
    
   char ch = 'y';
    do
    {
    inputs();
    printf("\n");
    printf("Do you want to calculate again? (y/n):");
    scanf(" %c",&ch);
    
    }while(ch=='y');
    
 
    
    
    return 0;
}

float inputs (){
    // declaring variables
    float width, height, hyp, width_2, redius;
    int inp;
    
    // Triangles Inputs
    void inp_triangles(){
    
    printf("Enter the value of Hypotenuse: \n");
    scanf("%f", &hyp);
    }
   
    
    // Quadrilaterals Inputs
    void inp_quadrilaterals(){
    
    printf("Enter the value of width 2: \n");
    scanf("%f", &width_2);
    
    }
    
    // Quadrilaterals Inputs
    void inp_circle(){
    
    printf("Enter the value of redius: \n");
    scanf("%f", &redius);
    
    }
    
    // showing options
    printf("\n");
    printf("Which type of shape area you want to calculate?\n");
    printf("Enter 1 for All;\n");
    printf("Enter 2 for Quadrilaterals;\n");
    printf("Enter 3 for Triangles;\n");
    printf("Enter 4 for Circle;\n");
    scanf("%d", &inp);
    
    
    // taking common inputs
    if(inp == 1 || inp == 2 || inp == 3){
    printf("Enter the value of width: \n");
    scanf("%f", &width);
    
    printf("Enter the value of height: \n");
    scanf("%f", &height);
    }
    
    if(inp == 1){
        inp_quadrilaterals();
        inp_triangles();
        inp_circle();
        
        area_quadrilateral(width, height, width_2);
        area_triangles(width, height, hyp);
        area_circle(redius);
    }else if(inp == 2){
        inp_quadrilaterals();
        
        area_quadrilateral(width, height, width_2);
    }else if(inp == 3){
        inp_triangles();
        
        area_triangles(width, height, hyp);
    
    }else if(inp == 4){
        inp_circle();
        
        area_circle(redius);
    }else{
        printf("Invalid Input!\n");
    }
    
    
}

// Quadrilaterals
float area_quadrilateral (float width, float height,float width_2){
    
    float area;
    printf("\n================Quadrilateral================\n\n");
    
    area = width * width;
    printf("Area of Square is: %.2f\n", area);
    
    area = width * height;
    printf("Area of Rectangle is: %.2f\n", area);
    
    area = width * height;
    printf("Area of Paralleogram is: %.2f\n", area);
    
    area = (width + width_2) * height;
    printf("Area of Trapezium is: %.2f\n", area);
    
    
}

// Triangles
float area_triangles (float width, float height, float hyp){
    float area;
    
    printf("\n=================Triangles=================\n\n");
    
    area = 0.5 * width * height;
    printf("Area of Triangle is: %.2f\n", area);
    
    area = (sqrt(3)/4)* width * width;
    printf("Area of Equilateral Triangle is: %.2f\n", area);
    
    area = (height + width + hyp) / 2;
    printf("Area of Scalene Triangle is: %.2f\n", area);
    
    
}

// circle
float area_circle(float redius){
    float area;
    printf("\n=================Circle=================\n\n");
    area = 3.1416 * redius * redius;
    printf("Area of Circle is: %.2f\n", area);
}



