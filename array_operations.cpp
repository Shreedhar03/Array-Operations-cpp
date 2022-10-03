#include <iostream>
using namespace std;

 /* ------------- Operations with arrays ---------------- */

int main()
{
    // -------------- 1. copy -------------
    int t;
    cout << "length of your array :: " ;
    cin>>t;
    int arr[100];
    cout << "enter " << t << " elements of array :: " ;

    int i=0;
    while(i<t)        // creating an array
    {
        cin >> arr[i];
        i++;
    }
    cout << "Original Array :: " ;
    for(int i=0;i<t;i++)        
    {
        cout << arr[i] << " " ;
    }
                
    int arr1[t];            // copy array
    for(int i=0;i<t;i++)        
    {
        arr1[i]=arr[i] ;
    }
    
    cout << "\nCopied Array :: " ;
    for(int i=0;i<t;i++)        
    {
        cout << arr1[i] << " ";
    }

    // -------------- 2. delete ---------------

    int del;
    cout << "\nenter index to be deleted :: " ;    // 10 20 30 40
    cin >> del ;                                 // 10 20 40 __

    cout << arr[del] << " Deleted\n" ;
    for(int i=del;i<t;i++)
    {
        arr[i]=arr[i+1];
    }
    cout << "New Array after deletion :: " ;
    for(int i=0;i<t-1;i++)        
    {
        cout << arr[i] << " " ;
    }
    
                                // 10 20 30 40 50 __
                                // 10 20 __ 30 40 50
    
    // -------------- 3. insert ---------------
    
    int elem,pos;
    cout << "\nenter the element to add and the position :: ";
    cin >> elem >> pos ;

    for(int i=t-1;i>=pos;i--)
    {
        arr[i] = arr[i-1] ;
    }
    arr[pos-1] = elem ;

    cout << "New Array after updation :: " ;
    for(int i=0;i<t;i++)        
    {
        cout << arr[i] << " " ;
    }

    // -------------- 4. change/override element ---------------

    int chng , newele;
    cout << "\nenter element to update an enter new value :: " ;
    cin >> chng >> newele ;

    for(int i=0;i<=t;i++)
    {
        if(chng==arr[i])
        {
            arr[i]=newele;
            break;
        }
    }
    cout << "New Array after updation :: " ;
    for(int i=0;i<t;i++)        
    {
        cout << arr[i] << " " ;
    }

    return 0;
}