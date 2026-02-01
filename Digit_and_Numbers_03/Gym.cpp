#include<iostream>
using namespace std;
int fitnessAssessment(int duration,int bpm){
    cout<<"\n---Fitness Assessment---\n";

    if(bpm<120 &&duration>30){
        cout<<"Fitness Level : Good Endurance\n";
        cout<<"Performance Rating : Best\n";
    }
    else if(bpm>160 &&duration>20){
        cout<<"Fitness Level : High Intensity Training\n";
        cout<<"Performance Rating : Excellent\n";
    }
    else if(bpm>120&& bpm<160 &&duration>40){
        cout<<"Fitness Level : Steady State Cardio\n";
        cout<<"Performance Rating : Average\n";
    }
    else{
        cout<<"Fitness Level : Gernal Fitness\n";
        cout<<"Performance Rating : Low\n";
    }
}

int workoutIntensity(int bpm,char intensity,int duration){
    float Score;
    cout<<"\n---Workout Intensity--- \n";
    if (intensity=='L')
    {
        Score=(bpm/10.0)+(duration/10.0)+(1.0*5.0);
        cout<<"Intensity Score : "<<Score<<"\n";
    }
    if (intensity=='M')
    {
        Score=(bpm/10.0)+(duration/10.0)+(2.0*5.0);
        cout<<"Intensity Score : "<<Score<<"\n";
    }
    if (intensity=='H')
    {
        Score=(bpm/10.0)+(duration/10.0)+(3.0*5.0);
        cout<<"Intensity Score : "<<Score<<"\n";
    }
    if(Score>30){
        cout<<"Workout Type : Intense Workout\n";
    }
    if(20<Score&&Score<=30){
        cout<<"Workout Type : Good Workout\n";
    }
    if(10<Score&&Score<=20){
        cout<<"Workout Type : Moderate Workout\n";
    }
    if(Score<=10){
        cout<<"Workout Type : Light Workout\n";
    }
}
int heartRate(int bpm){
    float maxHeartRate=195;
    float hr_percentage=(bpm/maxHeartRate)*100.0;
    cout<<"\n---Heart Rate Analysis---\n";
    cout<<"Maximum Heart Rate "<<maxHeartRate<<" bpm\n";
    cout<<"Current Heart Rate Percent "<<hr_percentage<<" of max\n";
    if(50<hr_percentage&&hr_percentage<=70){
        cout<<"Heart Rate Zone : Fat Burn Zone\n";
    }
    if(70<hr_percentage&&hr_percentage<=85){
        cout<<"Heart Rate Zone : Cardio Zone\n";
    }
    if(85<hr_percentage&&hr_percentage<=100){
        cout<<"Heart Rate Zone : Peak Zone\n";
    }
    if(hr_percentage<50){
        cout<<"Heart Rate Zone : Below Training Zone\n";
    }
}
int foodEquivalent(int calorie){
    cout<<"\n---Food Equivalent---\n";
    if(calorie<300){
        cout<<"You Burned approx a Samosa\n";
    }
    if(calorie>=300&&calorie<500){
        cout<<"You Burned approx a Pizza\n";
    }
    if(calorie>=500){
        cout<<"You Burned approx a Burger\n";
    }
}
int runningExercise(int workout,int duration,int weight,int intensity,int bpm){
    int calorie;
    if(intensity=='L'){
        calorie=(8*weight*duration)/60;
    }
    if(intensity=='M'){
         calorie=(11*weight*duration)/60;
    }
    if(intensity=='H'){
         calorie=(14*weight*duration)/60;
    }
    cout<<"---Workout Details---\n";
    cout<<"Exercise : Running \n";
    cout<<"Duration : "<<duration<<" min\n";
    cout<<"Body Weight : "<<weight <<" kg\n";
    if (intensity=='L')
    {
        cout<<"Intensity : Low\n";
    }
    if (intensity=='M')
    {
        cout<<"Intensity : Medium\n";
    }
    if (intensity=='H')
    {
        cout<<"Intensity : High\n";
    }
    cout<<"\n---Calorie Burn Analysis---\n";
    cout<<"Calorie Burned : "<<calorie<<"\n";
    cout<<"Calorie Burned per min : "<<(float)calorie/duration<<"\n";
    foodEquivalent(calorie);
    heartRate(bpm);
    workoutIntensity(bpm,intensity,duration);
    fitnessAssessment(duration,bpm);
}
int cyclingExercise(int workout,int duration,int weight,int intensity,int bpm){
   int calorie;
    if(intensity=='L'){
        calorie=(6*weight*duration)/60;
    }
    if(intensity=='M'){
         calorie=(9*weight*duration)/60;
    }
    if(intensity=='H'){
         calorie=(12*weight*duration)/60;
    }
    cout<<"\n---Calorie Burn Analysis---\n";
    cout<<"Calorie Burned : "<<calorie<<"\n";
    cout<<"Calorie Burned per min : "<<(float)calorie/duration<<"\n";
    foodEquivalent(calorie);
    heartRate(bpm);
    workoutIntensity(bpm,intensity,duration);
    fitnessAssessment(duration,bpm);
}
int weightLift(int workout,int duration,int weight,int intensity,int bpm){
   int calorie;
    if(intensity=='L'){
        calorie=(3*weight*duration)/60;
    }
    if(intensity=='M'){
         calorie=(6*weight*duration)/60;
    }
    if(intensity=='H'){
         calorie=(9*weight*duration)/60;
    }
    cout<<"\n---Calorie Burn Analysis---\n";
    cout<<"Calorie Burned : "<<calorie<<"\n";
    cout<<"Calorie Burned per min : "<<(float)calorie/duration<<"\n";
    foodEquivalent(calorie);
    heartRate(bpm);
    workoutIntensity(bpm,intensity,duration);
    fitnessAssessment(duration,bpm);
}
int swimming(int workout,int duration,int weight,int intensity,int bpm){
    int calorie;
    if(intensity=='L'){
        calorie=(7*weight*duration)/60;
    }
    if(intensity=='M'){
         calorie=(10*weight*duration)/60;
    }
    if(intensity=='H'){
         calorie=(13*weight*duration)/60;
    }
    cout<<"\n---Calorie Burn Analysis---\n";
    cout<<"Calorie Burned : "<<calorie<<"\n";
    cout<<"Calorie Burned per min : "<<(float)calorie/duration<<"\n";
    foodEquivalent(calorie);
    heartRate(bpm);
    workoutIntensity(bpm,intensity,duration);
    fitnessAssessment(duration,bpm);
}
int main(){
    char workout;
    cout<<"Enter R- for running \n C- for cycling \n W- for weightlift \n S- for swimming \n";
    cin>>workout;
    int duration;
    cout<<"enter duration";
    cin>>duration;
    int weight;
    cout<<"Enter weight";
    cin>> weight;
    int bpm;
    cout<<"Enter Heart rate ";
    cin>>bpm;
    char intensity;
    cout<<"Enter L- for low \n M- for Moderate \n H- for High\n";
    cin>>intensity;
    if(workout=='R'){
        runningExercise(workout,duration,weight,intensity,bpm);
    }
    if(workout=='C'){
        cyclingExercise(workout,duration,weight,intensity,bpm);
    }
    if(workout=='W'){
       weightLift(workout,duration,weight,intensity,bpm);
    }
    if(workout=='S'){
        swimming(workout,duration,weight,intensity,bpm);
    }
    cout<<"\n---Workout Summary---\n";
    cout<<"\nBecome Strong Everday \n";
}