#include <iostream>
#include <vector>
using namespace std;
string diagnose_diabetes(vector<int> glucose_levels) {
    try {
        // Check if the vector is empty
        if (glucose_levels.empty()) {
            throw invalid_argument("The glucose level readings vector cannot be empty");
        }   
        // Calculate the average glucose level
        int sum = 0;
        for (int level : glucose_levels) {
            sum += level;
        }
        double average = sum / glucose_levels.size();
        cout<<endl;
        cout<<"Result :: "<<endl;
        // Check the average glucose level and return a diagnosis
        if (average < 70) {
            return "Hypoglycemia";
        } else if (average >= 70 && average < 130) {
            cout << "The person does not have diabetes." << endl;
            return "Normal glucose level";
        } else if (average >= 130 && average < 180) {
        cout << "The person has diabetes." << endl;
            return "Hyperglycemia";
        } else {
        cout << "The person has diabetes." << endl;
            return "Severe hyperglycemia";
        }
    } catch (invalid_argument& e) {
        // Log the error
        cerr << "Error: " << e.what() << endl;
        return "Error: " + string(e.what());
    }
}
bool has_diabetes(bool polyuria, bool polydipsia, bool sudden_weight_loss, bool weakness, bool polyphagia, bool blurred_vision, bool genital_thrush, bool visual_impairment, bool itching, bool irritability, bool delayed_healing, bool partial_paresis, bool muscle_stiffness, bool alopecia, bool obesity) {
    // Check if the person has diabetes based on the symptoms
    if (polyuria && polydipsia && sudden_weight_loss && weakness && polyphagia && blurred_vision && genital_thrush && visual_impairment && itching && irritability && delayed_healing && partial_paresis && muscle_stiffness && alopecia && obesity) {
        return true;
    } else {
        return false;
    }
}
void case1(){
    cout<<"values taken by scanner (after placing the blood taken out from finger tip): "<<endl;
    vector<int>V;
    cout<<"Glucose level "<<endl;
    int a; 
    for(int i=0;i<5;i++){
        cout<<"For "<<i+1<<" test:";
        cin>>a;
        V.push_back(a);
    }
    cout<<diagnose_diabetes(V);
    cout<<endl;
}
void case2(){
    bool has_diabetes_result [4];
    cout<<"Have you experienced increased thirst or frequent urination?"<<endl;
    cout<<"Your Answer: ((1 for yes/ 0 for no))";cin>>has_diabetes_result[0];
    cout<<"Have you noticed unexplained weight loss or weight gain?"<<endl;
    cout<<"Your Answer: ((1 for yes/ 0 for no))";cin>>has_diabetes_result[1];
    cout<<"Have you had a family history of diabetes?"<<endl;
    cout<<"Your Answer: ((1 for yes/ 0 for no))";cin>>has_diabetes_result[2];
    cout<<"Have you experienced blurred vision or changes in your vision?"<<endl;
    cout<<"Your Answer: ((1 for yes/ 0 for no))";cin>>has_diabetes_result[3];
    has_diabetes(has_diabetes_result[0], has_diabetes_result[1], has_diabetes_result[2], has_diabetes_result[3], true, true, true, true, true, true, true, true, true, true, true);
    if (has_diabetes_result) {
    } else {
       
    }
}
int main(){
    int d; 
    cout<<"Starting the programm ... "<<endl;
    while(d!=0){
        cout<<endl;
        cout<<"Case 1:Diagnosis"<<endl;
        cout<<"Case 2:DIABETIES"<<endl;
        cout<<"Enter 0 for exit:"<<endl;
        cout<<endl;
    cout<<"Enter the value (what you want to perform ):";
    cin>>d;

        if(d==1){
            case2();
        }
        else if(d==2){
            case1();
        }
        else if(d==0){
            break;
        }
        else {
            cout<<"invalid number ";
        }
        cout<<" ---------------------------------------------------------------------------------- "<<endl;
    } 
    
    return 0;
}