#include "Sorting.h"


void Sorting::swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void Sorting::printError(string sortingMethod, int *array , int length)
{
    cout << "********" << endl << endl;
    cout << sortingMethod << "- Test Failed" << endl;
    for(int i = 0; i< length; i++)
    {
        cout << array[i] << endl;
    }
    cout << "********" << endl << endl;
}

void Sorting::Test(int *SortedArray, int arrlength, string sortingMethod)
{
   for(int i = 0; i < arrlength -1; i++)
   {
        if(SortedArray[i] > SortedArray[i+1])
        {
            printError(sortingMethod, SortedArray, arrlength);            
        }
   } 
}

void Sorting::selectionSort(int* unsortedArray, int arrlength)
{
    //find the lowest and swap it to the first element
    if(arrlength == 0 || arrlength == 1)
    {
        return;
    } 
    int nLowestPos;
    for(int j = 0; j < arrlength; j++)
    {
        nLowestPos = j;
        for(int i = j + 1; i < arrlength; i++)
        {
            if(unsortedArray[nLowestPos] > unsortedArray[i])
            {
                nLowestPos =  i;
            }   
        }       
        if(unsortedArray[nLowestPos] < unsortedArray[j])
        {
             swap(unsortedArray[nLowestPos], unsortedArray[j]);             
        }        
    }
    //testing
    Test(unsortedArray,arrlength, "Selection Sort");
    
}

/*void Sorting::selectionSort(int* unsortedArray, int arrlength)
{
    if(arrlength == 0 || arrlength == 1)
    {
        return;
    }    
   for(int i = 1; i < arrlength; i++)
   {
        if(unsortedArray[i] < unsortedArray[i-1])
        {
            for(int j = i; unsortedArray[j] <= unsortedArray[j-1] && j > 0; j--)
            {
                swap(unsortedArray[j], unsortedArray[j-1]);                  
          }
        }
   }
   //Testing
   Test(unsortedArray,arrlength, "Selection Sort");
}
*/
void Sorting::bubbleSort(int *unsortedArray, int arrlength)
{
    if(arrlength == 0 || arrlength == 1)
    {
        return;
    }
    for(int j = 0; j < arrlength; j++)
    {
        for(int i = 0; i < arrlength -j - 1; i++)  //improve by having having arrlength -j -1 instead of arrlength -1
        {
            if(unsortedArray[i] > unsortedArray[i+1])
            {
                swap(unsortedArray[i], unsortedArray[i+1]);
            }
        }
    }
    //Testing
   Test(unsortedArray,arrlength, "Bubble Sort");
}

void Sorting::insertionSort(int *unsortedArray, int arrlength)
{
    
    //Testing
    Test(unsortedArray,arrlength, "Insertion Sort");
}