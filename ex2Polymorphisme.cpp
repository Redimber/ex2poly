//
//  main.cpp
//  jggjhg
//
//  Created by Ibrahim El Mountasser on 18/05/2018.
//  Copyright © 2018 Ibrahim El Mountasser. All rights reserved.
//

#include <iostream>
using namespace std;
class Volante {
protected:
    int N,M;
public:
    Volante(int N, int M):N(N),M(M) {}
    virtual void show() {
        cout<<"C'est un animal qu'a "<<N<<" ailles et "<<M<<" pattes ";
    }
    ~Volante() {
        
    }
};

class Oiseau:public Volante {
    int nOeuf;
public: Oiseau(int n, int m, int no):Volante(n,m) {
    nOeuf = no;
    
}
    void show() {
        Volante::show();
        cout<<" nombre d'oeufs est "<<nOeuf<<endl;
    }
    ~Oiseau() {
        nOeuf = 0;
        N = 0;
        M = 0;
    }
};
void utilise(Volante &V) {
    V.show();
}
int main() {
    int na,np,no;
    cout<<"enter nombre ailles => ";
    cin>>na;
    cout<<"enter nombre pattes => ";
    cin>>np;
    cout<<"enter nombre d'oeufs => ";
    cin>>no;
    Oiseau o(na,np,no);
    utilise(o);
 
}






































































































































































