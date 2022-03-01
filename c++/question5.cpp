#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    int n1, n2, check, arr[100], k = 0, arr2[1000],p=0;
    string a, b,c;
    cin >> n1 >> n2;

    for (int i = 2; i <= n2; i++)
    {
        check = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                check = 0;
                break;
            }
        }
        if (check == 1)
        {
            if (i > n1)
            {
                arr[k] = i;
                k++;
            }
        }
    }

    for(int a=0; a<k; a++){
        cout << arr[a] << " ";
    }
    cout<<endl;
    

    for(int l =0; l<k; l++){
        for(int n=0; n< k; n++){
            if(arr[l]==arr[n]){
                continue;
            }
            else{
            stringstream ss;
            ss<<arr[l];
            ss>>a;
            ss<<arr[n];
            ss>>b;

            c = a.append(b);
            stringstream geek(c);
            geek>>arr2[p];
            p++;
            }
        }
    }




    for(int m=0; m<p; m++){
        cout << arr2[m] << " ";
    }



 
    return 0;
}