#include <stdio.h>
Void generate_pascals_triangle(int n){
Int triangle [100][100];
For (int i=0; i<n;i++)
{
For (int k=0;k<n-i-1;k++)
{
Print(“ ”);
}
For (int j=0;j<=I;j++)
{
If(j==0 || j==i)
{
Triangle [i][j]=1;
}
Else
{
Triangle [i][j]=triangle[i-1][j-1] + triangle [i-1][j];
}
Print(“%d”, triangle[i][j]);
}
Print(“\n”)
}
}
Int main()
{
Int n=4;
generate_pascals_triangle(n);
return 0;
}
Output 1:
 1
1 1
1 2 1
1 3 3 1

change Int n=3
Output 2:
 1
1 1
1 2 1

change Int n=2
Output 3:
 1
1 1

