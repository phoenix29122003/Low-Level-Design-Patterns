#include <bits/stdc++.h>
using namespace std;

class SortingStrategy{
public:
    virtual void sort(vector<int>&arr)=0;
};

class BubbleSort:public SortingStrategy{
public:
    void sort(vector<int>&arr) override{
        cout<<"Sorting using Bubble Sort"<<endl;
    }
};

class MergeSort:public SortingStrategy{
public:
    void sort(vector<int>&arr) override{
        cout<<"Sorting using Merge Sort"<<endl;
    }
};

class QuickSort:public SortingStrategy{
public:
    void sort(vector<int>&arr) override{
        cout<<"Sorting using Quick Sort"<<endl;
    }
};

class SortingContext{
private:
    SortingStrategy* sortingStrategy;
public:
    SortingContext(SortingStrategy* sortingStrategy): sortingStrategy(sortingStrategy){}
    void setSortingStrategy(SortingStrategy* sortingStrategy){
        this->sortingStrategy=sortingStrategy;
    }
    void performSort(vector<int>&arr){
        sortingStrategy->sort(arr);
    }
};

int main(){
    vector<int>arr={1,2,3,4,5};
    BubbleSort bubblesort;
    SortingContext sortingcontext(&bubblesort);
    sortingcontext.performSort(arr);

    MergeSort mergeSort;
    sortingcontext.setSortingStrategy(&mergeSort);
    sortingcontext.performSort(arr);

    QuickSort quicksort;
    sortingcontext.setSortingStrategy(&quicksort);
    sortingcontext.performSort(arr);

    return 0;
}