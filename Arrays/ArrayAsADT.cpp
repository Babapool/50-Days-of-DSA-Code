#include <iostream>
#include<climits>
using namespace std;

class Array
{
    private:
        int *array;
        int size;
        int length;
    
    public:
        Array(int size)
        {
           this->size = size;
            length = 0;
            array = new int[size];
        }

        void insertAllElements();
        void displayAllElements();
        void insertNElements(int n);
        void appendElement(int num);
        void deleteAtIndex(int index);
        void addElementAtIndex(int key,int n);
        void addElementatIndex2(int key,int n);
        int linearSearch(int elemmnt);
        int improvedLinearSearch(int element);
        int getElement(int index);
        int maxElement();
        int minElement();
        int sumOfElements();
        int averageElement();
        void reverseArray();

};
void Array::insertAllElements()
{
    length = 0;
    cout<<"Enter elements of the array:"<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
        length++;
    }

    return;
}

void Array::displayAllElements()
{
    if(length == 0)
    {
        cout<<"No elements in array."<<endl;
    }
    else
    {
        cout<<"Elements of array are : ";
        for(int i=0; i<length; i++)
        {
            cout<<array[i]<<" ";
        }
        cout<<endl;
    }
        
    return;
}

void Array::insertNElements(int n)
{
    if(n > size-length)
    {
        cout<<"Elements more than space in array."<<endl;
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            cin>>array[length];
            length++;
        }
    }

    return;
}

void Array::appendElement(int num)
{
    if(length<size)
    {
        array[length] = num;
        length++;
    }
    else
    {
        cout<<"Array Full, no position to insert element into."<<endl;
    }
}

void Array::addElementAtIndex(int key,int n)
{
    //length++;
    array[length]=array[n];
    length++;
    array[n]=key;
}
void Array::addElementatIndex2(int key,int n)
{
      if(n>length || n<0)
    {
        cout<<"Index not present";
        return;
    }
    else if(length==size)
    {
        cout<<"Removig the element at index : "<<n<<endl;
        array[n] = key;
    }
    else
    {
        for(int i=length; i>n; i--)
        {
            array[i] = array[i-1];
        }
        array[n] = key;
        length++;
    }
}
int Array::linearSearch(int element)
{
    for(int i=0; i<length; i++)
    {
        if(element==array[i])
        {
            return i;
        }
    }
    return -1;
}
void Array::deleteAtIndex(int index)
{
    if(index>=length || index<0)
    {
        cout<<"No element at the specified index"<<endl;
    }
    else
    {
        for(int i=index; i<length-1; i++)
        {
            array[i] = array[i+1];
        }
        length--;
    }
}

int Array::improvedLinearSearch(int element)
{
    for(int i=0; i<length; i++)
    {
        if(element==array[i])
        {
            swap(array[i], array[i-1]);
            return i-1;
        }
    }
    return -1;
}
int Array::getElement(int index)
{
    return array[index];
}

int Array::minElement()
{
    int min = array[0];

    for(int i=0; i<length; i++)
    {
        if(array[i]<min)
        {
            min = array[i];
        }
    }

    return min;
}

int Array::maxElement()
{
    int max = array[0];

    for(int i=0; i<length; i++)
    {
        if(max<array[i])
        {
            max = array[i];
        }
    }

    return max;
}

int Array::sumOfElements()
{
    int sum = 0;

    for(int i=0; i<length; i++)
    {
        sum+=array[i];
    }

    return sum;
}

int Array::averageElement()
{
    return sumOfElements()/length;
}

void Array::reverseArray()
{
    int start=0;
    int end=length-1;

    while(start==end || start<end)
    {
       
        swap(array[start],array[end]);
         start++;
        end--;
        
    }

    displayAllElements();
}


int main()
{
    Array *a;

    int size;
    cout<<"Enter size of array:";
    cin>>size;

    a=new Array(size);

    a->insertAllElements();
    a->displayAllElements();
    a->addElementAtIndex(12,3);
    a->displayAllElements();
    a->addElementatIndex2(100,4);
    a->displayAllElements();
    a->deleteAtIndex(6);
    a->displayAllElements();
    a->deleteAtIndex(6);
    a->displayAllElements();
    a->appendElement(18);
    a->displayAllElements();
    cout<<"Max element: "<< a->maxElement()<<endl;
    cout<<"Min element: "<<a->minElement()<<endl;
    a->reverseArray();
    //a->displayAllElements();

    return 0;
}