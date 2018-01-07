/** Author's note:
    1. Includes a lot of Ctrl+C > Ctrl+V
    2. Variables:
        P[x] = amount of 1x1x1 cm. cubes painted on [x] ([0] - [6]) sides
        A = length (in cm)
        B = width (in cm)
        C = height (in cm)
    3. Limits:
        0 < A, B, C <= 1000;
    4. Just because you don't get the result you expected doesn't necessarily mean it's wrong. First, recheck and/or redo your calculations, then try to correct the program. **/

#include <iostream>

using namespace std;

long long P[7] = {-1, -1, -1, -1, -1, -1, -1}, A, B, C;

int main()
{
    cin >> A >> B >> C;
    if(A >= 3 && B >= 3 && C >= 3)
    {
        P[3] = 8;
        P[2] = A * B * C - (A - 2) * (B - 2) * 2 - (A - 2) * (C - 2) * 2 - (B - 2) * (C - 2) * 2 - (A - 2) * (B - 2) * (C - 2) - 8;
        P[1] = (A - 2) * (B - 2) * 2 + (A - 2) * (C - 2) * 2 + (B - 2) * (C - 2) * 2;
        P[0] = (A - 2) * (B - 2) * (C - 2);
    }
    else if(A == 2 && B >= 3 && C >= 3)
    {
        P[3] = 8;
        P[2] = A * B * C - (B - 2) * (C - 2) * A - 8;
        P[1] = (B - 2) * (C - 2) * 2;
    }
    else if(A >= 3 && B == 2 && C >= 3)
    {
        P[3] = 8;
        P[2] = A * B * C - (A - 2) * (C - 2) * B - 8;
        P[1] = (A - 2) * (C - 2) * 2;
    }
    else if(A >= 3 && B >= 3 && C == 2)
    {
        P[3] = 8;
        P[2] = A * B * C - (A - 2) * (B - 2) * C - 8;
        P[1] = (A - 2) * (B - 2) * 2;
    }
    else if(A == 2 && B == 2 && C >= 3)
    {
        P[3] = 8;
        P[2] = A * B * C - 8;
    }
    else if(A == 2 && B >= 3 && C == 2)
    {
        P[3] = 8;
        P[2] = A * B * C - 8;
    }
    else if(A >= 3 && B == 2 && C == 2)
    {
        P[3] = 8;
        P[2] = A * B * C - 8;
    }
    else if(A == 2 && B == 2 && C == 2)
    {
        P[3] = 8;
    }
    else if(A == 1 && B >= 3 && C >= 3)
    {
        P[4] = 4;
        P[3] = B * C - (B - 2) * (C - 2) - 4;
        P[2] = (B - 2) * (C - 2);
    }
    else if(A >= 3 && B == 1 && C >= 3)
    {
        P[4] = 4;
        P[3] = A * C - (A - 2) * (C - 2) - 4;
        P[2] = (A - 2) * (C - 2);
    }
    else if(A >= 3 && B >= 3 && C == 1)
    {
        P[4] = 4;
        P[3] = A * B - (A - 2) * (B - 2) - 4;
        P[2] = (A - 2) * (B - 2);
    }
    else if(A >= 1 && B == 2 && C == 3)
    {
        P[4] = 4;
        P[3] = C * B - 4;
    }
    else if(A >= 2 && B == 1 && C == 3)
    {
        P[4] = 4;
        P[3] = C * A - 4;
    }
    else if(A >= 1 && B == 3 && C == 2)
    {
        P[4] = 4;
        P[3] = B * C - 4;
    }
    else if(A >= 2 && B == 3 && C == 1)
    {
        P[4] = 4;
        P[3] = B * A - 4;
    }
    else if(A >= 2 && B == 3 && C == 1)
    {
        P[4] = 4;
        P[3] = B * A - 4;
    }
    else if(A >= 2 && B == 3 && C == 1)
    {
        P[4] = 4;
        P[3] = B * A - 4;
    }
    else if(A >= 2 && B == 3 && C == 1)
    {
        P[4] = 4;
        P[3] = B * A - 4;
    }
    else if(A >= 3 && B == 1 && C == 2)
    {
        P[4] = 4;
        P[3] = A * C - 4;
    }
    else if(A >= 3 && B == 2 && C == 1)
    {
        P[4] = 4;
        P[3] = A * B - 4;
    }
    else if((A == 2 && B == 2 && C == 1) || (A == 2 && B == 1 && C == 2) || (A == 1 && B == 2 && C == 2))
    {
        P[4] = 4;
    }
    else if(A == 1 && B == 1 && C >= 3)
    {
        P[4] = C - 2;
        P[5] = 2;
    }
    else if(A == 1 && B >= 3 && C == 1)
    {
        P[4] = B - 2;
        P[5] = 2;
    }
    else if(A >= 3 && B == 1 && C == 1)
    {
        P[4] = A - 2;
        P[5] = 2;
    }
    else if((A == 2 && B == 1 && C == 1) || (A == 1 && B == 2 && C == 1) || (A == 1 && B == 1 && C == 2))
    {
        P[5] = 2;
    }
    else if(A == 1 && B == 1 && C == 1)
    {
        P[6] = 1;
    }
    for(long long x = 0; x < 7; x++)
    {
        if(P[x] == -1)
        {
            P[x] = 0;
        }
        cout << P[x] << " ";
    }
    return 0;
}
