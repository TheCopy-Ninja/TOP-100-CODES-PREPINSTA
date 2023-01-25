// C++ Program To Find Quadrant in which Given Co-ordinates lie >>>

#include<iostream>
using namespace std;

int 
main () 
{

    //for initialization of coordinates
  int x, y;			//user input
  cout << "Insert the value for variable X and Y : ";
  
cin >> x >> y;
  
 
 
    //find true condition of first quadrant 
    if (x > 0 && y > 0)
    
 
cout << "point " << x << ", " << y << " lies in the First quadrant\n";
  
 
 
    //find second quadrant
    else if (x < 0 && y > 0)
    
 
cout << "point " << x << ", " << y << " lies in the Second quadrant\n";
  
 
 
    //To find third quadrant
    else if (x < 0 && y < 0)
    
 
cout << "point " << x << ", " << y << " lies in the Third quadrant\n";
  
//To find Fourth quadrant 
    else if (x > 0 && y < 0)
    
cout << "point " << x << "," << y << "lies in the Fourth quandrant\n";
  
    //To find dose not lie on origin 
    else if (x == 0 && y == 0)
    
cout << "point " << x << ", " << y << " on x-axix\n";
  
//On x-axis 
    else if (y == 0 && x != 0)
    
cout << "point " << x << ", " << y << " on x-axix\n";
  
    //On y-axis
    else if (x == 0 && y != 0)
    
cout << "point " << x << ", " << y << " on at y-axix\n";
  
return 0;
}
