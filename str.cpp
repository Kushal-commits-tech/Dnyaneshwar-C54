{
    // Processing object x
    item x;
    cout << "object x" << "\n";
    x.getdata(10, 35.5); 
    x.putdata();

    // Processing object y at the very end
    item y;
    cout << "object y" << "\n";
    y.getdata(25, 66.6); 
    y.putdata();
    
    return 0;
}
