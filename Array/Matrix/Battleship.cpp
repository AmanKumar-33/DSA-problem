#include<iostrem>
using namespaace std;

Int min(){



bool bttleship[4][4] = {
  { 0, 1, 1, 0 },
  { 0, 0, 0, 0 },
  { 0, 0, 1, 0 },
  { 0, 0, 1, 0 }

}
int hits = 0;
int misses = 0;

while(hits<4 ){
    int row, col;
    cout<<"selecting the row nd column to hit";
    cout << "Choose a row number between 0 and 3: ";
    cin>>row;
    cout << "Choose a col number between 0 and 3: ";
    cin>>col;
    if(battleship[row][col] == 1){
        cout<<"Hit"<<endl;
        hits++;
    }
    else{
        cout<<"Miss"<<endl;
    }
    misses++;

}
cout << "Victory!\n";
cout << "You won in " << numberofMisses<< "misses\n";
return 0;
}