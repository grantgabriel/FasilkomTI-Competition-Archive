#include <bits/stdc++.h>
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){
    BOOST
    int jumlahN, pivot = 0;
    string N, baru = "";
    cin >> N;

    jumlahN = N.length();

    for(int i = 0; i < (jumlahN / 2); i++){
        if(N.substr(pivot, 2) == "AA"){
            baru += "BB";
        }else if(N.substr(pivot, 2) == "AB"){
            baru += "BD";
        }else if(N.substr(pivot, 2) == "AC"){
            baru += "DD";
        }else if(N.substr(pivot, 2) == "AD"){
            baru += "CA";
        }else if(N.substr(pivot, 2) == "BA"){
            baru += "CD";
        }else if(N.substr(pivot, 2) == "BB"){
            baru += "AA";
        }else if(N.substr(pivot, 2) == "BC"){
            baru += "AC";
        }else if(N.substr(pivot, 2) == "BD"){
            baru += "BC";
        }else if(N.substr(pivot, 2) == "CA"){
            baru += "AB";
        }else if(N.substr(pivot, 2) == "CB"){
            baru += "CC";
        }else if(N.substr(pivot, 2) == "CC"){
            baru += "DB";
        }else if(N.substr(pivot, 2) == "CD"){
            baru += "CB";
        }else if(N.substr(pivot, 2) == "DA"){
            baru += "BA";
        }else if(N.substr(pivot, 2) == "DB"){
            baru += "DC";
        }else if(N.substr(pivot, 2) == "DC"){
            baru += "AD";
        }else if(N.substr(pivot, 2) == "DD"){
            baru += "DA";
        }
        pivot += 2;
    }

    cout << baru << "\n";

    return 0;
}