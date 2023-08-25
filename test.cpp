#include <iostream>
using namespace std;

class Friend{
    public:
    int age;
    double cgpa;
    string name;
    int num_of_bf;

    void showDetails(){
        cout<< name<< endl;
        cout<< age<<endl;
        cout<< cgpa << " "<< num_of_bf<<endl;
    }

};
int main() {
    int n;
    cout<< "Number of friend: ";
    cin>>n;

    Friend arr[n];

    for(int i=0; i<n; i++){
        cout<< "Enter "<< i+1<< "st"<< " Friend Info: "<<endl;
        cout<< "Name: ";
        cin>> arr[i].name;
        cout<< "Age: ";
        cin>> arr[i].age;
        cout<< "Cgpa: ";
        cin>> arr[i].cgpa;
        cout<< "Number of bf:";
        cin>> arr[i].num_of_bf;
    }

    for(int i=0; i<n; i++){
     arr[i].showDetails();
    }

    return 0;
}
