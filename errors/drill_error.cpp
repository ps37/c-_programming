//
//  main.h
//  own_strtok
//
//  Created by Prudhvi Chandra Simhadri on 2/15/15.
//  Copyright (c) 2015 Prudhvi Chandra Simhadri. All rights reserved.
//
#include "std_lib_facilities.h"

int main()
try{
    int x = 2000; char c = narrow_cast<int>x;
    if(c==2000) cout<<"success"; else cout<<c;
    keep_window_open();
    return 0;
}

catch (exception& e){
    cerr<<"error:"<<e.what()<<'\n';
    keep_window_open();
    return 1;
}

catch (...){
        cerr<<"Oops: unknown exception!"<<'\n';
        keep_window_open();
        return 2;
    }
